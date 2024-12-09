#include <stdio.h>

int main () {
    //Degerlerimizi declare edelim.
    int n,x,i,j;

    //Dizi boyutunu bulalim.
    printf("Dizi kac elemanli ? ");
    scanf("%d", &n);

    //Diziyi declare edelim.
    int a[n];

    //Dizi elemanlarini alalim.
    for (i = 0; i < n; i++)
    {
        printf("Dizinin %d. indexini giriniz: ",i);
        scanf("%d", &a[i]);
    }
     
    //Diziye eklemek istedigimizi sayiyi alalim.
    printf("Eklenecek elemani giriniz: ");
    scanf("%d", &x);

    i = 0;
    
    //Ekleyecegimiz sayinin index degerini bulalim
    while(x>a[i]) i++;

    printf("-------------------------------------------------------\n");

    printf("Eklenecek pozisyon %d'dir.\n", i);

    printf("-------------------------------------------------------\n");

    //Diziye ekleyecegimiz eleman icin bosluk yaratalim. (Eklenecek elemandan buyuk olan elemanlari bir saga kaydiriyoruz.)
    for (j = n-1; j >= i; j--)
    {
        a[j+1] = a[j];
    }

    //Elemani belirlenen index degerine atiyoruz.
    a[i] = x;
    
    //Diziyi tekrar yazdiriyoruz.
    for (i = 0; i <= n; i++)
    {
        printf("Dizinin %d. indexi = %d \n",i, a[i]);
    }

    printf("-------------------------------------------------------\n");

    //Burada da ayni islemleri diziden eleman cikarmak icin yapiyoruz.
    int z;
    printf("Cikarilmasini istediginiz elemani giriniz: ");
    scanf("%d", &z);

    for (int f = 0; f < n; f++)
    {
        if (a[f] == z)
        {
            printf("Silinecek pozisyon = %d\n", f);

            for(int h = f; h < n; h++) {
                a[h] = a[h+1];
            }
        }
    }
    
    printf("-------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("Dizinin %d. indexi = %d \n",i, a[i]);
    }

    printf("\n\n\n%d. eleman = %d\n", n, a[n]);
    
}