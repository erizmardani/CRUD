#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>

struct Data
{
    char nim[10], nama[100], kelas[100], dosen[100];
    int show;
};

struct Data User[100];
int length = 0;

void create(void)
{
    char nim[10], nama[100], kelas[100], dosen[100];
    int cek = 0;
    int i;

top:
    printf("Create Data\n");
    printf("Input NIM : ");
    scanf(" %[^\n]s", nim);
    printf("Input Nama : ");
    scanf(" %[^\n]s", nama);
    printf("Input Kelas : ");
    scanf(" %[^\n]s", kelas);
    printf("Input Nama dosen : ");
    scanf(" %[^\n]s", dosen);

    for (i = 0; i < length; i++)
    {
        if (strcmp(User[i].nim, nim) == 0 && User[i].show == 1)
        {
            cek = 1;
        }
    }
    if (cek == 0)
    {
        strcpy(User[length].nim, nim);
        strcpy(User[length].nama, nama);
        strcpy(User[length].kelas, kelas);
        strcpy(User[length].dosen, dosen);

        User[length].show = 1;
        ++length;

        printf("berhasil menambahkan!");
        Sleep(600);
    }
    else
    {
        printf("User sudah ada, silahkan ganti nim\n");
        cek = 0;
        Sleep(600);
        system("cls");
        goto top;
    }
}
void edit(void)
{
    char nim[10];
    int cek = -1;
    int i;

    printf("Edit Data\n");

    printf("Masukkan nim yang ingin diubah : ");
    scanf("%s", nim);

    for (i = 0; i < length; i++)
    {
        if (strcmp(User[i].nim, nim) == 0 && User[i].show == 1)
        {
            cek = i;
        }
    }
    if (cek != -1)
    {
        printf("Input Nama : ");
        scanf(" %[^\n]s", User[cek].nama);

        printf("Input Kelas : ");
        scanf(" %[^\n]s", User[cek].kelas);

        printf("Input Nama dosen : ");
        scanf(" %[^\n]s", User[cek].dosen);

        printf("Berhasil memperbarui data!");
        Sleep(600);
    }
    else
    {
        printf("Data tidak ditemukan!");
        Sleep(1000);
    }
}
void show(void)
{
    int number = 1;
    int i;
    int cek = 0;
    printf("List Data\n");
    for (i = 0; i < length; i++)
    {
        if (User[i].show == 1)
        {
            printf("User %d \n", number);
            printf("NIM   : %s \n", User[i].nim);
            printf("Nama  : %s \n", User[i].nama);
            printf("Kelas : %s \n", User[i].kelas);
            printf("Dosen : %s \n", User[i].dosen);
            ++number;
            cek = 1;
        }
    }
    if (length == 0 || cek == 0)
    {
        printf("Belum ada data, silahkan mengisi data");
        Sleep(1000);
    }
    else
    {
        Sleep(1500);
    }
}
void hapus(void)
{
    char nim[10];
    int cek = -1;
    int i;

    printf("Delete data\n");
    printf("Masukkan nim yang ingin dihapus : ");
    scanf("%s", nim);

    for (i = 0; i < length; i++)
    {
        if (strcmp(User[i].nim, nim) == 0 && User[i].show == 1)
        {
            cek = i;
        }
    }
    if (cek != -1)
    {
        User[cek].show = 0;
        printf("Berhasil menghapus data\n");
    }
    else
    {
        printf("\nData tidak ditemukan");
    }
    Sleep(600);
}

int main(void)
{
    int menu;
top:
    system("cls");

    printf("MENU\n");
    printf("1. Create Data\n");
    printf("2. Show Data\n");
    printf("3. Edit Data\n");
    printf("4. Delete Data\n");
    printf("5. Exit\n");

    printf("Pilih Menu : ");
    scanf("%d", &menu);

    system("cls");

    switch (menu)
    {
    case 1:
        create();
        break;
    case 2:
        show();
        break;
    case 3:
        edit();
        break;
    case 4:
        hapus();
        break;
    case 5:
        printf("Keluar...");
        return 0;
        break;
    default:
        printf("Menu tidak ada!");
        Sleep(700);
        break;
    }
    goto top;
}
