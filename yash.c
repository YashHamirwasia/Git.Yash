# include<stdio.h>
// FUNCTIONS AND POINTERS

 
int main() 
{
int arr[3][4] = {1,0,1,1,0,1,0,1,1,0,0,1};
// int brr[3][3] = {1,2,3,4,5,6,7,8,9};
// int crr[2][2];

int sumax = 0;
int index = 0;
for(int i=0; i<=2;i++)
 { int sum = 0;for (int j=0; j<=3;j++)
  { sum = arr[i][j] + sum;if(sumax < sum) {sumax = sum; index = i;}}}
  printf("The row number %d is with max 1's and has max sum as %d", index, sumax);
//for(int i =1; i<=2; i++) {for(int k = 1; k<=2; k++) {printf("%d", crr[i][k]);}
//printf("\n");}
    return 0;
}
