#include <stdio.h>
enum{max=15};

int main(){
	int n;
	for(int i=0; i<2; i+=1){
		scanf("%d", &n);
		if((n>=0) && (n++)<= max){
			printf("%d", n);
		}
		else
			printf("%d", n);
	}
	return 0;
}