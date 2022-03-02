#include <stdio.h>
int FindArea(int x, int y)
 {
    // It will calculate area of rectangle
    int area = x * y;

    // It will print the final output
    printf("\nArea of the rectangle is: %d units\n", area);
}

int main() {
    int length, width;

    printf("Enter the length & width of the rectangle::\n");
    scanf("%d", &length);
    scanf("%d", &width);
    
    FindArea(length, width);
    return 0;
}
