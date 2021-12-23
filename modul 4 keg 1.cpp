#include <stdio.h>
int main(int argc, char** argv)
{
	int boruto[3] = {85, 90, 86};
	int sarada[3] = {84, 90, 89};
	int i;
	printf("Nilai Boruto : ");
	printf("\nUjian progdas ke-1 : %d", boruto[0]);
	printf("\nUjian progdas ke-2 : %d", boruto[1]);
	printf("\nUjian progdas ke-3 : %d\n", boruto[2]);
	
	printf("\nNilai Sarada : ");
	printf("\nUjian progdas ke-1 : %d", sarada[0]);
	printf("\nUjian progdas ke-2 : %d", sarada[1]);
	printf("\nUjian progdas ke-3 : %d\n\n", sarada[2]);
	
	printf("Perbandingan Nilai Boruto dan Sarada :\n");
	for(i = 0; i<3; i++)
	{
		if(boruto[i]>sarada[i]){
			printf("hasilnya : 1\n");
		}
		else 
		{
			printf("hasilnya : 0\n");
		}
	}

	return 0;
}
