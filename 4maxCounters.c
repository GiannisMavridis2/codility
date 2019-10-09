#include <stdio.h>

struct Results{
	int *C;
	int L;
};

struct Results solution(int N,int A[],int M){
	int i,j,C[N],max;
	struct Results res;
	for (i=0;i<N;i++){
		C[i]=0;
	}
	
	for (i=0;i<M;i++){
		if (A[i]==N+1){
			max=C[0];
			for (j=1;j<N;j++){
				if (C[j]>max){
					max=C[j];
				}
			}
			for (j=0;j<N;j++){
				C[j]=max;
			}
		}else{
			C[A[i]]+=1;
		}
	}
	res.C=C;
	res.L=N;
	return res;
}

int main(){
	int N=5,M=7,i;
	int A[7]={3,4,4,6,1,4,4};
	struct Results res=solution(N,A,M);
	for (i=0;i<N;i++){
		printf("%d ",res.C[i]);
	}
}