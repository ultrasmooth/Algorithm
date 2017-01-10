#include <stdio.h>
const int maxn = 100010;
bool hashTable[maxn]={false};
 
int main(){
	int n,m,x;
	scanf("%d%d",&n,&m);
	hashTable[x]=true;

for(int i=0;i<m;i++){
	scanf("%d",&x);
	if(hashTable[x]==true){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
}

	
	
return 0;


}
