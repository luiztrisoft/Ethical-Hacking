#include <stdio.h>

int main(int argc, char *argv[])
{

	if(argc < 2){
		printf("Informar o ip e a porta\n");
		return 0;
	}else{
		printf("Varrendo host %s na porta %s \n", argv[1], argv[2]);
		return 0;
	}
}

//	int porta = 80;
//	char ip[]="192.169.0.1";
//	printf("Varrendo host %s na porta %i \n", ip, porta);
