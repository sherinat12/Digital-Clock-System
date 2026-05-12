#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Colors
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"

// Function for delay
void delayOneSecond() {
#ifdef _WIN32
    Sleep(1000);
#else
    sleep(1);
#endif
}

// Function for line
void line() {
    printf(BLUE "+--------------------------------------+\n" RESET);
}

// Main
int main() {

    while (1) {

        system("cls || clear");

        time_t now;
        struct tm *current;

        time(&now);
        current = localtime(&now);

        line();

        printf(CYAN "|         DIGITAL CLOCK SYSTEM         |\n" RESET);

        line();

        printf(GREEN "\n");
        printf("            %02d : %02d : %02d\n",
               current->tm_hour,
               current->tm_min,
               current->tm_sec);

        printf(RESET "\n");

        line();

        delayOneSecond();
    }

    return 0;
}