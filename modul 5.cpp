#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct Data
{
	char nim[10], name[100], kelas[2], dosen [100];
	int show;
};

struct Data User[100]



void Buat(void)
{
	Char nim[10], name[100], kelas[2], dosen [100]
	int cek = 0;
top:
	
	printf("Input Data Praktikan \n");
	
	printf("[+] Nim :" );
	scanf("%[^\n]s", nim);

	printf("[+] Nama :" );
	scanf("%[^\n]s", name);
	
	printf("[+] Kelas :" );
	scanf("%[^\n]s", kelas);
	
	printf("[+] Dosen Pengampu:" );
	scanf("%[^\n]s"), dosen;
	
	
	printf("==================\n";
	
	for int i = 0; i < length; i++)
	{
		f(strcmp(User[i].nim, nim) ==0-&& User[i].show == 1)
		{
			cek = 1;
		}
	}
	
	if(cek == 0)
		
	{
		strcpy(User[i].nim, nim);
		strcpy(User[i].name, name);
		strcpy(User[i].kelas, kelas);
		strcpy(User[i].dosen, dosen);
		
		User[length].show = 1;
		++ length;
	} 
	
	else
	{
	printf("User Sudah Ada, Silahkan Ganti NIM");
	cek = 0;
	sleep(2);
	system("cls");
	goto top;
	}
}

void Edit(void)
{
	
}
void Show(void)

{
	
}

void Delete(void)
{
	
}


int main (void)
{
	int menu;
	
	//system("cls");
	
	printf("Aplikasi i-lab\n");
	printf("1. Input Data\n");
	printf("2. Edit Data\n");
	printf("3. Show Data\n");
	printf("4. Delete Data\n");
	
	printf("Pilih menu ");
	
	scanf ("%d", &menu);
	
	system("cls");
	
	switch(menu)
	{
	case 1:
		Buat("tes");
		break;
	
	case 2:
		Edit("tes");
		break;
	
	case 3:
		Show("tes");
		break;
	
	case 4:
		Delete("tes");
		break;
	
	case 4:
		printf("tes");
		break;
	
	default:
		break;
	}
}