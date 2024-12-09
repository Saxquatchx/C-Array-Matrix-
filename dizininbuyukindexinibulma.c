#include <stdio.h>

int main() {
    //Degerlerimizi declare edelim.
    int boyut, deger;

    //Dizi boyutunu alalim.
    printf("Lutfen boyutu giriniz: ");
    scanf("%d", &boyut);

    //Diziyi declare edelim.
    int array[boyut];

    //Dizi elemanlarini alalim
    for (int i = boyut-1; i >= 0; i--)
    {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &deger);

        array[i] = deger;
    }

    //DIKKAT BENIM YAZDIGIM KOD BUG ICERIYOR GURKAN HOCANIN KODUYLA AYNI DEGIL !!!!

    //Dizinin en buyuk degerini, ikinci en buyuk degerini ve en kucuk degerini bulalim.

    //Degerlerimizi declare edelim.
    int BYK = array[0];
    int KCK = array[0];
    int ORT = array[0];
    
    //En buyuk ve en kucuk degerlerimizi bulalim.
    for (int i = 1; i < boyut; i++)
    {
        if (BYK < array[i]) BYK = array[i];
        if (KCK > array[i]) KCK = array[i];
    }

    //Ikinci en buyuk degerimizi bulalim.
    for (int i = 1; i < boyut; i++)
    {
        if (ORT < array[i] && array[i] < BYK) ORT = array[i];
    }
    
    //Son olarak hepsini ekrana bastiralim.
    printf("En büyük index degeri: %d\n", BYK);
    printf("En 2. büyük index degeri: %d\n", ORT);
    printf("En kucuk index degeri: %d\n", KCK);
}