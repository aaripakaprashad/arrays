
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * fun_vowel(char *s);
/*
 * i/p: book
 * o/p: bnpnpk
 * i/p: opinion
 * o/p: npphjnhjnpn
 * i/p: class
 * o/p: clbss
 * i/p: aeiou
 * o/p: npphjnhjnpn
 */

int main()
{
    char * input = "book";
    printf("Hello World\n");
    printf("input: %s\n",input);
    fun_vowel(input);
    
    return 0;
}
char vowel[5] = { 'a', 'e', 'i', 'o', 'u'};

char * fun_vowel(char *s) {
    char * p = malloc((2* strlen(s)) + 1);
    char * t = p;
    
    memset(p, 0, 100);
    
    while(*s != '\0') {
        int i = 0;
        while( i < 5) {
            if(*s == vowel[i]) {
                break;
            }
            i++;
        }
        if(i ==5) {
            *t = *s;
            t++;
            s++;
            continue;
        }
        else if(*s == vowel[0]) {
            *t = 'b';
            s++;
            t++;
            continue;
        }
        else if(*s != vowel[0]) {
            *t = vowel[i]-1;
            t++;
            *t = vowel[i]+1;
            t++;
            s++;
            continue;
        }
        
        
    }
    printf("\noutput: %s \n",p);
    //return p;
}
