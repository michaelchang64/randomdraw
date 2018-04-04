#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
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

//TODO implement the while loop stuff into sep function
//void *dynStrRealloc(**

int main(int argc, char **argv) {
    char c;
    int size = 1;
    int count = 0;

    char *name1 = malloc(sizeof(char) * size);
    assert(name1);
    char *name2 = malloc(sizeof(char) * size);
    assert(name2);

    printf("Enter name: ");
    while((c = getchar()) != '\n') {
        while(count >= size) {
            name1 = realloc(name1, sizeof(char) * (size*=2));
            assert(name1);
        }
        name1[count] = c;
        count++;
    }
    count = 0;

    printf("\nEnter name: ");
    while((c = getchar()) != '\n') {
        while(count >= size) {
            name2 = realloc(name2, sizeof(char) * (size*=2));
            assert(name2);
        }
        name2[count] = c;
        count++;
    }

    randomSelect(name1, name2);
    free(name1);
    free(name2);
    return 0;
}
