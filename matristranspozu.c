#include <stdio.h>
#include <stdlib.h>

int main() {

    //Degiskenlerimizi declare ediyoruz.
    int i, ii, n, nn, belirtec;

    //Dizimizin kac satir, kac sutundan olustugunu belirliyoruz.
    printf("Dizinin satir sayisinin kac oldugunu giriniz: ");
    scanf("%d", &n);
    printf("Dizinin sutun sayisinin kac oldugunu giriniz: ");
    scanf("%d", &nn);

    //Matrisimizi (dizimizi) declare ediyoruz.
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

    printf("\nMatrisin orijinal hali: \n\n");

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

    printf("\n-----------------------------------------------------------------------------\n\n");
    
    //Matrisimizi transpoz edecegiz.
    printf("Matrisin transpoz edilmiş hali: \n\n");   

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
    printf("\n\n");

    printf("-----------------------------------------------------------------------------\n\n");

    //Bir de matrisimizi sortlayalim (siralayalim).  
    printf("Matrisin sortlanmis hali: \n\n");
    
    int j, jj, jjj, temp[n*nn], sayac = 0, tempiki;
    
    //Matrisi duz bir array'a (tek boyutlu bir diziye) atiyoruz.
    for(j = 0; j < n; j++){
        for (jj = 0; jj < nn; jj++)
        {
            temp[sayac] = matris[j][jj];
            sayac++;
        }
    }    

    //Duz arrayimizi sortluyoruz (siraliyoruz).
    for (jjj = 0; jjj < n*nn-1; jjj++) // Burada sonuncu sayiyi karsilastiramayacagi icin en sondan bir oncekine kadar gidiyoruz.
    {
        if (temp[jjj] > temp[jjj+1]) { // Eger soldaki sayi sagdakinden buyukse
            tempiki = temp[jjj]; // Soldaki sayiyi temp degerine atiyoruz
            temp[jjj] = temp[jjj+1]; // Sonra soldaki sayiyi sagdaki sayiya esitliyoruz
            temp[jjj+1] = tempiki; // Ardindan sagdaki sayiyi da soldaki sayiya yani yukarida atadigimiz temp degerine esitliyoruz
            jjj = -1; // Ve sayac degerimizi -1'e esitliyoruz ki dongu en basa sardigindan bir artip 0. indexten tekrar siralamaya baksin
        } 
    }

    //Simdi arrayimizin icindeki degerleri tekrardan matrisimize geciriyoruz.
    sayac = 0;
    for (j = 0; j < n; j++)
    {
        for (jj = 0; jj < nn; jj++) {
            matris[j][jj] = temp[sayac];
            sayac++;
        }
    }
    
    //Terkrardan matrisimizi yazdiralim.
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (ii = 0; ii < nn; ii++)
        {
            printf(" %d ", matris[i][ii]);
        }
        printf("|\n");
    }
}