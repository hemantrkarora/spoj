#include<stdio.h>
//n:input number,m:number of digits in array a,temp:carry,x:product
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int a[200],n,m=1,temp=0,i,j,x;

	scanf("%d",&n);
	for(i=0;i<200;i++){
		a[i]=0;
	}
	a[0]=1;
	for(i=1;i<=n;i++){
		for(j=0;j<m;j++){
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
		}
		while(temp>0){
			a[m]=temp%10;
			m++;
			temp=temp/10;
		}
	}
	for(i=m-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
	}
return 0;
}
