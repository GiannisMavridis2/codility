#include <stdio.h>

struct Results{
	int *C;
	int L;
};

struct Results solution(int A[],int N){
	struct Results res;
	int i,j,cntr;
	for (i=0;i<N;i++){
		cntr=0;
		for (j=0;j<N;j++){
			if ((A[i]%A[j])!=0) cntr++;
		}
		res.C[i]=cntr;
	}
	res.L=N;
	return res;
}

int main(){
	struct Results res;
	int A[5]={3,1,2,3,6};
	int N=5,i;
	res=solution(A,N);
	for(i=0;i<N;i++){
		printf("%d ",res.C[i]);
	}
	return 0;
}