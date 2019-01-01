#include <stdio.h>
#include <stdlib.h>

	int data();
	int data_baru();
	int data_lama();
	int informasi();
	int help();
	char menu;
	char menuu;
	char kembali;
	int baca_file();
	
struct pasien {
	char nama[40];
	int umur;
	char penyakit[30];
	char kamar[20];
	char cekin[30];
	char cekout[30];
	char kelas[20];
	char inap[20];
};

void clearbuffer() {
	char gf;
	while ((gf = getchar()) != '\n' && gf != EOF);
}

int baca_file()
{
	FILE *DATABASE;	
	int ch;
	
	DATABASE=fopen("DATABASE.doc","r");
	if(DATABASE==NULL) {
		puts("Can't open that file!");
		exit(1);
	}
	while((ch=fgetc(DATABASE))!=EOF)
	putchar(ch);
	fclose(DATABASE);
	system("pause");
	
}

int main()		//Tampilan utama dari program//
{
    printf("================================================================================================\n");
	printf("||                          PROGRAM DATABASE PASIEN RAWAT INAP                                ||\n");
	printf("||                            Oleh: FAQIH AR - 1706042996                                     ||\n");
	printf("||                                  GIANLUCA - 1706042844                                     ||\n");
	printf("================================================================================================");
	
	printf("\n                        Program ini bertujuan untuk memudahkan Anda dalam memasukan\n");
	printf("                                               data pasien                           \n");                                            
	printf("------------------------------------------------------------------------------------------------\n");
                                          
	printf("------------------------------------------------------------------------------------------------\n"); 
   
    menu:
    printf("\t\t===================================================================\n");
	printf("\t\t||                      Program database                         ||\n");
	printf("\t\t||                   Oleh Gianluca dan Faqih                     ||\n");
	
	printf("\t\t===================================================================\n");
	printf("\t\t|| Masukkan nomor dari menu yang ingin ditampilkan               ||\n");
	printf("\t\t|| 1.Memasukan Data                                              ||\n");
	printf("\t\t|| 2.Informasi                                                   ||\n");
	printf("\t\t|| 3.Help                                                        ||\n");
	printf("\t\t|| 4.Exit                                                        ||\n");
	printf("\t\t===================================================================\n");
	printf("\t\t||   Dimohon untuk tidak memasukkan input selain angka bulat :)  ||\n");
	printf("\t\t===================================================================\n");
   printf("\t\t\t\tAnda memilih menu : ");
   scanf("%s", &menu);
   system("cls");
	
	if(menu<'5')		// Pilihan menu//
	{
		switch (menu)
		{
			case '0':
				printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		        system("pause");
	         	system("cls");
	        	goto menu;
				
			case '1':
				data();
				break;
			case '2':
				informasi();
				break;
			case '3':
				help();
				break;
			case '4':
		       	return 0;
		        break;
		}
	}
	else		//pesan kesalahan//
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto menu;
		
	}
system("cls");		//menghapus apa yang ada di layar//
}

int informasi()		//menu informasi//
{
				printf("\t\t\t===================================================================\n");
			    printf("\t\t\t|| DATABASE PASIEN v.2.0                                         ||\n");
			    printf("\t\t\t===================================================================\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| Oleh Gianluca dan Faqih Ahmad                                 ||\n");
			    printf("\t\t\t|| Untuk memasukan data pasien rawat inap                        ||\n");
			    printf("\t\t\t|| ALL RIGHTS RESERVED & COPYRIGHT 2018                          ||\n");
			    printf("\t\t\t||                                                               ||\n");
		    	printf("\t\t\t===================================================================\n");
		    	printf("\t\t\t|| 99.Kembali                                                    ||\n");
		    	printf("\t\t\t===================================================================\n\n");
		    	printf("\t\t\t\t\t\tPilihan menu : ");
		    	scanf("%d", &kembali);
		    	
		    	if(kembali == 99)
		    	{
		    		
					system("cls");
					return main();
				}
				else
				{
					printf("===================================================================\n");
					printf("||  Pilihan menu yang dimasukkan salah, silahkan masukkan lagi!  ||\n");
					printf("===================================================================\n");
				}

}

