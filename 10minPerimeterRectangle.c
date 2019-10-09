#include <stdio.h>
#include <math.h>


int main(){
	int N=30,a,b,s;
	int min=pow(10,6);
	
	for (a=1;a<=N;a++){
		b=N/a;
		if ((int)b==b){
			s=a+b;
			if (s<min) min=s;
		}
	}
	printf("%d",2*min);
	return 0;
}