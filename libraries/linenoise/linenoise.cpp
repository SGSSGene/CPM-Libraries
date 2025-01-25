// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <linenoise.h>

int main(int argc, char **argv) {
    linenoiseSetMultiLine(1);
    linenoisePrintKeyCodes();
    return 0;
}
