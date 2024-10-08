#include <stdio.h>
 
int main() {
   int arr[8] = {34, 87, 1, 26, 79, 42, 67, 9};
   int i, j, temp, n=8, element, position;
 
   printf("Array elements are: \n");
 
   for (i = 0; i < n; i++) {
       printf("arr[%d] = %d\n", i, arr[i]);
   }
   
printf("\n\nSorted array elements are: \n");
 
for (i=0; i<n;++i)
{
   for(j=0;j<n;++j)
   {
       if(arr[i]>arr[j])
       {
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
   }
}
for (i = 0; i < n; i++)
{
   printf("arr[%d] = %d\n", i, arr[i]);
}
printf("Enter the element to insert: ");
scanf("%d", &element);
 
printf("\n Enter the position: ");
scanf("%d",&position);
 
if (position < 1 || position > n + 1)
{
       printf("Invalid position\n");
}
for (i = n; i >= position; i--)
{
       arr[i] = arr[i - 1];
}
arr[position - 1] = element;
n++;
printf("\n\nArray with inserted element in middle are: \n");
for (i = 0; i < n; i++)
{
   printf("arr[%d] = %d\n", i, arr[i]);
}
 
return 0;
}
