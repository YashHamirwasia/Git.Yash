# include<stdio.h>
int factorial(int x){ int fac = 1;  
for(int i = 1; i<= x;i++) {fac = fac*i;}
return fac;
}
int combination(int i, int a) {int ncr = factorial(i)/(factorial(a)*factorial((i-a)));
return ncr;}
int main() 
{int n;
printf("Enter the No. of Lines:");
scanf("%d", &n);


for(int i = 1; i<=n; i++) 
{ int a = 0; for (int k = 1; k<=2*n-1; k++) 

 //{if( i== 1) {printf("%d", a); a=a+1;}
   if (i>=1 && (i+k)>=n+1 && (i+k)%2!= 0 && k <= n+i-1 )
   { int fact = combination((i-1),a); a=a+1; printf("%d", fact);}
else if ( i>=1 && (i+k)%2==0){printf(" ");}
else{printf(" ");}  printf("\n"); }

 
return 0; }
     