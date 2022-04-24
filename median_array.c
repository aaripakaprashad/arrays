#include <stdio.h>
#include <string.h>
/* i/p array = { 9,0,8,7,6,-5,-4,-3,-2,-1 };
 * o/p array = -5 -4 -3 -2 -1 0 6 7 8 9 
 *              9 -5 8 -4 7 -3 6 -2 0 -1 
 */


int main()
{
    printf("Hello World\n");
    int arr[10] = {9,0,8,7,6,-5,-4,-3,-2,-1};
    //sort array 
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = 0;
    for(int i=0; i<n; i++){
        int index = i;
        for(int j=i; j<n; j++){
            if(arr[index] > arr[j])
                index = j;
        }
        int t = arr[i];
        arr[i] = arr[index];
        arr[index] = t;
        
    }
    //sorted array -5 -4 -3 -2 -1 0 6 7 8 9
    for(int i=0; i<n; i++)
       printf("%d ",arr[i]);
       
    int *a = (int *)malloc((sizeof(int))*(n)); 
    for(int i=0,j=0; i<(n); i +=2,j+=1) {
        a[i] = arr[n-1-j];
        a[i+1] = arr[j];        
    }
    printf("\n"); 
    
    //merdian array 9 -5 8 -4 7 -3 6 -2 0 -1
    for(int i=0; i<n; i++)
       printf("%d ",a[i]);
    
    free(a);
    return 0;
}
