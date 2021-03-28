#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int secim1,secim2;
	
	printf("*******C Proglama Dili Kitapcigina Hosgeldiniz*******\n\n");
	
	printf("1_Kisi Tanitimi\n");
	printf("2_Kitap Tanitimi\n");
	printf("3_Interaktif Kitap Tanitimi\n");
	printf("4_Girilen Sayilarda Dort Islem Yapma\n");
	printf("5_Kare'nin Alan Ve Cevre Hesabi\n");
	printf("6_Sinav Ortalamasi Bulma\n");
	printf("7_Sinema Fiyat Hesaplama\n");
	printf("8_Maas-Zam Hesabi\n");
	printf("9_Cemberde Alan Ve Cevre Hesabi\n");
	printf("10_Otopark Ucreti Hesaplama\n");
	printf("11_Satis Sayisina Gore Indirim Yapma\n");
	printf("12_Asal Sayi Bulma\n");
	printf("13_Faktoriyel Alma\n");
	printf("14_Girilen Sayilara Kadar Toplama Yapma\n");
	printf("15_Fibonacci Dizisi\n");
	printf("16_Sayiyi Basamaklarina Parcalama\n");
	printf("17_Faktoriyel Alma 2\n");
	printf("18_Sehirleri Listeleme\n");
	printf("19_Olusturulan Dizinin Toplamini Ve Ortalamasini Bulma\n");
	printf("20_Yildizlarla Kare Olusturma\n");
	printf("21_Yildizlarla Dik Ucgen Olusturma\n");
	printf("22_Yildizlarla Kelebek Kanadi Olusturma\n");
	printf("23_Yildizlarla Taban Degeri Girilen Ucgen Olustuma\n");
	printf("24_Yildizlarla Sekil Olusturma Uygulamasi\n");
	printf("25_Matris Olusturma Programi\n\n");
