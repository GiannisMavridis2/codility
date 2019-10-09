#include <stdio.h>

int main(){
	int X=10, Y=85, D=30;
	int current,jumps;
	
	current=X;
	jumps=0;
	while(current<Y){
		jumps++;
		current+=D;
	}
	printf("%d",jumps);
	
}