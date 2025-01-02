#include<stdio.h>
#include<string.h>
int main(){
	//cach 1:
	char chuoi[100];
	printf("Moi nhap vao chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	printf("Chuoi in hoa cac chu cai dau la: ");
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]>='a'&&chuoi[i]<='z'&&i==0){
			printf("%c",chuoi[i]-32);
		}
		else if(chuoi[i-1]==' '){
			if(chuoi[i]>='a'&&chuoi[i]<='z'){
				printf("%c",chuoi[i]-32);
			}
		}
		else{
			printf("%c",chuoi[i]);
		}
	}
	return 0;
}
