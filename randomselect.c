#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

void randomSelect(char *x, char *y) {
    srand(time(0));
    int a = rand();
    int b = rand();
    do {
        if(a > b) {
            printf("%s has first pick\n", x);
        } else if (b > a) {
            printf("%s has first pick\n", y);
        }
    } while(a == b);
}

int main(int argc, char **argv) {
    char *x = malloc(sizeof(x) * 50);
    char *y = malloc(sizeof(y) * 50);

    printf("Enter name: ");
    scanf("%s", x);
    printf("\nEnter name: ");
    scanf("%s", y);
    
    // This doesn't work for some reason
    if(strncmp(x, y, 6)){
        exit(-1);
    } else {
        randomSelect(x, y);
    }
    return 0;
}
