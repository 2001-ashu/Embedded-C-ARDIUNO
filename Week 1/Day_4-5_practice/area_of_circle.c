
#include <stdio.h>
#include<math.h>
#define PI  3.14
double circle(int r)
{
    return PI * pow(r,2);
}
int main() {
    // Write C code here
int r;
printf("Enter radius:");
scanf("%d",&r);
float ans=circle(r);
printf("Area of Circle: %f",ans);

    return 0;
}