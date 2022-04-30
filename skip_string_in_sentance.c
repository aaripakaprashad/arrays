/* i/p: "all is well all is good"
 * o/p: " is well  is good"
 */



#include <stdio.h>
#include <string.h>
void string_remove(char *s, char *token) {

    char *t = token;
    while(*s != '\0') {
       
        if(strncmp(s,token,strlen(token)) == 0) {
            s= s+strlen(token);            
        }
        printf("%c",*s);
        s++;
    }

}

int main()
{
    printf("Hello World");
    char s[64] = "all is well all is good";
    char *token = "all";
    string_remove(s, token);
    return 0;
}
