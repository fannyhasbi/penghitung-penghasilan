#include <stdio.h>

void hitungpajak(int a, char b){
	float penghasilan,pajak;
	int x;
	/*x untuk mengecek jika input tidak ada yang salah
	 *nilai 1 menunjukkan benar, nilai 0 menunjukkan salah*/
	
	
	if(b == 'A'){
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
	}
	else if(b == 'B'){
		if(a >= 100000000 && a <= 200000000){
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
	}
	
	if(x == 1){ //jika input benar maka kode dibawah dieksekusi
		printf("Penghasilan per tahun : %.2f\n", penghasilan);
		printf("Pajak yang dikenakan : %.2f\n", pajak);
		printf("Penghasilan netto : %d\n", a);
	}
}

int main(){
	int netto;
	char x;
	
	printf("Program Penghitung Penghasilan\n");
	printf("Penghasilan per tahun: ");
	scanf("%d", &netto);
	printf("Jenis pajak\n");
	printf("A. Pajak perorangan\n");
	printf("B. Pajak Badan Usaha\n");
	printf("Pilih tipe pajak: ");
	scanf(" %c", &x);
	
	printf("\n\nHasil\n");
	hitungpajak(netto,x);
	
	getch();
	return 0;
}
