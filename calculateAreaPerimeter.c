//ecerri22
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double squareArea(int a){
    return  a * a;
}

double squarePerimeter(int a){
    return 4 * a;
}

double circleArea(int r){
    return 3.14159 * (r * r) ;
}

double circlePerimeter(int r){
    return 2 * 3.14159 * r;
}

int main(){
   int a, r;
   char shape[20];
   double area, perimeter;

    printf("Enter the shape you want to calculate area and perimeter of (square / circle): ");
    scanf("%s", &shape);

    if(strcmp(shape, "square") == 0){
      printf("Enter the length of the side of square: ");

      scanf("%d", &a);

      area = squareArea(a);
      perimeter = squarePerimeter(a);

      printf("The area of the square is: %.2lf, and the perimeter is: %.2lf", area, perimeter);

    } else if(strcmp(shape, "circle") == 0){
        printf("Enter the radius of the circle: ");

        scanf("%d", &r);

        area = circleArea(r);
        perimeter = circlePerimeter(r);

        printf("The area of the circle is: %.2lf, and the perimeter is: %.2lf", area, perimeter);

    } else {
      printf("The shape you put is not a square or circle!");
    }


  return 0;
}
