#include<stdio.h>
#include<math.h>
int main(){
    int a,b ,c ,d ;
    int x;
    printf("Enter value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt((b*b)-(4*a*c));
    if(d>=0){
        printf("two real and distinct roots:");
        printf("%d%d\n",x=(-b+sqrt(d))/(2*a));
        printf("%d%d",x=(-b-sqrt(d))/2*a);
    }
    else if (d==0){
        printf("TWO equal roots:");
        printf("%d%d\n",x=(-b+sqrt(d))/(2*a));
        printf( "%d%d",x=(-b-sqrt(d))/(2*a));
    }
    else{
        printf("Roots are complex");
    }
    return 0;
}