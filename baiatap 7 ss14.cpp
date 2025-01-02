#include<stdio.h>
#include<string.h>
int main(){
	//cach 1:
	char chuoi[100];
	int countChar=0,countNum=0,countKytu=0;
	printf("Moi nhap vao chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	for(int i=0;i<strlen(chuoi);i++){
		if((chuoi[i]>='a'&&chuoi[i]<'z')||(chuoi[i]>='A'&&chuoi[i]<'Z')){
			++countChar;
		}
		else if(chuoi[i]>='0'&&chuoi[i]<='9'){
			++countNum;
		}
		else{
			++countKytu;
		}
	}
	printf("So ki tu chu cai la : %d\n",countChar);
	printf("So ki tu chu so la : %d\n",countNum);
	printf("So ki tu dac biet la : %d\n",countKytu);
	return 0;
}
