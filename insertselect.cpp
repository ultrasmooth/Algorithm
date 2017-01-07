#include <stdio.h>
int main(){
	int m[90],i,j,n,temp;
	scanf("%d",&n);
   for(i=0;i<n;i++){
   	scanf("%d",&m[i]);
   }
		for(i=1;i<=n;i++){
		 temp=m[i];
		 j=i;
		while(j>0&&temp<m[j-1]){
		m[j]=m[j-1];
		j--;}
		m[j]=temp;
		
	}

for(i=0;i<n;i++)
	printf("%d",m[i]);
	
return 0;


}
