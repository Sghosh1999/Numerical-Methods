#include<stdio.h>
#include<math.h>

int main() {
    int i,j,m,n,l;
    float x[10],a[10][10],b[10],c[10];
    printf("\nEnter the value of n : \n");
    scanf("%d",&n);
    printf("\nEnter the number of iterations : \n");
    scanf("%d",&l);
    printf("\nEnter the right hand side constants : \n");
    for(i=0;i<n;i++) {
        scanf("%f",&b[i]);
    }
    printf("\nEnter the coefficients row wise : \n");
    for(i=0;i<n;i++) {
        x[i]=0;
        for(j=0;j<n;j++) {
            scanf("%f",&a[i][j]);
        }
    }
    m=1;
    line:
    for(i=0;i<n;i++) {
        c[i]=b[i];
        for(j=0;j<n;j++) {
            if(i!=j) {
                c[i]=c[i]-a[i][j]*x[j];
            }
        }
    }
    for(i=0;i<n;i++) {
        x[i]=c[i]/a[i][i];
    }
    m++;
    if(m<=l) {
        goto line;
    }
    else {
        printf("\nThe Solution is : \n");
        for(i=0;i<n;i++) {
            printf("\nx(%d) = %f\n",i,x[i]);
        }
    }
}
