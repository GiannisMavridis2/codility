#include <stdio.h>
#include <math.h>


int main(){
	int N=30,a,s;
	int min=pow(10,6);
	float b;
	
	for (a=1;a<=N;a++){
		b=(float)N/a;
		if ((int)b==b){
			s=a+b;
			if (s<min) min=s;
		}
	}
	printf("%d",2*min);
	return 0;
}
