/*在第一行给出的不超过10e5的正整数N，即参赛人数。随后N行，每行给出一位参赛者的信息和成绩，包括其中代表的学校编号（从1开始连续编号）及其比赛成绩（百分制），中间
以空格分隔*/
#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
	const int maxn =100010; 
	int school[maxn]={0};
	
		int n, schid,score;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d%d",&schid,&score);
			school[schid]+=score;
		}
		
	int k=1,max=-1;
	for(int i=1;i<=n;i++) {
		if(school[i]>max){
			max=school[i];
			k=i;
	}
}
printf("%d %d\n",k,max);
return 0;

	
	
    

}
