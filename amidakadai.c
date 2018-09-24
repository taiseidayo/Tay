#include<stdio.h>

int main(){
    int n;
    int m;
    int nmax;
    int mmax;
    int error=0;

    scanf("%d",&mmax);
    scanf("%d",&nmax);

    int array[nmax][mmax];

    for(n=0;n<=nmax-1;n++){
	for(m=0;m<=mmax-1;m++){
	    array[n][m]=0;
	}
    }

    while(scanf("%d %d", &n,&m)!=EOF){
	array[n][m]=1;
    }
       
    for(n=0;n<=nmax-1;n++){
	for(m=0;m<=mmax-1;m++){
	    if(array[n][m]==1 && array[n][m+1]==1){
		printf("線の同じ位置から左右に橋があるためERROR.\n");
		error=1;
	    }
		else if(array[n][nmax-1]==1){
		    printf("線が外にはみ出るためERROR./n");
		    error=1;
 
	    }
	}
	    }
    
    
	int begin;	
	for(begin=0;begin<=mmax-1;begin++){
	    if(begin+1<10){
		    printf("%d  ",begin+1);
		}
		else{
		    printf("%d  ",begin+1);
		}
		}
	    printf("\n");
	    for(n=0;n<=nmax-1;n++){
		for(m=0;m<=mmax-1;m++){
		    if(array[n][m]==1){
			printf("|--");
		    }
		    else{
			printf("|  ");
		    }
		}
		printf("\n");
	    }
	    int finish;
	    for(finish=0;finish<=mmax-1;finish++){
		printf("%c  ",65+finish);
	    }
	    printf("\n");
	    int h;
	    for(h=0;h<=mmax-1;h++){
		m=h;
		for(n=0;n<=nmax-1;n++){
		    if(array[n][m]==1){
			m=m+1;}
		    else if (m>0 && array[n][m-1]==1){
			m=m-1;
		    }
		}
	    
		printf("%d => %c\n",h+1,65+m);
	    }
	
    }

