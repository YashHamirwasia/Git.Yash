# include<stdio.h>
int main () {
    int arr[5] = {6,9,80,78,7};
    int a;
printf("Enter a:\n");
scanf("%d", &a);
// Let's assume that array is arr[6,9,80,78,7].
int brr[5];
if(5>=a)
{for(int k = 0; k<=4;k++)
{if(k<=a-1){brr[a-(1+k)] = arr[4-k];}
 else if (k>a-1 && k<=4) {brr[k] = arr[k-a]; }}}

else if (5<a) 
{a = a%5; for(int k = 0; k<=4;k++)
{if(k<=a-1){brr[a-(1+k)] = arr[4-k];} else if (k>a-1 && k<=4) {brr[k] = arr[k-a]; }}}

for(int l = 0; l<=4; l++)
 {printf("%d \n", brr[l]);}

    return 0;
}