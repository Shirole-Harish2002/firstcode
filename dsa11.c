/*
//bubble sort

#include<stdio.h>
int main()
{
    int i,n,key,a[100],flag=0;

    printf("Enter a N : ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    scanf("%d",&a[i]);

    printf("Enter a Number for search : ");
    scanf("%d",&key);

    for( i = 0; i < n; i++)
    {
        if(key == a[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("Found");
    else
        printf("NOT Found !!!");

        return 0;
}
*/
/*

//binary search 

#include<stdio.h>
int main()
{
    int i,n,key,a[100],h,l,j,flag=1;

    printf("Enter a N : ");
    scanf("%d",&n);

    for( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    for( i = 0; i < n; i++)
    {
        for( j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Enter a key for search : ");
    scanf("%d",&key);

    l=0;
    h=n-1;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(a[mid]==key)
        {
            flag=0;
            break;
        }
        else if(a[mid]>key)
            h = mid-1;
        else
            l = mid+1;
       
    }
     if(flag)
            printf("Not Found");
        else
            printf("Found");
    
    return 0;
}
*/
/*
//insertion sort

#include<stdio.h>
int main()
{
    int n,a[100],j,temp,i;

    printf("Enter a N :");
    scanf("%d",&n);

    for( i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    for( i=1; i<n; i++)
    {
        temp =a[i];
        j = i-1;

        while( j>=0 && temp<a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;

    }
    printf("After Sorting \n");
         for( i=0; i<n; i++)
         printf("%d\n",a[i]);

        return 0;
}
*/

//recursion
/*
#include<stdio.h>
int main()
{
    printf("\nHello World !!");
    main();//function call
}
*/
/*
//sum of n numbers
#include<stdio.h>
int main() 
{
    int n,i,sum=0;

    printf("Enter a N :");
    scanf("%d",&n);

    for( i = 0; i <= n; i++)
        sum += i;

    printf("\nSum : %d",sum);

    return 0;

}
*/
/*
#include<stdio.h>
int sum(int n)

{
    if(n == 1)
         return 0;
    return n + sum(n-1);
          
}
int main() 
{
    int n;

    printf("Enter a N :");
    scanf("%d",&n);

    printf("Sum : %d",sum(n));

    return 0;
}
*/
/*
#include<stdio.h>
int factorial(int n)

{
    if(n == 1)
         return n;
    return n * factorial(n-1);
          
}
int main() 
{
    int n;

    printf("Enter a N :");
    scanf("%d",&n);

    printf("factorial : %d",factorial(n));

    return 0;
}
*/
/*
#include<stdio.h>
void reverse(int n)
{
    if (n > 0)
    {
        printf("%d",n % 10);
        reverse(n / 10);
    }
}
int main()
{
    int n;

    printf("enter a N :");
    scanf("%d",&n);

    reverse(n);
}
*/

/*

#include<stdio.h>
int fibonacci(int n)
{
    if (n  <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int n,i;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("fibonacci Series :  ");

    for( i =0; i < n; i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
    
}
*/

