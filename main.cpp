#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int row,col;
void number();
char a;
char b;
int main(int argc, char** argv) {
	
	printf("col row\n");
	scanf("%d %d",&col,&row);
	int *col1=new int(col+1);	
	int *row1=new int(row+1);
	int surface[*col1][*row1];
	
	for (int x=0;x<*col1;x++){
		for (int y=0;y<*row1;y++){
			surface[x][y]=x*(*col1)+y;
			
			if(x==0)printf("%d ",surface[x][y]);
			if(surface[x][y]==9999)printf("x");
			else printf(" ");
		}
		printf("\n");
		printf("%c ",x+65);
	}
	
	while(true){
		
		
		
		printf("\ncol row\n");
		fflush(stdin);
		scanf("%c%c",&a,&b);
		printf("val:%c%c\n",a,b);	
		
		
		
		
		if(a<='A'&&a>='Z'){
			b-=48;
			a-=64;
			surface[a][b]=9999; 
		}
		else if(a>='a'&&a<='z'){
			b-=48;
			a-=96;
			surface[a][b]=9999; 
		}
	
		printf("%d %d\n",a,b);
		for (int x=0;x<*col1;x++){
			for (int y=0;y<*row1;y++){
				
				if(x==0)printf("%d ",surface[x][y]);
				if(surface[x][y]==9999)printf("x ");
				else printf("");
			}
			printf("\n");
			printf("%c ",x+65);
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



