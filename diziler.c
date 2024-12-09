#include <stdio.h>

int main(){
    //Degerlerimizi declare edelim.
    int boyut, deger, tmp;
    
    //Dizi boyutunu kullanicidan alalim.
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &boyut);

    //Diziyi declare edelim.
    int A[boyut];

    //Dizinin elemanlarini alalim.
    for (int i = boyut-1; i >= 0; i--)
    {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &deger);

        A[i] = deger;
    }

    //Bosluk birakiyorum
    printf("------------------------------------------------------------\n");


    //ASAGIDA IKI DONGU ILE YAZDIRDIM HANGI DONGUYU KULLANMAK ISTIYORSAN YORUM SATIRINDAN CIKARMALISIN.
    

    //For döngüsü ile yazdırma.

    /*for (int j = 0; j < boyut; j++)
    {
        printf("Dizinin %d. index'i: %d\n", j, A[j]);
    }*/
    
    //While döngüsü ile yazdırma.

    /*int j = 0;
    while (j<boyut)
    {
        printf("Dizinin %d. index'i: %d\n", j, A[j]);
        j++;
    }*/

    //BURAYA SAKIN BAKMA !!!!!!!!
    
    /*if (boyut%2 == 0)
    {
        for (int h = 0; h < boyut/2; h++)
        {
            int birincideger = A[h];
            int toplam = birincideger+A[boyut-h];
            printf("Dizinin %d. degeri ile %d. degerinin toplami = %d\n", h, boyut-h, toplam);           
        }   
    } else {
        for (int h = 0; h < (boyut/2)+1; h++)
        {
            if (h > boyut/2)
            {
                printf("Dizinin %d. degeri = %d", h, A[h]);
            }
            
            int birincideger = A[h];
            int toplam = birincideger+A[boyut-h];
            printf("Dizinin %d. degeri ile %d. degerinin toplami = %d\n", h, boyut-h, toplam);           
        } 
    } */   

    //Bosluk birakiyorum
    printf("------------------------------------------------------------\n");

    //Değerleri takas etme.
    for (int i = 0; i < boyut/2; i++)
    {
        tmp = A[i];
        A[i] = A[boyut-i-1];
        A[boyut-i-1]=tmp;
            
    }

    //Diziyi bastirma.
    for (int j = 0; j < boyut; j++)
    {
        printf("Dizinin %d. index'i: %d\n", j, A[j]);
    }
   
}