//	printf("26_DENEME\n");
//	printf("27_\n");
//	printf("28_\n");
	
	printf("Yapmak Istediginiz Islemi Seciniz:");
	scanf("%d",&secim1);
	
	switch(secim1)
	{
		case 1:printf("\n\n");
		
		       printf("-Kisi Tanitimi-\n");
		
		       printf("Ad: Ogulcan\n");
		       printf("Soyad: Guzel\n");
		       printf("Meslek: Yazilimci\n");
		       printf("Maas: 2.500\n");
		       printf("Il: Istanbul");
		       break;
	
	    case 2:printf("\n\n");
	    
               printf("-Kitap Tanitimi-\n");	    
	    
		       char kitapad1[20]="Heyet";
	           char yazar1[20]="Halil Yasar Kollu";
	           char turu1[10]="Tarih";
	           char sayfa1[3]="286";
	           char basimyili1[4]="2016";
	           
	           printf("Kitap Adi:%s\n",kitapad1);
	           printf("Kitap Yazari:%s\n",yazar1);
	           printf("Turu:%s\n",turu1);
	           printf("Sayfa Sayisi:%s\n",sayfa1);
	           printf("Basim Yili:%s\n",basimyili1);
	           break;
	    
	    case 3:printf("\n\n");
	    
	           printf("-Interaktif Kitap Tanitimi-\n");
	           
	           char kitapad2[30];
               char yazar2[30];
               char sayfa2[3];
               char basimyili2[4];
               char turu2[10];
 
               printf("Kitap Adi: ");
               scanf("%s",kitapad2);
 
               printf("Kitap Yazari: ");
               scanf("%s",yazar2);
               
               printf("Turu: ");
               scanf("%s",turu2);
 
               printf("Sayfa Sayisi: ");
               scanf("%s",sayfa2);
 
               printf("Basim Yili: ");
               scanf("%s",basimyili2);
               
               printf("\n");
               
               printf("Kitap Adi:%s\n",kitapad2);
	           printf("Kitap Yazari:%s\n",yazar2);
	           printf("Turu:%s\n",turu2);
	           printf("Sayfa Sayisi:%s\n",sayfa2);
	           printf("Basim Yili:%s\n",basimyili2);
	           break;
	           
	    case 4:printf("\n\n");
	    
	           printf("-Girilen Sayilarda Dort Islem Yapma-\n");
	    
		       float sayi1,sayi2,toplam1,fark1,carpim1;
               float bolum1;
               printf("Birinci sayiyi giriniz :");
               scanf("%f",&sayi1);
 
               printf("Ikinci sayiyi giriniz :");
               scanf("%f",&sayi2);
    
               toplam1=sayi1+sayi2;
               fark1=sayi1-sayi2;
               carpim1=sayi1*sayi2;
               bolum1=sayi1/sayi2;
               
               printf("Toplam: %f\n",toplam1);
			   printf("Fark: %f\n",fark1);
			   printf("Carpim: %f\n",carpim1);
			   printf("Bolum: %f\n",bolum1);      
               break;
               
        case 5:printf("\n\n");
		       
               printf("-Karenin Alani Ve Cevre Hesabi-\n");
               
               int kenar1,alan1,cevre1;
 
               printf("Bir Kenari Giriniz: ");
               scanf("%d",&kenar1);
 
               alan1=kenar1*kenar1;
               cevre1=kenar1*4;
 
               printf("Karenin Alani: %d\n",alan1);
               printf("Karenin Cevresi: %d",cevre1); 
			   break;  
			   
		case 6:printf("\n\n");
		
		       printf("-Sinav Ortalamasi Bulma-\n");
		       
			   int s1,s2,s3,ort1;
 
               printf("Birinci Sinavi Giriniz: ");
               scanf("%d",&s1);
 
               printf("Ikinci Sinavi Giriniz: ");
               scanf("%d",&s2);
 
               printf("Ucuncu Sinavi Giriniz: ");
               scanf("%d",&s3);
 
               ort1=(s1+s2+s3)/3;
 
               printf("\nSinav Ortalamasi: %d",ort1);
			   break;
			   
		case 7:printf("\n\n");
		
		       printf("-Sinema Fiyat Hesaplama-\n");	   	       
               
               int misir,kola,su,tb,ob,toplam2;
               
               printf("Tam Bilet Adeti: ");
               scanf("%d",&tb);
               
               printf("Ogrenci Bilet Adeti: ");
               scanf("%d",&ob);
 
               printf("Misir Adeti: ");
               scanf("%d",&misir);
 
               printf("Kola Adeti: ");
               scanf("%d",&kola);
 
               printf("Su Adeti: ");
               scanf("%d",&su);
 
               toplam2=misir*6+kola*5+su*2+tb*19+ob*17;
               
			   printf("Hesap Edilen Miktar: %d TL..",toplam2);
               break;
	
	    case 8:printf("\n\n");
	    
	           printf("-Maas-Zam Hesabi-\n");
	
	           float maas,yenimaas,zamyuzde;
	           
	           printf("Maasinizi Giriniz:");
	           scanf("%f",&maas);
	           
	           printf("Zam Yuzdesini Giriniz:");
	           scanf("%f",&zamyuzde);
	           
	           yenimaas=maas+(maas*zamyuzde/100);
	           
	           printf("Yeni Maasiniz:%4.f",yenimaas);
	           break;
	           
	    case 9:printf("\n\n");
	    
	           printf("-Cemberde Alan Ve Cevre Hesabi-\n");       
	
	           float yaricap1,pi1,alan2,cevre2;
	           
	           pi1=3.14;
	           
	           printf("Yaricap Degerini Giriniz: ");
	           scanf("%f",&yaricap1);
	           
	           alan2=pi1*yaricap1*yaricap1;
	           cevre2=2*pi1*yaricap1;
	           
	           printf("Alan: %.2f\n",alan2);
	           printf("Cevre: %.2f",cevre2);
	           break;
	           
	    case 10:printf("\n\n");
		 
		        printf("-Otopark Ucreti Hesaplama-\n");
		        
		        int saat ;
		        
                printf("Otoparkta Kalma Sureniz :");
                scanf("%d",&saat);
                
                if(saat>=1 && saat<3)
                {
                	printf("Borcunuz : 5 TL");
                }
                
                if(saat>=3 && saat<5)
                {
                	printf("Borcunuz :7.5 TL");
                }
                
                if(saat>=5 && saat<8)
                {
                	printf("Borcunuz :10 TL");
                }
                
                if (saat>8)
                {
                	printf("Borcunuz :20 TL");
	            }
	            break;
	    
	    case 11:printf("\n\n");
	            
	            printf("Satis Sayisina Gore Indirim Yapma\n");
	            
	            int kitapfiyat,satis;
                float toplamborc,toplamborc1,toplamborc2,toplamborc3;
                
                kitapfiyat=5;
                
                printf("Kac adet kitap aldiniz :");
                scanf("%d",&satis);
                
                toplamborc=(kitapfiyat*satis);
 
                if(satis>=1 && satis<15)
                {
                	toplamborc1=(kitapfiyat*satis)-(kitapfiyat*satis*0.05);
                 	printf("Toplam Borcunuz :%.3f TL\n",toplamborc);
                 	printf("Indirimli Tutar :%.3f TL",toplamborc1);
                }
                
                if(satis>=5 && satis<=10)
                {
                	toplamborc2=(kitapfiyat*satis)-(kitapfiyat*satis*0.10);
                	printf("Toplam Borcunuz :%.3f TL\n",toplamborc);
                	printf("Indirimli Tutar :%.3f TL",toplamborc2);
                }
                
                if(satis>10)
                {
                	toplamborc3=(kitapfiyat*satis)-(kitapfiyat*satis*0.20);
                	printf("Toplam Borcunuz :%.3f TL\n",toplamborc);
                	printf("Indirimli Tutar :%.3f TL",toplamborc2);
                }
	            break;
	    
		case 12:printf("\n\n");
		
		        printf("-Asal Sayi Bulma-\n");
	
	            int i,sayi3,sayac1=0;
	            
	            printf("Sayiyi girin : ");
                scanf("%d",&sayi3); 
                
                for(i=2;i<sayi3;i++)
                {
                	if(sayi3%i==0)
                    {
                		sayac1++;
                    }    
                } 
				
				if(sayac1==0)
                {
                	printf("Asal");                    
                }
                
                else
                {
                	printf("Asal degil"); 
                } 
                break;

	    case 13:printf("\n\n");
	    
	            printf("-Faktoriyel Alma-\n");
	            
	            int i1,sayi4;
	            int faktoriyel=1;
	            
	            printf("Faktoriyeli Alinacak Sayiyi Giriniz:");
	            scanf("%d",&sayi4);
	            
	            for(i1=1;i1<=sayi4;i1++)
	            {
	            	faktoriyel=faktoriyel*i1;
				}
	            
	            printf("Sonucunuz:%d",faktoriyel);
	            break;
	            
	    case 14:printf("\n\n");
	    
	            printf("-Girilen Sayilara Kadar Toplama Yapma-\n");
	            
	            int i2,kactan,deger,kaca,toplam3=0;
	            
                printf("Kactan Baslasin: ");
                scanf("%d",&kactan);
                
                printf("Arttirilacak Deger Giriniz: ");
                scanf("%d",&deger);
                
                printf("Kaca Kadar Saysin: ");
                scanf("%d",&kaca);
                
                for(i2=kactan;i2<=kaca;i2+=deger)
                {
                	printf("%d\n",i2);
                	toplam3=toplam3+i2;
                }
                
                printf("Girmis Oldugunuz Sayilarin Toplami: %d\n",toplam3); 
	            break;
	
	    case 15:printf("\n\n");
	            int terimsayisi;
	            printf("-Fibonacci Dizisi-\n");
	            printf("Kac Terim Yazilsin:");
	            scanf("%d",&terimsayisi);
	            int birinciSayi=0, ikinciSayi=1, ucuncuSayi,i3;
    
                while(i<=terimsayisi)
 				{
 					printf("%d ",birinciSayi);
 					ucuncuSayi  = birinciSayi + ikinciSayi;
 					birinciSayi = ikinciSayi;
 					ikinciSayi  = ucuncuSayi;
 					i++;
 				}
                break;
    
        case 16:printf("\n\n");
        
                printf("-Sayiyi Basamaklarina Parcalama-\n");
    
                int sayi5,birler,onlar,yuzler,x;
 
                printf("3 bir basamakli sayi giriniz: ");
                scanf("%d",&sayi5);
                
                yuzler=sayi5/100;
                x= (sayi5-sayi5%10)-100*(sayi5/100);
                onlar=x/10;
                birler=sayi5%10;
                
                printf("%d\n",yuzler);
                printf("%d\n",onlar);
                printf("%d",birler);
                break;
    
        case 17:printf("\n\n");
        
                printf("-Faktoriyel Alma 2-\n");
    
                int girilen,faktoriyel1=1;
                
                printf("Hesaplanacak Sayiyi Giriniz: ");
                scanf("%d",&girilen);
 
                while(girilen>=1)
                {
                	printf("%d ",girilen);
                	faktoriyel1=faktoriyel1*girilen;
                	girilen--;
                }
                printf("\nGirmis Oldugunuz Sayinin Faktoriyeli: %d",faktoriyel1);
                break;
                
        case 18:printf("\n\n");
        
                printf("-Sehirleri Listeleme-\n");        
    
                char sehir[3] [15];
                int i4;
                
                for(i4 = 0; i4 < 3; i4++)
				{
                	printf("%d. sehri giriniz : ", i4+1);
                	scanf("%s", &sehir[i4]);
                }
                
                printf("\n");
 
                for(i4 = 0; i4 < 3; i4++)
				{
                	printf("%d. girdiginiz il = %s\n", i4+1, sehir[i4]);
                }
                break;
                
        case 19:printf("\n\n");
        
                printf("-Olusturulan Dizinin Toplamini Ve Ortalamasini Bulma-\n");        
    
                int dizi[100];
                int i5, sayi6, toplam4 = 0, ortalama;
 
                printf("Dizinin eleman sayisini giriniz : ");
                scanf("%d", &sayi6);
 
                for(i5 = 0; i5 < sayi6; i5++)
				{
                	printf("%d. Sayiyi gir : ", i5+1);
                	scanf("%d", &dizi[i5]);
                	toplam4 = toplam4 + dizi[i5];
                }
                
                ortalama = toplam4 / sayi6;
 
                printf("\n");
 
                for(i5 = 0; i5 < sayi6; i5++)
				{
                	printf("%d. girdiginiz sayi = %d\n", i5+1, dizi[i5]);
                }
                
                printf("\n");
                printf("Girdiginiz Sayilarin Toplami = %d \n", toplam4);
                printf("Girdiginiz Sayilarin Ortalamasi = %d \n", ortalama);
                break;
 
        case 20:printf("\n\n");
        
                printf("-Yildizlarla Kare Olusturma-\n"); 
 
                int i6, j1;
 
                for(i6 = 1; i6 <= 5; i6++)
                {
                	for(j1 = 1; j1 <= 6; j1++)
                    {
                    	printf("*");
                    }
                    printf("\n");
                } 
                break;
                
        case 21:printf("\n\n");
        
                printf("-Yildizlarla Dik Ucgen Olusturma-\n");        
 
                int i7, j2;
 
                for(i7 = 1; i7 <= 5; i7++)
                {
                	for(j2 = 1; j2 <= i7; j2++)
                    {
                    	printf("*");
                    }
                    printf("\n");
                } 
                break;
    
        case 22:printf("\n\n");
        
                printf("-Yildizlarla Kelebek Kanadi Olusturma-\n");
    
                int i8,j3,k,l;
 
                for(i8=1;i8<=4;i8++)
                {
                	for(j3=1;j3<=i8;j3++)
                    {
                    	printf("*");
                    }
                 
                    for(j3=1;j3<=8-2*i8;j3++)
                    {
                    	printf(" ");
                    }
                    for(j3=1;j3<=i8;j3++)
                    {
                    	printf("*");
                    }
                    printf("\n");
				}
 
                for(k=1;k<=4;k++)
                {
                	for(l=1;l<=5-k;l++)
                    {
                    	printf("*");
                    }
                 
                	for(l=1;l<=8-2*(5-k);l++)
                	{
                    	printf(" ");
                	}
                    for(l=1;l<=5-k;l++)
                	{
                		printf("*");
                	}
                	printf("\n");
                }
                break;
    
        case 23:printf("\n\n");
        
                printf("-Yildizlarla Taban Degeri Girilen Ucgen Olustuma-\n");
    
                int taban,i9,j4,k1,n;
 
                printf("Taban Degerini Girin: ");
                scanf("%d",&taban);
 
                for(i9=1;i9<=taban;i9++)
                {
                	for(j4=1;j4<=i9;j4++)
                	{
                		printf("*");
                    }
                    printf("\n");
                }
 
                for(k1=1;k1<=taban;k1++)
                {
                	for(n=taban;n>=k1;n--)
                    {
                    	printf("*");
                    }
                    printf("\n");
                }
                break;
    
        case 24:printf("\n\n");
                
                printf("-Yildizlarla Sekil Olusturma Uygulamasi-\n");
   
                int secim2,a,a1,a2,b,b1,b2,c,c1,a3,b3,yildiz,bosluk,bosluk_iki;
  
				printf("***Yildizlarla Sekil Olusturma Uygulamasina Hosgeldiniz***\n\n");
  				printf("Insan Resmi Gormek Icin 1'e Basiniz\n");
  				printf("Kelebek Resmi Gormek Icin 2'ye Basiniz\n");
  				printf("Saga Dayali Ucgen Resmi Gormek Icin 3'e Basiniz\n");
  				printf("Eskenar Ucgen Resmi Gormek Icin 4'e Basiniz\n");
  				printf("Eskenar Dortgen Resmi Gormek icin 5'e Basiniz\n");
  				printf("Kalp Resmi Gormek Icin 6'ya Basiniz\n");
  
  				printf("\nLutfen Seciminizi Yapiniz: ");
  				scanf("%d",&secim2);
  
  				switch(secim2)
  				{
    				case 1:
    						for(a1=1;a1<2;a1++)
 							{
  								printf("         ******\n");
 							}
 							for(a=2;a<=4;a++)
 							{
  								printf("        ********\n");
 							}
 							for(a2=5;a2<6;a2++)
 							{
  								printf("         ******\n");
 							}
 							for(b1=6;b1<7;b1++)
 							{
  								printf("    *************** \n");
 							}
 							for(b=7;b<15;b++)
 							{
  								printf("***  *************  ***\n");
 							}
 							for(b2=15;b2<16;b2++)
 							{
 								printf("      *************\n");
 							}
 							for(c=16;c<23;c++)
 							{
  								printf("     ***     *****\n");
 							}
 							for(c1=23;c1<25;c1++)
 							{
  								printf("    *****   *******\n");
 							}
  							break;
    
    				case 2:
  							bosluk=28;
  							bosluk_iki=0;
  
 							for(a=1;a<=15;a++)
 							{
  								for(b=1;b<=a;b++)
  								{
  									printf("*");
     							}
     							for(c=1;c<=bosluk;c++)
     							{
      								printf(" ");
  								}
  								for(b=1;b<=a;b++)
  								{
  									printf("*");
     							}
     							printf("\n");
     							bosluk=bosluk-2;
 							}
 
 							for(a=15;1<=a;a--)
 							{
  								for(b=1;b<=a;b++)
  								{
   									printf("*");
  								}
  								for(c=1;c<=bosluk_iki;c++)
  								{
   									printf(" ");
  								}
  								for(b=1;b<=a;b++)
  								{
   									printf("*");
  								}
  								bosluk_iki+=2;
  								printf("\n");
 							}
   							break; 
    
    				case 3:
    						for(a=1;a<=10;a++)
 							{
  								for(b=10;a<=b;b--)
  								{
   									printf(" ");
  								}
  								for(c=1;c<=a;c++)
  								{
   									printf("*");
  								}
  								printf("\n");
 							}
 							break;
 
 				    case 4:
 							for(a=1;a<=15;a++)
 							{
  								for(b=1;b<=15-a;b++)
  								{
  	 								printf(" ");
  								}
  								for(c=1;c<=(2*a)-1;c++)
  								{
   									printf("*");
  								}
  								printf("\n");
 							}
 							break;
 
 					case 5:
 							yildiz = 1;
    						bosluk = 10 - 1;
    
    						for(a=1; a<10*2; a++)
    						{
        						for(b=1; b<=bosluk; b++)
            					printf(" ");
        
        						for(b=1; b<yildiz*2; b++)
            					printf("*");
        						printf("\n");
        
        							if(a<10)
        							{
            							bosluk--;
            							yildiz++;
        							}
        							else
        							{
            							bosluk++;
            							yildiz--;
        							}
    						}
 							break;
 
 					case 6:
 							for(a=15/2;a<=15;a+=2)
    						{
        						for(b=1;b<15-a;b+=2)
        						{
           			 				printf(" ");
        						}

        						for(b=1;b<=a;b++)
        						{
            						printf("*");
        						}

        						for(b=1;b<=15-a;b++)
        						{
            						printf(" ");
        						}

        						for(b=1;b<=a;b++)
        						{
            						printf("*");
        						}
								printf("\n");
    						}

							for(a=15; a>=1; a--)
    						{
        						for(b=a;b<15;b++)
        						{
            						printf(" ");
        						}

        						for(b=1;b<=(a*2)-1;b++)
        						{
            						printf("*");
        						}
								printf("\n");
    						}
    						break;
    						default: printf("\nHatali sayi girdiniz.");    
				}
				break;

        case 25:printf("\n\n");
                
                printf("-Matris Olusturma Programi-\n");

                int satir,sutun,i10,j5,k2,n1;
                
	            printf("Satir Sayisini Giriniz:");
	            scanf("%d",&satir);
	            
	            printf("Sutun Sayisi Giriniz:");
	            scanf("%d",&sutun);
	            
	            int matris [satir][sutun];
	            
	            for(i10=0;i10<satir;i10++)
	            {
	            	for(j5=0;j5<sutun;j5++)
	            	{
	            		printf("\n[%d][%d] --->",i10+1,j5+1);
	            		scanf("%d",&matris[i10][j5]);
					}
				}
                
                printf("\n\nOlusan Matris\n");
                
                for(k2=0;k2<satir;k2++)
                {
                	for(n1=0;n1<sutun;n1++)
                	{
                		printf("%d\t",matris[k2][n1]);
					}
					printf("\n");
				}
                break;
                
	}
		
		
		
		
					
	return 0;
}

