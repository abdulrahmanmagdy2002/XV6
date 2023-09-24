#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[]) {
    struct rtcdate date;

    // Check if the gettime system call is available
    if (getTime(&date) < 0) {
        printf(2, "gettime system call failed.\n");
        exit();
    }

    // Print the current date and time
    printf(1, "Date and Time currently is: %d-%d-%d %d:%d:%d\n", date.year, date.month, date.day, date.hour, date.minute, date.second);

    exit();
}