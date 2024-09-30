#include <stdio.h>

int main() {
	int t,x,y,totalhours;
	 scanf("%d",&t);
	 
	 while(t--){
	     scanf("%d%d",&x,&y);
	     totalhours= (4*x)+y;
	     printf("%d\n",totalhours);
	 }
	return 0;
}

