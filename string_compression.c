/*
*i/p:abcaaabbb
*o/p:abca3b3
*i/p:abcd 
*o/p:abcd
*i/p:aaabaaaaccaaaaba
*o/p:a3ba4c2a4ba
*/
#include <stdio.h>
#include <string.h>
int main() {
    //char *a = "abcaaabbb";//9+1
    char *a = "aaabaaaaccaaaaba";//9+1
	//char *n = (char *)malloc(strlen(s)+1); //10bytes
	char *s =a;
	int count = 0,index=0;
	for(int i=0; i<strlen(s); i++) {
			
         while(s[i] == s[i+1])  {                     
			if(!count) {
				index = i;
			}
			count++;
			i++;
            
		 }
		 if(!count)
		 	printf("%c",s[i]);
		 else {
		    printf("%c%d",s[index],count+1);
		    count = index=0;
		 }

    }

}	