/*   ---------------  not coreect program --------------
#include<stdio.h>
#include<stdlib.h>
#define max 20

int main()
{
    int arr[100];
    int n,i,ch;
    int ch,newvalue,loc,temp=0,flag=1;
    
    do
    {
    printf("\n1.Create \n2.Display \n3.Insert \n4.Delete \n5.Append \n6.Search Linear \n7.Search Binary \n8.Bubble sort \n9.Insertion sort \n10.Exit");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    
    switch(ch)
        {   
        case 1://create
               printf("\nHow many no you want to enter :");
               scanf("%d",&n);

               printf("\nEnter the numbers : ");
               for(i=0;i<n;i++)
               {
                scanf("%d",&arr[i]);
               }
               break;
        case 2://Display
            printf("\nElements in array are\n");
            for(i=0;i<n;i++)
            {
                printf("%5d",arr[i]);
            }
            break;
        case 3://insert
             printf("\nEnter new values and location to insert element in array");
             scanf("%d%d",&newvalue,&loc);//newvalue=25  loc=2
             for(i=n-1;i>=loc;i--)
             {
                arr[i+1]=arr[i];
             }
             arr[i+1]=newvalue;
             n++;
             break;
        case 4://delete
             printf("Enter location to delete element");
             scanf("%d",&loc);
             if((loc<n)&&(loc>=0))
             {
                temp=arr[loc-1];
                for(i=loc-1;i<n;i++)
                {
                    arr[i]=arr[i+i];
                }
                printf("\nelement deleted %d : ",temp);
                n--;
             }
            else
            {
                printf("\ninvalid location");
            }
            break;
        case 5://searching
             printf("\n1-Linear search\n2-Binary search");
             printf("\nEnter your choice");
             scanf("%d",&c);
             if(c==1)
             {
                //code for linear search
             }
             else if(c==2)
             {
                //code for binary search
             }
            break;
        case 6://sorting
             printf("\n-1Bubble sort\n2-Selection sort\n3-Insertion sort");
               //printf("\nEnter your choice");
               //scanf("%d",&ch2);

             break;
        }
        printf("\ndo you want to continue press 1");
        scanf("%d",&c);
    }while(c==1);

    printf("\n--------------THANK YOU----------------");

    return 0;
}
*/
/*

#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[100];
    int n = 0, i, j, ch; // Initialized 'n' to 0

    do {
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert");
        printf("\n4. Delete");
        printf("\n5. Append");
        printf("\n6. Linear Search");
        printf("\n7. Binary Search");
        printf("\n8. Bubble Sort");
        printf("\n9. Insertion Sort");
        printf("\n10. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                printf("Enter size of an array: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                for (i = 0; i < n; i++) {
                    printf("%d\t", arr[i]);
                }
                printf("\n"); // Added new line for better output format
                break;
            }
            case 3: {
                int index, value;
                printf("\nEnter position to insert: ");
                scanf("%d", &index);
                printf("Enter value to insert: "); // Added prompt for value to insert
                scanf("%d", &value);

                if (index < 0 || index > n) { // Check for valid index
                    printf("Invalid index!\n");
                } else {
                    for (i = n - 1; i >= index; i--) {
                        arr[i + 1] = arr[i];
                    }
                    arr[index] = value;
                    n++;
                }
                break;
            }
            case 4: {
                int index;
                printf("Enter index to delete the element: ");
                scanf("%d", &index);

                if (index < 0 || index >= n) { // Check for valid index
                    printf("Invalid index!\n");
                } else {
                    for (i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;
            }
            case 5: {
                int ele;
                printf("Enter element to append: ");
                scanf("%d", &ele);

                if (n >= 100) { // Check for array overflow
                    printf("Array is full!\n");
                } else {
                    arr[n] = ele;
                    n++;
                }
                break;
            }
            case 6: {
                int key, flag = 0;
                printf("Enter element to search: ");
                scanf("%d", &key);
                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        flag = 1;
                        break; // Added break to stop loop after finding the element
                    }
                }
                if (flag) {
                    printf("Found!\n");
                } else {
                    printf("Not found!\n");
                }
                break;
            }
            case 7: {
                int target, found = -1;
                printf("Enter target value: ");
                scanf("%d", &target);

                int start = 0, end = n - 1;
                while (start <= end) {
                    int mid = start + (end - start) / 2;

                    if (arr[mid] == target) {
                        found = mid;
                        break;
                    } else if (arr[mid] < target) {
                        start = mid + 1;
                    } else {
                        end = mid - 1;
                    }
                }
                if (found != -1) {
                    printf("Found at index %d\n", found); // Added print statement for found index
                } else {
                    printf("Not found!\n");
                }
                break;
            }
            case 8: {
                for (i = 0; i < n - 1; i++) {
                    for (j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                break;
            }
            case 9: {
                for (i = 1; i < n; i++) {
                    int key = arr[i];
                    j = i - 1;

                    while (j >= 0 && arr[j] > key) {
                        arr[j + 1] = arr[j];
                        j = j - 1;
                    }
                    arr[j + 1] = key;
                }
                break;
            }
            case 10: {
                exit(0);
            }
            default: {
                printf("Invalid choice!\n"); // Added default case for invalid choice
            }
        }
    } while (ch != 10); // Corrected the condition to run until choice is 10

    return 0;
}
*/

