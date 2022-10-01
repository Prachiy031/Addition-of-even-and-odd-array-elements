/******************************************************************************
o/p:
Enter size of 1st array and 2nd array : 
3 4
Enter 1st array elements : 
1 6 2
Enter 2nd array elemnts : 
5 7 8 0
Sum of all odd numbers is : 13.
Sum of all even numbers is : 16.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m;   //size of arrays
    printf("Enter size of 1st array and 2nd array : \n");
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    printf("Enter 1st array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd array elemnts : \n");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int Esum1 = 0,Osum1 =0,Esum2 =0 ,Osum2 =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)        //condition for even
        {
            Esum1 = Esum1 + a[i];
        }
        else
        {
            Osum1 = Osum1 + a[i];
        }
    }
    for(int j=0;j<m;j++)
    {
        if(b[j]%2==0)
        {
            Esum2 = Esum2 + b[j];
        }
        else
        {
            Osum2 = Osum2 + b[j];
        }
    }
    
    printf("Sum of all odd numbers is : %d.",Osum1+Osum2);
    printf("\nSum of all even numbers is : %d.",Esum1+Esum2);
    return 0;
}
