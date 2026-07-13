/**
INPUT :
        4 2 5 25 10
OUTPUT :
           4 -> 5
           2 -> 5
           5 -> 25
           25 -> -1
           10 -> -1


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
    }
    for(int i =0;i<n;i++)
    {
        int current = a[i];
        int check = 0;
        for(int j=i+1;j<n;j++)
        {
            if(current<a[j])
                {
                    printf("%d -> %d \n",current,a[j]);
                    check = 1;
                    break;
                }
        }
        if(check == 0)
        {
           printf("%d -> %d \n",current,-1);
        }
    }
}
