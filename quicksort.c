/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int quickSort(int a[],int low,int high)
{
    int y,i,t;
    if (high-low<=1)
    {
        return 0;
    }
    y=low+1;
    for(i=low+1;i<high;i++){
        if(a[i]<=a[low]){
            t=a[y];
            a[y]=a[i];
            a[i]=t;
            y++;
        }
    }
        t=a[low];
        a[low]=a[y-1];
        a[y-1]=t;
        quickSort(a,low,y-1);
        quickSort(a,y,high);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n-1);
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
