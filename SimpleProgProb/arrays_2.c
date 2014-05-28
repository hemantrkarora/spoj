/*You are given a sorted sequence of n integers S = s1, s2, ..., sn and a sorted sequence of m integers Q = q1, q2, ..., qm. Please, print in the ascending order all such si that belong to Q.  */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,m;
	scanf("%d",&n);
	int s[n];
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&m);
	int q[m];
	for(i=0;i<m;i++){
		scanf("%d",&q[i]);
	}

	int j,found=0;int *c=(int *)malloc(sizeof(int));
	int k=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i]==q[j]){
				found=1;
			}
		}
		if(found==1){
			c[k++]=s[i];
			//printf("%d ",s[i]);
		}
		found=0;
	}
	for(i=0;i<k;i++){
		printf("%d ",c[i]);
	}
return 0;
}
