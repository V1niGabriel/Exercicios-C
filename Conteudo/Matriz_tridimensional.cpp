#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j, k;
	int arr[3][3][3] = {
		{{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},
		{{21, 22, 23}, {24, 25, 26}, {27, 28, 29}}, 
		{{31, 32, 33}, {34, 35, 36}, {37, 38, 39}}, };
	
	printf("Printing 3D array elements\n");
	for(i = 0; i< 3; i++){
		for(j = 0; j< 3; j++){
			for(k = 0; k < 3; k++){
				printf("Posição [%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
	
	return 0;
}