int help()		//menu untuk cara penggunaan//
{
				printf("\t\t\t===================================================================\n");
			    printf("\t\t\t|| CARA PENGGUNAAN PROGRAM                                       ||\n");
			    printf("\t\t\t===================================================================\n");
			    printf("\t\t\t|| Pertama masukan berapa data pasien yang ingin dimasukan.      ||\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| Kedua masukan nama, umur, penyakit, kamar, cek in,            ||\n");
			    printf("\t\t\t|| cek out, kelas dan lama menginap                              ||\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| contohnya seperti ini                                         ||\n");
			    printf("\t\t\t|| Nama            : Cyhntia                                     ||\n");
			    printf("\t\t\t|| Umur            : 18                                          ||\n");
			    printf("\t\t\t|| Penyakit        : Ketombe                                     ||\n");
			    printf("\t\t\t|| Kode Kamar      : E10                                         ||\n");
			    printf("\t\t\t|| Tanggal Cek in  : 27-10-2017                                  ||\n");
			    printf("\t\t\t|| Tanggal Cek out : 29-10-2018                                  ||\n");
			    printf("\t\t\t|| Kelas           : 1                                           ||\n");
			    printf("\t\t\t|| Lama Menginap   : 2 hari                                      ||\n");
			    
			    printf("\t\t\t|| untuk penulisan kode kamar dari A1-A20, B1-B20,               ||\n");
			    printf("\t\t\t|| C1-C20, D1-D20, dan E1-E20.                                   ||\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| untuk penulisan tanggal: tanggal-bulan-tahun.                 ||\n");
			    printf("\t\t\t|| untuk penulisan kelas, rumah sakit ini menyediakan            ||\n");
			    printf("\t\t\t|| kelas 3 untuk yang paling murah, kelas 2, kelas 1, dan VIP.   ||\n");
                printf("\t\t\t|| Data akan disimpan di Notepad                                 ||\n");                  
                                           
		    	printf("\t\t\t===================================================================\n");
		    	printf("\t\t\t|| 99.Kembali                                                    ||\n");
		    	printf("\t\t\t===================================================================\n\n");
		    	printf("\t\t\t\t\t\tPilihan menu : ");
				scanf("%d", &kembali);
		    	
		    	if(kembali == 99)
		    	{
		    		
					system("cls");
					return main();
				}
				else
				{
					printf("===================================================================\n");
					printf("||  Pilihan menu yang dimasukkan salah, silahkan masukkan lagi!  ||\n");
					printf("===================================================================\n");
				}

}


int data ()  
{
    menuu:
    printf("\t\t===================================================================\n");
	printf("\t\t||                      Program database                         ||\n");
	printf("\t\t||                   Oleh Gianluca dan Faqih                     ||\n");
	
	printf("\t\t===================================================================\n");
	printf("\t\t|| Masukkan nomor dari menu yang ingin ditampilkan               ||\n");
	printf("\t\t|| 1.Input Data Baru                                             ||\n");
	printf("\t\t|| 2.Input Data Lama                                             ||\n");
	printf("\t\t|| 3.Baca File                                                   ||\n");
	printf("\t\t|| 4.Back                                                        ||\n");
	printf("\t\t===================================================================\n");
	printf("\t\t||   Dimohon untuk tidak memasukkan input selain angka bulat :)  ||\n");
	printf("\t\t===================================================================\n");
   printf("\t\t\t\tAnda memilih menu : ");
   scanf("%s", &menuu);
   system("cls");
	
	if(menuu<'5')		// Pilihan menu//
	{
		switch (menuu)
		{
			case '0':
				printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		        system("pause");
	         	system("cls");
	        	goto menuu;
				
			case '1':
				data_baru();
				break;
				
			case '2':
				data_lama();
				break;
			
			case '3':
			    baca_file();
			    break;

			case '4':
				return main();
				break;
		}
	}
	
	else		//pesan kesalahan//
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto menuu;
		
	}
system("cls");		//menghapus apa yang ada di layar//
}

int data_baru()
{
	FILE *Database;
	struct pasien daftar[1000];
	struct pasien *ptr; //pointer//
	int i;
	int ndata;
	
	Database=fopen("Database.pdf", "a");
	if(Database==NULL)
		{
			printf("tidak bisa membuka file\n");
		}		
		else
		{
			fprintf(Database, "========================================================================\n");
			fprintf(Database, "|                              DATABASE PASIEN                         |\n");
			fprintf(Database, "|                             Rumah Sakit Malau                        |\n");
			fprintf(Database, "========================================================================\n");
				
			fclose(Database);
		}	
		
	
	printf("Banyak Data\t: ");
	scanf("%d", &ndata);
	
	ptr = (struct pasien*) malloc(ndata * sizeof(struct pasien));
   // Above statement allocates the memory for n structures with pointer personPtr pointing to base address */
	
	printf("Entri Data\n");
	
    for(i=1; i<=ndata; i++){
		printf("\nPasien ke-%d\n", i);
		
		printf("Nama \t\t: "); scanf("%s", &ptr->nama);
		clearbuffer();
		
		printf("Umur \t\t: "); scanf("%d", &ptr->umur);
		clearbuffer();
		
		printf("Penyakit \t: "); scanf("%[^\n]", &ptr->penyakit);
		clearbuffer();
		
		printf("Kode Kamar  \t: "); scanf("%[^\n]", &ptr->kamar);
		clearbuffer();
		
		printf("Tanggal Cek in  : "); scanf("%[^\n]", &ptr->cekin);
		clearbuffer();
		
		printf("Tanggal Cek out : "); scanf("%[^\n]", &ptr->cekout);
		clearbuffer();
		
		printf("Kelas \t\t: "); scanf("%[^\n]", &ptr->kelas);
		clearbuffer();
		
		printf("Lama Menginap \t: "); scanf("%[^\n]", &ptr->inap);
		clearbuffer();
		
		Database = fopen("Database.pdf", "a");
				
	
	    if(Database==NULL)
		{
			printf("tidak bisa membuka file\n");
		}
		else
		{
		
			fprintf(Database, "Nama           : %s\n", ptr->nama);
			fprintf(Database, "Umur           : %d\n", ptr->umur);
			fprintf(Database, "Penyakit       : %s\n", ptr->penyakit);
			fprintf(Database, "Kode Kamar     : %s\n", ptr->kamar);
			fprintf(Database, "Tanggal Cek in : %s\n", ptr->cekin);
			fprintf(Database, "Tanggal Cek out: %s\n", ptr->cekout);
			fprintf(Database, "Kelas          : %s\n", ptr->kelas);
			fprintf(Database, "Lama Menginap  : %s\n", ptr->inap);
	        fprintf(Database, "---------------------------------------\n");

			
			fclose(Database);
		}
	

}	
    
    printf("\n\nData Berhasil Disimpan\n");
    	printf("\t\t\t===================================================================\n");
		printf("\t\t\t|| 0.Exit                                                        ||\n");
		printf("\t\t\t|| 99.Kembali                                                    ||\n");
		printf("\t\t\t===================================================================\n\n");
		printf("\t\t\t\t\t\tPilihan menu : ");
		scanf("%d", &kembali);
		    	
		    	if(kembali == 99)
		    	{
		    		
					system("cls");
					return main();
				}
				else if(kembali == 0)
				{
					
					system("cls");
					return 0;
				}
				else
				{
					printf("===================================================================\n");
					printf("||  Pilihan menu yang dimasukkan salah, silahkan masukkan lagi!  ||\n");
					printf("===================================================================\n");
				}
}

