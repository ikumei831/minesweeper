#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int row,col;
void number();
char a;
int b;
int ranx,rany;
int bomb;
int flag=0;
int main(int argc, char** argv) {
	srand((unsigned)time(NULL));
	while(true){
		printf("col row\n");
		scanf("%d %d",&col,&row);
		if(col<=10&&row<=10){
			break;
		}
		else printf("out of value\ninsert lower than 10*10\n");
	}
	
	int *col1=new int(col+1);	
	int *row1=new int(row+1);
	int surface[*col1][*row1];

	
	
	
	
	
	for (int x=0;x<*col1;x++){
		for (int y=0;y<*row1;y++){
			surface[x][y]=x*(*col1)+y;	
			if(x==0)printf("%d ",surface[x][y]);
			
			
		}
		printf("\n");
		if(x<*col1-1)printf("%c ",x+65);
	}
	printf("\n");
	

	while(true){
		
		
		
		printf("\ncol row\n");
		fflush(stdin);
		scanf("%c%d",&a,&b);
		printf("val:%c%d\n",a,b);	
		
		b-=1;
		
		
		if(a<='A'&&a>='Z'){
			a-=64;
			surface[a][b]=9999; 
		}
		else if(a>='a'&&a<='z'){
			a-=96;
			surface[a][b]=9999; 
		}
		
		printf("%d %d\n\n",a,b+1);
		
		if(flag==0){

			bomb=col*row/10;
			if (bomb==0)bomb=1;
			
			for(int i=0;i<=bomb;i++){
				ranx=rand()%bomb+1;
				rany=rand()%bomb;
				if(surface[ranx][rany]!=6666||9999){
					surface[ranx][rany]=6666;
					printf("%d %d\n",ranx,rany+1);
				}
				else i-=1;
				printf("%d \n",i);
			}
			flag++;
		}
		printf("\n\n");
	
		
		for (int x=0;x<*col1;x++){
			for (int y=0;y<=*row1;y++){
				
				if(y<*row1){
					if(x==0)printf("%d ",surface[x][y]);
					else if(surface[x][y]==9999)printf("x ");
					else if(surface[x][y]==6666)printf("o ");
					else if(y<*row1-1)printf("  ");
				}
			}
			printf("\n");
			if(x<*col1-1)printf("%c ",x+65);
		}
		printf("\n");
	
	}
	return 0;
}

/*	for (int x=0;x<*col1;x++){
			for (int y=0;y<*row1;y++){
				surface[x][y]=x*(*col1)+y;
				if(surface[x][y]<10){
					//printf("0");
				}
				//printf("%d ",surface[x][y]);
			}
			//printf("\n");
		}*/



