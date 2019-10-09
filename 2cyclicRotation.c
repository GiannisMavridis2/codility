#include <stdio.h>

struct Results{
	int *A;
	int N;
};

struct Results solution(int A[],int N,int K){
	struct Results res;
	int times,i,temp,store;
	res.N=N;
	for (times=0;times<K;times++){
		store=A[0];
		A[0]=A[N-1];
		for(i=1;i<N;i++){
			temp=A[i];
			A[i]=store;
			store=temp;
		}
	}
	res.A=A;
	return res;
}

int main(){
	int N=5;
	int A[5]={3,8,9,7,6};
	int K=3;
	struct Results lysh=solution(A,N,K);
	for (int i=0;i<N;i++){
		printf("%d ",lysh.A[i]);
	}
	return 0;
}