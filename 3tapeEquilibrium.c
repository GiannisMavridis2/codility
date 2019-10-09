#include <stdio.h>
#include <math.h>
#define N 5

int main(){
	int p,i,dif,s_right,s_left;
	int A[N]={3,1,2,4,3};
	double min;
	min=pow(10,6);
	for (p=1;p<N;p++){
		s_right=0;
		for (i=0;i<p;i++){
			s_right+=A[i];
		}
		s_left=0;
		for (i=p;i<N;i++){
			s_left+=A[i];
		}
		dif=abs(s_right-s_left);
		if (dif<min){
			min=dif;
		}
	}
	printf("%f",min);
	return 0;
}