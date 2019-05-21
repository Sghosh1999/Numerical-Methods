#include<stdio.h>
float y(float x)
{
    return 1/(1+x*x); 
}
int main()
{
    float a,b,h,sum;
    int i,n,m;

    printf("Enter a=x0(lower limit), b=xn(upper limit), number of subintervals: ");
    scanf("%f%f%d",&a,&b,&n);
    h = (b-a)/n;
    sum=0;

        if(n%6==0)
        {
            sum=sum+((3*h/10)*(y(a)+y(a+2*h)+5*y(a+h)+6*y(a+3*h)+y(a+4*h)+5*y(a+5*h)+y(a+6*h)));
            a=a+6*h;
            printf("Value of integral is %f\n", sum);
        }
        else
            printf("Sorry! Weddle rule is not applicable");
}