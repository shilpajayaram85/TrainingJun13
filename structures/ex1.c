
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x : 4;
    int y : 4;
	int z : 4;
} point2D;


int main() {

printf("Size of point %d\n", sizeof(point2D));

    return 0;
}

