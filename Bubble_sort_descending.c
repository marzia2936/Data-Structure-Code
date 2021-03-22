//Bubble Sort-character in descending order
#include<stdio.h>
int main()
{
    char a[100];
    int n,i,j,swap;
    printf("Enter the number of element in array: ");
    scanf("%d",&n);
    printf("Enter the character value of  in array:");
    for(i=0; i<n; i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("After sorted character in descending  order:\n");
    for(i=0; i<n; i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}
