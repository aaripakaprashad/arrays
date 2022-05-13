
#include<stdio.h>
#include<conio.h>
#include<string.h>
char *sort_string(char *s) {
    char *str = s;
    char chTemp;
    int i, j, len;
    
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                chTemp = str[j];
                str[j] = str[j+1];
                str[j+1] = chTemp;
            }
        }
    }
    return str;
}
int main()
{
    char o[64] = "password";
    char n[64] = "pss$w#rd";
    sort_string(o);
    sort_string(n);
    printf("old:%s\nnew:%s\n",o,n);
    int a1[128] = {0};
    int a2[128] = {0};
    int i=0;
    for(i = 0; i<strlen(o); i++){
        a1[o[i]]++;
    }
    for(i = 0; i<strlen(n); i++){
        a2[n[i]]++;
    }
    for(i = 0; i<128; i++){
        if((a1[i] == 0 ) && (a2[i] != 0 )) {//addition
            printf("new addition: char:%c, count:%d\n",i,a2[i]);
        }
        if((a1[i] == 1 ) && (a2[i] == 0 )) {//deletion
            printf("deletion: char:%c, count:%d\n",i,a1[o[i]]);
        }
    }    
    getch();

    return 0;
}
