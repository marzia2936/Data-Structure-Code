// binary search and Linear search
// decide which one mechanism is best for finding that specific elements.
#include<stdio.h>
int main()
{

    int a[10],i,n,new_index =-1,search,c, minimum, maximum, middle, LScount=0, BScount=0;
    printf("Enter the number of element in array\n");
    scanf("%d",&n);
    printf("enter the value of array: \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("the array is:\n");
    for(i=0; i<n; i++)
        printf("a[%d]=%d\n",i,a[i]);

    printf("Enter the value to search\n");
    scanf("%d",&search);

//For Linear Search
   printf("\n\n\t\t Linear search\n\n");


    for(int i = 0; i < n; i++)
    {
        LScount=LScount+1;

        if(a[i] == search)
        {
            new_index = i;
            break;
        }
    }

    if(new_index == -1)
        printf("Element not found");
    else
    {
        printf("%d Element found at index %d",search,new_index);
        printf("\n%d found at location %d.\n", search,new_index+1);
        printf("Linear Search found %d after %d attempt/s \n",search,LScount);
    }


//For Binary Search
    printf("\n\t\tFor Binary Search\n\n");

    minimum = 0;
    maximum = n - 1;
    middle = (minimum+maximum)/2;

    while (minimum <= maximum)
    {
        BScount=BScount+1;
        if (a[middle] < search)
            minimum = middle + 1;
        else if (a[middle] == search)
        {
            printf("%d Element found at index %d",search,middle);
            printf("\n%d found at location %d.\n", search, middle+1);
            printf("Binay Search found %d after %d attempt/s \n",search,BScount);
            break;
        }
        else
            maximum = middle - 1;

        middle = (minimum + maximum)/2;
    }
    if (minimum > maximum)
        printf("Not found! %d isn't present in the list.\n", search);


if(LScount<BScount & new_index != -1)
    printf("\n\nFor searching %d , linear search is best because it founds the elements in %d attempts which is less than Binary search\n",search,LScount);
if(LScount>BScount & new_index != -1)
    printf("\n\nFor searching %d , Binary search is best because it founds the elements in %d attempts which is less than Linear search\n",search,BScount);
if(LScount==BScount & new_index != -1)
    printf("\n\nBoth are best here ");

    return 0;
}

