#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>

const int presses = 5;

int main () {

    srand (time(NULL));

    // Declare time variables
    struct timeval tstart, tend;
    long int diffs[presses];
    long int sum = 0;
    char dummy[1];

    for (int i = 0; i < presses; i++) {
        // produce random number
        int trand = (rand() % 4500000) + 500000;
        // Sleep for trand seconds
        usleep(trand);
        // Get initial time
        gettimeofday (&tstart, NULL);
        // Request keypress
        std::cout << "\n\nQuickly, hit return!" << std::endl;
        std::cin.getline(dummy, 0);
        gettimeofday (&tend, NULL);
        diffs[i] = (tend.tv_usec + 1000000 * tend.tv_sec) -
                   (tstart.tv_usec + 1000000 * tstart.tv_sec);
        std::cout << "This took you " << (double) diffs[i] / 1e6 << " seconds." << std::endl;
    }
    for (int i = 0; i < presses; i++) {
        sum += diffs[i];
    }
    std::cout << "\n\nOn average, it took you " <<
        (double) sum/ (double) presses /1e6 << " seconds." << std::endl;
}
