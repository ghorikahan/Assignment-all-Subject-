#include <stdio.h>

int main()
{

	int i,j,n,k;
	printf("enter the value:-");
  scanf("%d",&n);
 

  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
         printf(" ");
    }
    for(k=1;k<=i;k++) {
        
        printf("%c",65+k-1);
    }
    printf("\n");
}

 
    

	return 0;
}