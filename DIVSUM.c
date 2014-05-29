#include<stdio.h>

static unsigned P[] = {
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151,
157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233,
239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419,
421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503,
509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607,
613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701
};

static int P_COUNT = sizeof(P)/sizeof(*P);

unsigned compute (unsigned n) {
   unsigned sum = 1;
   unsigned x = n;
   int i;
   for (i = 0; i < P_COUNT; ++i) {
	  if (P[i]>x / P[i]) break;/*remaining primes won't divide x */
	  if (x % P[i] == 0) { /* P[i] is a divisor of n */
		unsigned sub = P[i] + 1;   /* add in power of P[i] */
		x /= P[i];       /* reduce x by P[i] */
		while (x % P[i]== 0) {/* while P[i] still divides x */
			x /= P[i];             /* reduce x */
			sub = sub * P[i] + 1;  /* add by another power of P[i] */
		}
		sum *= sub;                /* product of sums */
	  }
    }
  if (x > 1) sum *= x + 1;           /* if x > 1, then x is prime */
  return sum - n;
}
int main(){
	int tn,num,sum,i;
	scanf("%d",&tn);
	getchar();

	for(;tn;tn--){
		scanf("%d",&num);
		getchar();
				/*sum=1;
				for(i=2;i<=num/2;i++){
					if(num%i==0){
						sum+=i;
					}
				}*/
		printf("%d\n",compute(num));
	}
return 0;
}
