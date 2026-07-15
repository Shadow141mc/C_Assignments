#include <math.h>
#include <stdio.h>

void read_data(float *, float *, float *);
void read_data2(float *, float *);
void cal_area(float *, float *, float *);
void cal_area2(float *, float *);

int main()
{
    printf("Program to find Area of Triangle!!\n");
    float side1, side2, side3, base, height;
    int ch;
    printf("Choise:\n[1] Find area using three sides (Heron's Law).\n[2] Find area using base and height.\n");
    printf("Enter = ");
    scanf("%d", &ch);
    if(ch == 1)
    {
        read_data(&side1, &side2, &side3); 
        cal_area(&side1, &side2, &side3);
        printf("The area of triangle is: %f", side1);
    }
    else if(ch == 2)
    {
        read_data2(&base, &height);
        cal_area2(&base, &height);
        printf("The area of triangle is: %f", base);
    }
    else 
    {
        printf("Wrong choise!!");
    }
    return 0;
}

void read_data(float *pside1, float *pside2, float *pside3)
{
    printf("Enter the three sides of triangle, separated by (,):\n");
    scanf("%f, %f, %f", pside1, pside2, pside3);
}

void read_data2(float *pbase, float *pheight)
{
    printf("Enter the base of height of triangle, separated by (,):\n");
    scanf("%f, %f", pbase, pheight);
}

void cal_area(float *pside1, float *pside2, float *pside3)
{
    float sp = 0.0; //semi perimeter
    sp = ((*pside1) + (*pside2) + (*pside3)) / 2.0;
    *pside1 = sqrt(sp * (sp - *pside1) * (sp - *pside2) * (sp - *pside3));
}

void cal_area2(float *pbase, float *pheight)
{
    *pbase = 1.0/2.0 * (*pbase) * (*pheight);
}

