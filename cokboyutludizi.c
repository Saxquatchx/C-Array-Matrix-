#include <stdio.h>

int main() {
    //Oncelikle 2 boyutlu dizimizi declare edelim. (2 boyutlu oldugu icin bir satir bir de sutun degerimiz olacak.)
    int ogrenci_tablosu[3][3];

    //Donguler icin sayac degiskenlerimizi declare edelim.
    int i, j;

    //Ic ice dongulerle kullanicidan dizimizin elemanlarini alalim.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d no.'lu ogrencinin ", (i+1));
            printf("%d no.'lu sinavi >", (j+1));
            scanf("%d", &ogrenci_tablosu[i][j]);
        }   
    }

    //Yine ic ice dongu kullanarak dizi elemanlarimizi bir matris halinde yazdiralim.
    for (i = 0; i < 3; i++)
    {
        printf("|");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", ogrenci_tablosu[i][j]);
        }
        printf("|");
        printf("\n");
    }
    
}