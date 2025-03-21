//                      eklenecekler : poliklinik bilgisi = hangi bölüm için gelindi
//                      
#include <stdio.h>
#include<conio.h>
#include<string.h>
    struct doktorlar{
    
        char doktor_adi[20];
        char doktor_soyadi[20];
        int hasta_sayisi;
        int doktor_saatleri[24];
    };
    


	 struct hastalar{
		char hasta_adi[20];
		char hasta_soyadi[20];
		unsigned long long int tc_no;
        char hastalik_adi[20];
		int saat;
        char doktor_adi1[20];
	};

int main(){
    printf("\t\t\t\t'HASTA RANDEVU ALMA SISTEMINE HOSGELDINIZ'\n\n\t\t\t'Programimiz buyuk kucuk harfe duyarlidir lutfen dikkat ediniz\n");
int durum='E',sayac=0,sayac1=0,sayac2=0,flag_saat=0,flag_dradi=0;


struct doktorlar doktor1= {"Fatih","Cubuk",0,sayac1};
struct doktorlar doktor2 ={"Salih","Durmus",0,sayac2};

for (int i = 0; i < 24; i++)
{
    doktor1.doktor_saatleri[i]=0;
    doktor2.doktor_saatleri[i]=0;
}



//------------------------------------------------------------
struct hastalar hasta[50] ;
//							Maksimum muayne edilebilecek hasta sayısı = 50




while(durum=='E' && sayac!=51){
	//                                                  Kullanıcıdan veriler isteniyor
    printf("\n%d. hastanin adini giriniz :  ",sayac+1);
	scanf("%s",hasta[sayac].hasta_adi);

	printf("\n%d. hastanin soyadini giriniz :  ",sayac+1);
	scanf("%s",hasta[sayac].hasta_soyadi);

	printf("\n%d. hastanin tc nosunu giriniz :  ",sayac+1);
	scanf("%llu",&hasta[sayac].tc_no);
//--------------------------------------------------------------------------------------------------------------------------DOKTOR BİLGİSİ
     while (flag_dradi == 0)
     {
     
        printf("\nHizmet veren doktorlar :<== *%s %s* |Aktif hasta sayisi= %d| ==> <== *%s %s* |Aktif hasta sayisi= %d| ==>\n%d. hastanin talep ettigi doktor adi :  ",doktor1.doktor_adi,doktor1.doktor_soyadi,doktor1.hasta_sayisi,doktor2.doktor_adi,doktor2.doktor_soyadi,doktor2.hasta_sayisi,sayac+1);
	scanf("%s",hasta[sayac].doktor_adi1);


    if (strcmp (hasta[sayac].doktor_adi1 , "Fatih") ==0){
        flag_dradi++;
        sayac1++;
        doktor1.hasta_sayisi++;


    }
    else if (strcmp (hasta[sayac].doktor_adi1 ,"Salih")==0)
    {
        sayac2++;
        flag_dradi++;
        doktor2.hasta_sayisi++;
    }
    else
     printf("--> Gecersiz doktor adi. \nLutfen sadece bas harf buyuk olacak seklilde doktorun yalnizca adini yaziniz");

     }
     flag_dradi = 0;
     //------------------------------------------------------------------------------------------------------------------------------SAAT BİLGİSİ
	while (flag_saat == 0)
    {
    
    printf("\n%d. Hastanin saatini giriniz :  \n Hastahane sabah 8:00 den aksam 17:00 ye kadar hizmet vermektedir. Sadece saat baslarina randevu alabilirsiniz.\n\nOrnek saat giris, => 08:00 icin '8' , 15:00 icin '15' vb. \n",sayac+1);
    scanf("%d",&hasta[sayac].saat);	

    if (8<=hasta[sayac].saat && hasta[sayac].saat<17 ){
        
         if (strcmp (hasta[sayac].doktor_adi1 , "Fatih") ==0 && doktor1.doktor_saatleri[hasta[sayac].saat] != 1){
        doktor1.doktor_saatleri[hasta[sayac].saat]=1;
        flag_saat++;
    }
         else if (strcmp (hasta[sayac].doktor_adi1 ,"Salih")==0 && doktor2.doktor_saatleri[hasta[sayac].saat] != 1){
        doktor2.doktor_saatleri[hasta[sayac].saat]=1;
        flag_saat++;

    }
        
      
      
    }

    else if(hasta[sayac].saat >=17 || hasta[sayac].saat<=7)
        printf("Gecersiz saat girdiniz. Lufen gecerli bir saat giriniz : ");

   
   
    else if( doktor1.doktor_saatleri[hasta[sayac].saat] == 1 || doktor2.doktor_saatleri[hasta[sayac].saat] == 1)
        printf("Girdiginiz randevu saati %s isimli doktor icin doludur. Lutfen gecerli bir saat giriniz : ",hasta[sayac].doktor_adi1);
    
    }


    flag_saat = 0;
	sayac++;
// ---------------------------------------------------------------------------------------------------------------------  Yeni kullanıcı girilmek isteniyor mu?
    printf("Yeni bir randevu almak istiyorsaniz 'E' ye , istemiyorsaniz herhangi bir tusa tiklayiniz\n");
    scanf("%s",&durum);
    printf("-----------------------------------------------------------------------------------------------------\n");
}	

for(int j=0;j<sayac;j++){
                                                                                            
printf("\n--------------------------------------\n%d. hasta => Hasta adi-soyad =%s %s\nHasta Tc no= %llu\nRandevu saaati %d:00\nDoktor adi= %s",j+1,hasta[j].hasta_adi,hasta[j].hasta_soyadi,hasta[j].tc_no,hasta[j].saat,hasta[j].doktor_adi1);

}



	
getch();
}