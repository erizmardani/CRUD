#include<stdio.h>

int main(int argc, char** argv)
{
	char jawab;
	
	do{
	
		int i, harga, kodemenu, jumlah, total1=0, total2=0, total3=0, total4=0, total5=0, grandtotal, bayar, kembali, jmlmenu;
  	
  	    printf("Selamat Datang di Warung BU TATIK\n");
  	  
		printf("Daftar Menu			Harga\n");
		printf("1.Rawon				Rp15.000\n");
		printf("2.Nasi Pecel			Rp8.000\n");
		printf("3.Es Teh			Rp2.500\n");
		printf("4.Es Jeruk			Rp4.000\n");
		printf("5.Air Putih			Rp2.000\n");
	
	
	
		printf("Pilih Jumlah Menu : ");
		scanf("%d", &jmlmenu);
		
		for(i=1; i<=jmlmenu; i++)
		{
			printf("Silahkan pilih menu ke-%i : ", i);
			scanf("%d", &kodemenu);
			if(kodemenu==1){
				printf("Anda memilih Rawon\n");
				printf("Masukkan jumlah pesanan : ");
				scanf("%d", &jumlah);
				printf("Qty : %d Rawon\n", jumlah);
				harga=15000;
				total1=harga*jumlah;
				printf("Total Harga : Rp %d\n\n", total1);
				
			}
			else if(kodemenu==2)
			{
				printf("Anda Memilih Nasi Pecel\n");
				printf("Masukkan jumlah pesanan : ");
				scanf("%d", &jumlah);
				printf("Qty : %d Nasi Pecel\n", jumlah);
				harga=8000;
				total2=harga*jumlah;
				printf("Total Harga : Rp %d\n\n", total2);
			}
			else if(kodemenu==3)
			{
				printf("Anda Memilih Es Teh\n");
				printf("Masukkan jumlah pesanan : ");
				scanf("%d", &jumlah);
				printf("Qty : %d Es teh\n", jumlah);
				harga=2500;
				total3=harga*jumlah;
				printf("Total Harga : Rp %d\n\n", total3);
				
			} 
			else if(kodemenu==4)
			{
				printf("Anda Memilih Es Jeruk\n");
				printf("Masukkan jumlah pesanan : ");
				scanf("%d", &jumlah);
				printf("Qty : %d Es Jeruk\n", jumlah);
				harga=4000;
				total4=harga*jumlah;
				printf("Total Harga : Rp %d\n\n", total4);
			} 
			else if(kodemenu==5)
			{
				printf("Anda Memilih Air Putih\n");
				printf("Masukkan jumlah pesanan : ");
				scanf("%d", &jumlah);
				printf("Qty : %d Air Putih\n", jumlah);
				harga=2000;
				total5=harga*jumlah;
				printf("Total Harga : Rp %d\n\n", total5);
			}
		
		}
			
       grandtotal = total1+total2+total3+total4+total5;
	   printf("Grand total : Rp %d\n", grandtotal);
       printf("Tunai : Rp ");
       scanf("%d", &bayar);
       kembali=bayar-grandtotal;
       if(bayar>=grandtotal)
	   {
		   printf("Kembali : Rp %d", kembali);
	   }
	   else
	   {
		   printf("Maaf uang anda kurang");
	   }
	   printf("\nApakah anda ingin melanjutkan program?[Y/N] : ");
	   scanf("%s", &jawab);
	   
	}while(jawab=='y' || jawab=='Y');
	{
		printf("Keluar...");
	}   
	return 0;
}	   