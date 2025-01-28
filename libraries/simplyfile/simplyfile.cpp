// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <array>
#include <fcntl.h>
#include <iostream>
#include <simplyfile/FileDescriptor.h>
#include <unistd.h>
void f();
int main() {
    auto fd = simplyfile::FileDescriptor(open("/dev/zero", O_RDONLY));
    auto buffer = std::array<char, 20>{};
    auto len = read(fd, buffer.data(), buffer.size());
    std::cout << "read " << len << " characters into buffer\n";
}
