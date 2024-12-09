#include <stdio.h>

int main() {
    //Degiskenleri declare edelim.
    int n, x, i, ib, ic, is;
    
    //Dizinin boyutunu alalim.
    printf("Dizi kac elemanli ? ");
    scanf("%d", &n);
    
    //Diziyi declare edelim.
    int a[n];
    
    //Dizinin elemanlarini sirayla alalim.
    for (i = 0; i < n; i++)
    {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &a[i]);
    }
    
    //Dizi icerisinde arayacagimiz sayiyi alalim.
    printf("Aranilan sayi kactir ? ");
    scanf("%d", &x);
    
    //ibaslangic, icenter ve ison degerlerimizi tanimlayalim.
    ib = 0;
    is = n-1;
    ic = (ib+is)/2;
    
    //Binary search algoritmasini hayata gecirelim.
    while (ib<is)
    {
        if (x==a[ic])
        {
            ib = is;
        } else if (x>a[ic])
        {
            ib = ic+1; 
            ic = (ib+is)/2;
            for(i = ib; i<is; i++) {
                printf("%4d", a[i]);
            } 
            printf("\n");
        }
        else {
            is=ic-1;
            ic=(ib+is)/2;
            for(i = ib; i<is; i++) {
                printf("%4d", a[i]);
            }
            printf("\n");
        }
    }

    //Bosluk birakalim.
    printf("\n");

    //Ve sonucu ekrana bastiralim.
    if (x == a[ic])
    {
        printf("Aranilan eleman bulundu, yeri = %d'dir.\n", ic+1);
    } else {
        printf("Aranan sayi bulunamadi.\n");
    }
    
    
}