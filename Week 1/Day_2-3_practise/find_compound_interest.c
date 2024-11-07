#include<stdio.h>
#include<math.h>
int main()
{
    double rate,principal,time;
    double compound_Interest;
    printf("Enter Principal ammount:");
    scanf("%lf",&principal);
    printf("Enter rate:");
    scanf("%lf",&rate);
    printf("Enter time");
    scanf("%lf",&time);
  double ammount = principal * ((pow((1 + rate / 100), time)));

    compound_Interest=ammount-principal;
    printf("Compound interest :%lf\n",compound_Interest);

}