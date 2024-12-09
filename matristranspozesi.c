#include <stdio.h>

int main() {

    //Degiskenlerimizi declare ediyoruz.
    int i, ii, n, nn;

    //Dizimizin kac satir, kac sutundan olustugunu belirliyoruz.
    printf("Dizinin 1. boyutunun kac oldugunu giriniz: ");
    scanf("%d", &n);
    printf("Dizinin 2. boyutunun kac oldugunu giriniz: ");
    scanf("%d", &nn);
    
    //Matrisimizi (dizimizi) declare ediyoruz.
    int matris[n][nn];
    
    //Matrisimizin elemanlarini sirayla aliyoruz.
    for (i = 0; i < n; i++)
    {//Dizi iki boyutlu oldugu icin iki adet for dongusune ihtiyacimiz var.
        for (ii = 0; ii < nn; ii++)
        {
            printf("Dizinin %d. satirinin %d. sutununu giriniz: ", i, ii);
            scanf("%d", &matris[i][ii]);
        }        
    }

    //Matrisimizi yazdiriyoruz.
    for (i = 0; i < n; i++)
    {//Dizi iki boyutlu oldugu icin iki adet for dongusune ihtiyacimiz var.
        printf("|");
        for (ii = 0; ii < nn; ii++)
        {
            printf(" %d ", matris[i][ii]);
        }
        printf("|\n");
    }

    printf("-----------------------------------------------------\n");

    //Matrisimizi transpoze edecegiz.   

    //Bunun icin yeni bir matris olusturuyoruz.
    int yenimatris[nn][n];

    for (i = 0; i < n; i++)
    {
        for (ii = 0; ii < nn; ii++)
        {
            yenimatris[ii][i]=matris[i][ii];
        }
    }

    //Yeni matrisimizi yazdiriyoruz.
    for (ii = 0; ii < nn; ii++)
    {
        printf("|");
        for (i = 0; i < n; i++)
        {
            printf(" %d ", yenimatris[ii][i]);
        }
        printf("|\n");
    }
        
}