#include<stdio.h>

int rev(int a){
	int r=0;
	while(a>0){
		r*=10;
		r+=a%10;
		a/=10;
	}
	return r;
}
int main(){
	int n,a,b,sum;
	scanf("%d",&n);
	getchar();
	while(n--){
		scanf("%d %d",&a,&b);
		sum=rev(a)+rev(b);
		printf("%d\n",rev(sum));
	}
return 0;
}

