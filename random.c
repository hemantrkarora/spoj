#include<stdio.h>
#include<time.h>

int main(){
	time_t t;
	srand((unsigned) t);

	int i;
	for(i=0;i<200000;i++){
		printf("%d\n",rand()%500000);
	}
return 0;
}
