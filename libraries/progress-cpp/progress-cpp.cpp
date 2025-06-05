// SPDX-FileCopyrightText: 2016 Prakhar Srivastav <prakhar@prakhar.me>
// SPDX-License-Identifier: MIT

#include <progresscpp/ProgressBar.hpp>

int main() {

    const int limit = 10000;

    // initialize the bar
    progresscpp::ProgressBar progressBar(limit, 70);

    for (int i = 0; i < limit; i++) {
        // record the tick
        ++progressBar;

        // display the bar
        progressBar.display();
    }

    // tell the bar to finish
    progressBar.done();
}
