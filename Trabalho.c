#include <stdio.h>
#include <locale.h>

int primo (int a, int b) {
	int i;
	b = 0;
	
	for(i = 1; i <= a; i++){
		if (a % i == 0){
			b++;
		}
	}
	return b;
}

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	
	int i, j, n, x1, x2, y;
	
	printf("Digite um número inteiro par e maior do que dois:\n");
	scanf("%d", &n);
	
	while(n != 0){
		if (n % 2 != 0 || n == 2){
			printf("\nNúmero inválido! Somente números pares maiores do que dois são aceitos:\n\n");
		}
		else{
			for(i = 1; i <= n; i++){
				if (primo(i, y) == 2) x1 = i;
			
				for(j = 1; j <=n; j++){
					if (primo(j, y) == 2) x2 = j;
					if (x1 + x2 == n) break;
				}
			if (x1 + x2 == n) break;
			}
			printf("\nNúmero \t Decomposição:\n");
			printf("%d \t %d + %d\n\n", n, x1, x2);	
		}
		printf("Digite um número inteiro par e maior do que dois:\n");
		scanf("%d", &n);	
	}
	return 0;
}
