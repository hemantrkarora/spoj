#include<stdio.h>

int myPow(int x,int y){
	int temp=x;
	while(--y){
		x*=temp;
	}
	return x;
}
int main(){
	int t,n,count,k,i;
	scanf("%d",&t);
	getchar();
	while(t--){
		scanf("%d",&n);
		getchar();
		
		count=0;
		i=1;
		k=n/myPow(5,i);
		while(k>0){
			count+=k;
			i++;
			k=n/myPow(5,i);
		}
		printf("%d\n",count);

	}
return 0;
}
