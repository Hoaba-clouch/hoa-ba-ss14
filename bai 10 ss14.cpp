#include <stdio.h>
#include <string.h>

int main() {
   	char chuoi[100];
   	char kytu[100];//dung de luu tung ki tu
   	int countHideKytu[100],index=0;
   	int dem;
	printf("Nhap vao mot chuoi: ");
    fgets(chuoi, 100, stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    for (int i = 0; chuoi[i] != '\0'; i++) {
    	int found = 0;//chua tim thay
    	for (int j = 0; j < index; j++) {//kiem tra de xem kitu da ton tai hay chua
            if (kytu[j] == chuoi[i]) {
                countHideKytu[j]++;
                found = 1;//da tim thay
                break;
            }
        }
        if (!found) {
            kytu[index] = chuoi[i];
            countHideKytu[index] = 1;
            dem = dem+1;
        }
    }
    printf("Ky tu\tSo lan xuat hien\n");
    for (int i = 0; i < dem; i++) {
        printf("%c\t%d\n", kytu[i], countHideKytu[i]);
    }

    return 0;
}
