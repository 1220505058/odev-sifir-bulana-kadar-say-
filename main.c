#include <stdio.h>

int main() {
	//num1 ve num2 sayıları ifade eder count ise döngünün kaç defa döndüğünü sayar
    int num1, num2, count = 0;
    
    printf("Lutfen iki pozitif tam sayi girin: ");
    scanf("%d %d", &num1, &num2);
    //num1 ve num2 sıfıra eşit olmadığı sürece döngü devam eder 
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
