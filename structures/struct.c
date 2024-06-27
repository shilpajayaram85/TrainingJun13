#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point2D;

//struct line2D; // Forward declaration

typedef struct line2D {
    point2D point;
    struct line2D *next;
} line2D;

int main() {
    line2D line01;
    line2D line02;

    // Initialize line01 points
    line01.point.x = 10;
    line01.point.y = 20;

    // Set the next pointer of line01 to line02
    line01.next = &line02;
	
	line02.point.x = 90;
	line02.point.y = 89;

    // Initialize line02 points through the next pointer of line01
    line01.next->point.x = 40;
    line01.next->point.y = 30;

    // Print the values
    printf("Line01 Point: (%d, %d)\n", line01.point.x, line01.point.y);
    printf("Line02 Point: (%d, %d)\n", line01.next->point.x, line01.next->point.y);
    printf("Address of Line02: %p\n", (void *)line01.next);

    return 0;
}

