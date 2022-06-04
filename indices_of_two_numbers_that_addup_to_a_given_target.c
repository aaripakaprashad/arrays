
/*
 * given an array of integers, return the indices of the two numbers that add up to a given target
 */

#include <stdio.h>

int main()
{
    printf("Hello World");
    int target = 11;
    int a[5] = {1,3,7,9,2};
    int n = sizeof(a)/sizeof(a[0]);
  
    for(int p1=0; p1 <=n-2; p1++) {
        
        for(int p2 = p1+1; p2 <=n-1 ; p2++) {
            
            if(target-a[p1] == a[p2]) {
                printf("index postions p1:%d, p2: %d\n",p1,p2);
                return 0;
            }
            
        }
        
    }
    
    return 0;
}