int data_lama()
{
	FILE *Database;
	struct pasien daftar[1000];
	struct pasien *ptr; //pointer//
	int i;
	int ndata;
	
	Database=fopen("Database.doc", "a");
	if(Database==NULL)
		{
			printf("tidak bisa membuka file\n");
		}
		else
		{
			fprintf(Database, "\n");	
			fclose(Database);
		}	
		
	
	printf("Banyak Data\t: ");
	scanf("%d", &ndata);
	
	ptr = (struct pasien*) malloc(ndata * sizeof(struct pasien));
   // Above statement allocates the memory for n structures with pointer personPtr pointing to base address */
	
	printf("Entri Data\n");
	
    for(i=1; i<=ndata; i++){
		printf("\nPasien ke-%d\n", i);
		
		printf("Nama \t\t: "); scanf("%s", &ptr->nama);
		clearbuffer();
		
		printf("Umur \t\t: "); scanf("%d", &ptr->umur);
		clearbuffer();
		
		printf("Penyakit \t: "); scanf("%[^\n]", &ptr->penyakit);
		clearbuffer();
		
		printf("Kode Kamar  \t: "); scanf("%[^\n]", &ptr->kamar);
		clearbuffer();
		
		printf("Tanggal Cek in  : "); scanf("%[^\n]", &ptr->cekin);
		clearbuffer();
		
		printf("Tanggal Cek out : "); scanf("%[^\n]", &ptr->cekout);
		clearbuffer();
		
		printf("Kelas \t\t: "); scanf("%[^\n]", &ptr->kelas);
		clearbuffer();
		
		printf("Lama Menginap \t: "); scanf("%[^\n]", &ptr->inap);
		clearbuffer();
		
		Database = fopen("Database.doc", "a");
				
	
	    if(Database==NULL)
		{
			printf("tidak bisa membuka file\n");
		}
		else
		{
		
			fprintf(Database, "Nama           : %s\n", ptr->nama);
			fprintf(Database, "Umur           : %d\n", ptr->umur);
			fprintf(Database, "Penyakit       : %s\n", ptr->penyakit);
			fprintf(Database, "Kode Kamar     : %s\n", ptr->kamar);
			fprintf(Database, "Tanggal Cek in : %s\n", ptr->cekin);
			fprintf(Database, "Tanggal Cek out: %s\n", ptr->cekout);
			fprintf(Database, "Kelas          : %s\n", ptr->kelas);
			fprintf(Database, "Lama Menginap  : %s\n", ptr->inap);
	        fprintf(Database, "---------------------------------------\n");

			
			fclose(Database);
		}
	

}	
    
    printf("\n\nData Berhasil Disimpan\n");
    	printf("\t\t\t===================================================================\n");
		printf("\t\t\t|| 0.Exit                                                        ||\n");
		printf("\t\t\t|| 99.Kembali                                                    ||\n");
		printf("\t\t\t===================================================================\n\n");
		printf("\t\t\t\t\t\tPilihan menu : ");
		scanf("%d", &kembali);
		    	
		    	if(kembali == 99)
		    	{
		    		
					system("cls");
					return main();
				}
				else if(kembali == 0)
				{
					
					system("cls");
					return 0;
				}
				else
				{
					printf("===================================================================\n");
					printf("||  Pilihan menu yang dimasukkan salah, silahkan masukkan lagi!  ||\n");
					printf("===================================================================\n");
				}




	return 0;
	//referensi: Buku pemograman c dan twtw ke teman// 
}
