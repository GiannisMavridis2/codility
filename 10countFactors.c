#include <stdio.h>

int main(){
	int N=24,cntr=0,i;
	
	for (i=1;i<=N;i++){
		if (N%i==0) cntr++;
	}
	printf("%d",cntr);
	return 0;
}