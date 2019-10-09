#include <stdio.h>

int main(){
	int A=6,B=11,K=2,i,cntr=0;
	for(i=A;i<=B;i++){
		if (i%K == 0 ){
			cntr++;
		}
	}
	printf("%d",cntr);
	return 0;
}