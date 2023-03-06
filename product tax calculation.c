#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () 
{
    int secim;
    int fiyat;
    float sonfiyat;

    printf("urun vergisi hesaplamaya hosgeldiniz\n");
    printf("******************************\n");
    printf("hesaplamak istediginiz urun icin gereken tusa basinizi\n");
    printf("kumanda icin 0'a basiniz\n");
    printf("temel tüketim gida icin 1'e basiniz\n");
    printf("lüks tüketim ürünleri icin 2'ye basiniz\n");
    printf("sigara icin 3'e basiniz\n");
    printf("alkol icin 4'e basiniz\n");
    printf("******************************\n");
    printf("seciminizi giriniz: ");
    scanf("%d",&secim);

    switch (secim)
    {
    case 0:
        printf("kumanda fiyatini giriniz: ");
        scanf("%d",&fiyat);
        sonfiyat=fiyat*1.18;
        printf("kumanda fiyati: %f",sonfiyat);
        break;
    case 1:
        printf("temel tüketim gida fiyatini giriniz: ");
        scanf("%d",&fiyat);
        sonfiyat=fiyat*1.08;
        printf("temel tüketim gida fiyati: %f",sonfiyat);
        break;

    case 2:

        printf("lüks tüketim ürünleri fiyatini giriniz: ");
        scanf("%d",&fiyat);
        sonfiyat=fiyat*1.28;
        printf("lüks tüketim ürünleri fiyati: %f",sonfiyat);
        break;

    case 3:
    
            printf("sigara fiyatini giriniz: ");
            scanf("%d",&fiyat);
            sonfiyat=fiyat*1.50;
            printf("sigara fiyati: %f",sonfiyat);
            break;
     
     case 4;
         
                printf("alkol fiyatini giriniz: ");
                scanf("%d",&fiyat);
                sonfiyat=fiyat*1.18;
                printf("alkol fiyati: %f",sonfiyat);
                break;
        
    default:
        printf("yanlis secim yaptiniz");
        break;
    }

    return 0;
}