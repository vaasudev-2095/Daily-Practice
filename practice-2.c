/**

  Given an integer N, find the sum of its digits using tail recursion.

     Example
        Input:
              5824

        Output:
               19

      Constraint

      * No loops.
      * No string conversion.
*/
#include<stdio.h>
int digitSum(int sum,int n)
{
    if(n==0)
        return sum;
    else
      return digitSum(sum + (n%10),n/10);
}
int main()
{
    int sum = 0;
    int n ;
    printf("Enter a no. : ");
    scanf("%d",&n);

    printf("%d",digitSum(sum,n));
}
