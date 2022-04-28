/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

Input: arr[] = {4, 6, 5, 3, 8, 7, 10, 11, 14, 15} 
Output: 4 6 8 10 14 15

Input: arr[] = {2, 4, 7, 8, 9, 11} 
Output: 4 8 9 
*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int is_prime(int n)
{
    if(n==1) {
       printf("n==1 , return 0\n");
       return 0; //not a prime number
    }
    if((n==2) || (n ==3)){
       return 1;
    }
    for(int i=2; i<n; i++) {
        if((n%i) == 0)
           return 0; //not prime number
    }    
    
    return 1; //prime number 

}

int main()
{
    printf("Hello World");
    int a[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50}; //o/p:{4,6,8,9,10}    
    int size,len;
    size = len = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<size; i++) {
        printf("checking a[%d]:%d\n",i,a[i]);
        if(is_prime(a[i])) {
            printf("%d is prime number \n",a[i]);
            len--;
            for(int j=i; j<size; j++){
                a[j] = a[j+1];
            }
            i--;
        }
    }
    
    for(int i=0; i<len; i++)
       printf("%d, ",a[i]);
    return 0;
}
// o/p: 1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50,
