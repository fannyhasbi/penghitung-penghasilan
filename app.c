#include <stdio.h>

void hitungpajak(int a, char b){
	float penghasilan,pajak;
	int x;
	/*x untuk mengecek jika input tidak ada yang salah
	 *nilai 1 menunjukkan benar, nilai 0 menunjukkan salah*/
	switch(b){
		case 'a':
		case 'A':
			if(a >= 200000000){
				pajak = a*0.35;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 100000000){
				pajak = a*0.25;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 50000000){
				pajak = a*0.15;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 25000000){
				pajak = a*0.1;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 0){
				pajak = a*0.05;
				penghasilan = a - pajak;
				x = 1;
			}
			else {
				printf("Salah input");
				x = 0;
			}
		break; //akhir case 'a' atau 'A'
		
		case 'b':
		case 'B':
			if(a >= 200000000){
				pajak = a*0.35;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 100000000){
				pajak = a*0.3;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 50000000){
				pajak = a*0.15;
				penghasilan = a - pajak;
				x = 1;
			}
			else if(a >= 0){
				pajak = a*0.1;
				penghasilan = a - pajak;
				x = 1;
			}
			else {
				printf("Salah input");
				x = 0;
			}
		break; //akhir case 'b' atau 'B'
	}
	
	if(x == 1){ //jika input benar maka kode dibawah dieksekusi
		printf("Penghasilan per tahun : Rp %.2f\n", penghasilan);
		printf("Pajak yang dikenakan  : Rp %.2f\n", pajak);
		printf("Penghasilan netto     : Rp %d\n", a);
	}
}

int main(){
	int netto;
	char x;
	
	printf("Program Penghitung Penghasilan\n");
  printf("Jenis pajak\n");
  printf("A. Pajak perorangan\n");
  printf("B. Pajak Badan Usaha\n");
  printf("Pilih tipe pajak: ");
  scanf(" %c", &x);
	printf("Penghasilan per tahun: Rp ");
	scanf("%d", &netto);
	
	printf("\n\nHasil\n");
	hitungpajak(netto,x);
	
	// getch();
	return 0;
}
