#include<stdio.h>
int main()
{
        int n,sum;
        sum = 0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : " );
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int max = a[0];
    int mxi = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]>max)
        {
            max = a[i];
            mxi = i;
        }

    }
    int sem = sum - max;
    if(sem == max)
    {
        printf("True");
    }
    else
    {
      printf("False");
    }
}
