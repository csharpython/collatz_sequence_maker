#include <stdio.h>
using namespace std;
int main(){
	long long a,b,k;
	scanf("%lld", &a);
	scanf("%lld", &b);
	FILE* out = freopen("OUTPUTFILENAME.txt", "w", stdout);
	for(int i=a;i<=b;i++){
		k=i;
		printf("%lld", k);
		while(k!=1){
			if(k%2==0)k/=2;
			else k=k*3+1;
			printf(" %lld",k);
		}
		printf("\n");
	}
	return 0;
}