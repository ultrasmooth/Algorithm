#include <iostream>
#include <string.h>
const int maxn=200;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
	
	int row,col;
	char c;
	scanf("%d %c",&col,&c);
	if(col % 2==1)row = col/2+1;
	else row= col/2;
	//first row
	for(int i=0;i<col;i++){
	printf("%c",c);
	
}
	printf("\n");
	
	for(int i=2;i<row;i++){
		printf("%c",c);
		for(int j=0;j<col-2;j++){
			printf(" ");
		}
		printf("%c\n",c);
	}
	
	for(int i=0;i<col;i++){
		printf("%c",c);
	}
	return 0;
	
}
