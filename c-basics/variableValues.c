# include <stdio.h>

// C variable values

/* Change Variable Values
If you assign a new value to an existing variable, it will overwrite the previous value: */
int main() {
    int myNumber = 15;
    myNumber = 10;
    printf("%d \n", myNumber);

    int num = 9;
    int other = 23;

    num = other;

    printf("%d \n", num);

    int nume = 11;
    int oth;

    oth = nume;

    printf("%d \n", oth);

    // Add variables together 

    int x = 5;
    int y = 6;

    int sum = x+y;
    printf("%d \n", sum);

    // Declare multiple variables

    int z=5, f=7, g=8;
    printf("%d \n", z+f+g);

    // Same value to multiple

    int q,w,e;
    q=w=e=50;
    printf("%d \n", q+w+e);

    int studentID = 13;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    printf("ID: %d \n", studentID);
    printf("Age: %d \n", studentAge);
    printf("Fee: %d \n", studentFee);
    printf("Grade: %d \n", studentGrade);

    // Multiplying numeric variables
    int length = 4;
    int width = 6;
    int area;

    // calculate rectangle area
    area = length * width;
    printf("Area is: %d", area);

}
