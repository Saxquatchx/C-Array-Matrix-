#include <stdio.h>

int main() {
    //Degerlerimizi declare edelim.
    int n,x,yer,i=0,kontrol = 0;
    
    //Dizimizin boyutunu alalim.
    printf("Dizi kac elemanlidir ? ");
    scanf("%d",&n);

    //Dizimizi declare edelim.
    int a[n];

    //Dizimizin elemanlarini alalim.
    for (int j = 0; j < n; j++)
    {
        printf("Dizinin %d. elemanini giriniz: ", j+1);
        scanf("%d", &a[j]);
    }

    //Dizi icerisindeki arayacagimiz elemani alalim.
    printf("Hangi elemani aramak istiyorsunuz ? ");
    scanf("%d", &x);

    // DİKKAT BURADA HANGİ DÖNGÜ İLE ÇALIŞTIRMAK İSTİYORSANIZ ORADAKİ YORUM SATIRLARINI KALDIRINIZ

    //For dongusu ile:
    /*for (i = 0; i < n &&  kontrol == 0; i++)
    {
        if (x==a[i])
        {
            kontrol = 1;
            yer = i;
        }
        
    }*/

    // While ile:
    /*while (i<n && kontrol==0)
    {
        if (x!=a[i]) i++;

        else {
            yer = i;
            kontrol = 1;
        }
    }*/

    //Do while ile:
    /*do
    {
        if (x!=a[i]) i++;

        else {
            yer = i;
            kontrol = 1;
        }

    } while (i<n && kontrol == 0);*/

    //Sonucu ekrana bastiralim.   
    if (kontrol == 1) printf("Aranan elemanimiz (%d)'in yeri %d. indextir, yani %d. siradadir.\n", x, yer, yer+1);
    else printf("Aranan deger bulunamadi.\n");
}