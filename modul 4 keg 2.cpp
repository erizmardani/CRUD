#include <stdio.h>
int main()
{
	int max;
	int max1;
	int min;
	int min1;
	int ordomatriks;
	int matriksA[100][100];
    int matriksB[100][100];
    int i,j;
	
	
	printf("pilih ordo matriks, 2x2 maka 2 atau 3x3 maka 3 : ");
	scanf("%d",&ordomatriks);
	if(ordomatriks == 2){
		printf("Matriks 2x2\n");
	
	    for ( i = 0; i < ordomatriks; i++)
	    {
	       for ( j = 0; j < ordomatriks; j++)
	       {
	          printf("Masukkan angka pada indeks[%d][%d]: ", i, j);
	          scanf("%d", &matriksA[i][j]);
	          max = matriksA[0][0];
	          if(max < matriksA[i][j])
			  {
				  max = matriksA[i][j];
			  }else if(min > matriksA[i][j])
			  {
				  min = matriksA[i][j];
			  }
	       }
	    }
	
	    for(i = 0; i<ordomatriks; i++){
			for(j = 0; j<ordomatriks; j++){
				printf("%5d", matriksA[i][j]);
			}
			printf("\n");
			
		}
		printf("terbesar : %d", max );
		printf("\t terkecil : %d", min);

	}

	else if(ordomatriks == 3){
		printf("Matriks 3x3\n");
		
	    for ( i = 0; i < ordomatriks; i++)
	    {
	       for ( j = 0; j < ordomatriks; j++)
	       {
	          printf("Masukkan angka pada indeks[%d][%d]: ", i, j);
	          scanf("%d", &matriksB[i][j]);
	          max1 = matriksB[0][0];
	          if(matriksB[i][j]>max1)
			  {
			  	max1 = matriksB[i][j];
			  }else if(matriksB[i][j]<min1)
			  {
			  	min1 = matriksB[i][j];
			  }
	       }
	    }
	
	    for(i = 0; i<ordomatriks; i++){
			for(j = 0; j<ordomatriks; j++){
				printf("%5d", matriksB[i][j]);
			}
			printf("\n");
		}
		printf("terbesar : %d", max1 );
		printf("\t terkecil : %d", min1);
	}
	
    return 0;


}