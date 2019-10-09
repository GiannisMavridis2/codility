#define N 32
#include <math.h>
#include <stdio.h>

int main(){
	int binary[N],i=0,max=0,cntr=0,number,arithmos,temp;
	number=529;
	arithmos=number;
	while(number!=0){
		temp=number&1;
		binary[N-1-i]=temp;
		i++;
		number=number>>1;
	}
	number=arithmos;
	
	i=0;
	while (i<N){
		cntr=0;
		if (binary[i]==1){
			i++;
			if (i==N) break;
			while ((binary[i]==0)&& (i<N-1)){
				cntr++;
				i++;
			}
			if (i==N) break;
			if (binary[i]==1){
				if (cntr>max){
					max=cntr;
				}
			}
		}else{
			i++;
		}
	}
	printf("%d",max);
	
	
	
	return 0;
}