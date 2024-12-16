#include <stdio.h>

int main() {
    int i, ii, j, n, belirtec;

    printf("Lutfen Satir, Sutun degerini giriniz: ");
    scanf("%d", &n);

    int nn = n;

    int matris[n][nn];
    
    BELIRTEC:
    printf("\nDizi otomatik olarak doldurulsun mu manuel elle mi doldurulsun ?\n\n");
    printf("Elle (manuel) doldurmak için: 1'i\nOtomatik doldurulmasi için: 2'yi girin: ");
    scanf("%d", &belirtec);
    
    printf("\n");   

    int upper = 2000;
    int lower = 1000;
    if (belirtec == 1)
    {
        //Matrisimizin elemanlarini sirayla aliyoruz.
        for (i = 0; i < n; i++)
        {//Dizi iki boyutlu oldugu icin iki adet for dongusune ihtiyacimiz var.
            for (ii = 0; ii < nn; ii++)
            {
                printf("Dizinin %d. satirinin %d. sutununu giriniz: ", i, ii);
                scanf("%d", &matris[i][ii]);
            }        
        }   
    } else if (belirtec == 2) {
        //Matrisimizin elemanlarini otomatik dolduruyoruz.
        for (i = 0; i < n; i++)
        {//Dizi iki boyutlu oldugu icin iki adet for dongusune ihtiyacimiz var.
            for (ii = 0; ii < nn; ii++)
            {
                matris[i][ii] = (rand() % (upper - lower + 1) + lower);
            }        
        }
    } else {
        printf("Hatali bir sayi girdiniz lutfen tekrar deneyin :(\n");
        goto BELIRTEC;
    }

    for (i = 0; i<n; i++) {
        for (j = i+1; j<n; j++){
            int temp = matris[i][j]; 
            matris[i][j] = matris[j][i]; 
            matris[j][i] = temp;
        }
    }

}