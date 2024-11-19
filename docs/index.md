<!--
    SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
    SPDX-License-Identifier: CC0-1.0
-->
# Libraries
<input type="text" id="myInput" onkeyup="myFunction()" placeholder="Search for...">
<script>
function myFunction() {
  // Declare variables
  var input, filter, table, tr, td, i, txtValue;
  input = document.getElementById("myInput");
  filter = input.value.toUpperCase();
  table = document.getElementById("myTable");
  tr = table.getElementsByTagName("tr");

  // Loop through all table rows, and hide those who don't match the search query
  for (i = 0; i < tr.length; i++) {
    let tdTags = tr[i].getElementsByTagName("td");
    let hit = false;
    for (j = 0; j < tdTags.length; ++j) {
        if (j == 2) continue;
        td = tdTags[j]
        if (td) {
          txtValue = td.textContent || td.innerText;
          if (txtValue.toUpperCase().indexOf(filter) > -1) {
            hit = true;
          }
        }
    }
    if (hit) {
        tr[i].style.display = "";
    } else {
        tr[i].style.display = "none";
    }
  }
}
</script>
<div markdown>
<table markdown id="myTable">
<tr>
<th>Name
</th>
<th>Version
</th>
<th>cpm.dependencies
</th>
<th>Categories</th>
</tr>
{%
    include-markdown "lines.md"
%}
</table>
</div>
