/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

Input: arr[] = {4, 6, 5, 3, 8, 7, 10, 11, 14, 15} 
Output: 4 6 8 10 14 15

Input: arr[] = {2, 4, 7, 8, 9, 11} 
Output: 4 8 9 
*******************************************************************************/

#include <stdio.h>
int is_prime(int n)
{
    for(int i=2; i<n; i++) {
        if((n%i) == 0)
           return 0; //not prime number
    }    
    return 1; //prime number 

}

int main()
{
    printf("Hello World");
    
    int n = 77;
    
    for(int i=2; i<n; i++) {
    if(is_prime(i)){
       printf("%d, ",i);
    }
    }
    return 0;
}
