#include <stdio.h>
_inline int ABS(int x){
	((x)<0) ? -(x) : (x);
	return x;
}
int main(){
	int n=0, m=0;
	printf("%d ��\n", m);
	m=ABS(++n);
	printf("%d ��\n", m);
	return 0;
}