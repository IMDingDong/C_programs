#include <stdio.h>
#include <limits.h>
int main(){
	signed int si1, si2, sum;
	scanf("%d %d", &si1, &si2);
	if(((si1 > 0) && (si2 > 0) && (si1 > (INT_MAX-si2))) || ((si1 < 0) && (si2 < 0) && (si1 < (INT_MIN-si2)))){
		printf("에러 입니다\n");
	}
	else{
		sum = si1 + si2;
		printf("sum = %d", sum);
	}
}