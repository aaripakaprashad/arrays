#include <stdio.h>
#include <string.h>

void swap(char * l, char * r) {
	char t = *l;
	*l = *r;
	*r = t;
}

void permute(char *a, int l, int r){
	if(l == r) {
		printf("%s\n",a);
	}else {
	  for(int i=l; i<=r; i++) {
		  swap(a+l, a+i);   
		  permute(a, l+1, r);
		  swap(a+l, a+i);
	  }
	}


}
int main() {

	char s[4] = "123";
	permute(s, 0, strlen(s)-1);
}
