#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
# SPDX-License-Identifier: CC0-1.0

set -Eeuo pipefail

file=cpm.dependencies
SPDX="SPDX"


(
echo "<!--"
echo "    ${SPDX}-FileCopyrightText: 2024 Simon Gene Gottlieb"
echo "    ${SPDX}-License-Identifier: CC0-1.0"
echo "-->"
for name in $(jq -r '[.packages[].name] | sort_by(.) | .[]' ${file}); do
    export NAME=${name}
    description=$(yq -r '.[env.NAME].description' more_info.yaml)
    homepage=$(yq -r '.[env.NAME].homepage' more_info.yaml)
    version=$(jq -r '.packages[] | select(.name == env.NAME) | .version' ${file})
    code=$(jq -r '.packages[] | select(.name == env.NAME) | del(.homepage)' ${file})
    category=$(yq -yr '.[env.NAME].categories' more_info.yaml)
    echo "<tr markdown>"
    echo "<td>"
    echo "<a href=\"${homepage}\">${name}</a><br>${description}</td>"
    echo "<td>${version}</td><td markdown>"
    echo "??? quote \"cpm.dependencies/cpmpack.json\""
    echo $'    ```json'
    echo "${code}" | perl -npe 's/^/        /g'
    echo $'    ```'
    echo "</td><td markdown>"
    echo ""
    echo "${category}"
    echo "</td>"
    echo "</tr>"
#    echo "| [${name}](${homepage}) | ${version} | <pre><code>${code}</code></pre> |"
done
)> /tmp/convert.sh
cat /tmp/convert.sh
rm /tmp/convert.sh
