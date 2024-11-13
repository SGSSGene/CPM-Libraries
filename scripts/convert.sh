#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
# SPDX-License-Identifier: CC0-1.0

set -Eeuo pipefail

file=cpm.dependencies
SPDX="SPDX"

echo "# ${SPDX}-FileCopyrightText: 2024 Simon Gene Gottlieb"
echo "# ${SPDX}-License-Identifier: CC0-1.0"
for name in $(jq -r '.packages[].name' ${file}); do
    export NAME=${name}
    homepage=$(jq -r '.packages[] | select(.name == env.NAME) | .homepage' ${file})
    version=$(jq -r '.packages[] | select(.name == env.NAME) | .version' ${file})
    code=$(jq -r '.packages[] | select(.name == env.NAME)' ${file} | perl -npe 's/ /&nbsp;/g' | perl -npe 's/\R/<br\/>/g')
    echo "| [${name}](${homepage}) | ${version} | <pre><code>${code}</code></pre> |"
done
