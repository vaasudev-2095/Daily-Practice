/**




*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : " );
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(i!=0)
      {
          if(a[i-1]==a[i])
          {
              a[i-1] = a[i-1]*2;
              a[i] = 0;
          }
      }
    }
    printf("Array : ");
    for(int i = 0;i<n;i++)
        printf(" %d ",a[i]);
  
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
            if(a[j]==0)
        {
            int temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;

        }
    }
  printf("\n");
    for(int i = 0;i<n;i++)
        printf(" %d ",a[i]);
}
