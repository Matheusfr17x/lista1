 #include <stdio.h>
 #include <stdlib.h>
 
  int main()
{
	int mbps,soma;
	
	printf("digite o mb para conversao em kbps: \n");
	
	scanf("%d",&mbps);
	

	
	soma=mbps*1024;
	
	printf("voce tem kbps: %d \n", soma);
}
