#include <stdio.h>

int main() {
	//num1 ve num2 say�lar� ifade eder count ise d�ng�n�n ka� defa d�nd���n� sayar
    int num1, num2, count = 0;
    
    printf("Lutfen iki pozitif tam sayi girin: ");
    scanf("%d %d", &num1, &num2);
    //num1 ve num2 s�f�ra e�it olmad��� s�rece d�ng� devam eder 
    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        count++;
    }
    
    printf("Toplam islem sayisi: %d\n", count);
    
    return 0;
}
