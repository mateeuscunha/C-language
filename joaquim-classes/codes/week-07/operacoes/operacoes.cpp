#include <iostream>

using namespace std;
const int TAM = 5;


int uniao(int conjuntoA[], int conjuntoB[], int conjuntoUniao[2*TAM]) {
	int tamanhoU = TAM;
	
	for (int i = 0; i < TAM; i++) {
		conjuntoUniao[i] = conjuntoA[i];
	}
	
	for (int i = 0; i < TAM; i++) {
		bool EstaEmA = false;
		
		for (int j = 0; j < TAM; j++) {
			if (conjuntoB[i] == conjuntoA[j]) {
				EstaEmA = true;
			}
		}
		
		if (not EstaEmA) {
			conjuntoUniao[tamanhoU] = conjuntoB[i];
			tamanhoU++;
		}
		
	}
	
	return tamanhoU;
}

int intersecao(int conjuntoA[], int conjuntoB[], int conjuntoIntersecao[TAM]) {
	
	
	return 0;
}

int diferenca(int conjuntoA[], int conjuntoB[], int conjuntoDiferenca[TAM]) {
	
	
	return 0;
}







int main() {
	int conjuntoA[TAM];
	int conjuntoB[TAM];
	
	/*
	A = [1, 2, 3, 4, 5]
	B = [2, 4, 6, 8, 10]
	União = [1, 2, 3, 4 , 5, 6, 8, 10]
	Interseção = [2, 4]
	Diferença = [1, 3, 5] 
	*/
	
	int conjuntoUniao[2*TAM];
	int conjuntoIntercecao[TAM];
	int conjuntoDiferenca[TAM];

	int tamUniao, tamIntersecao, tamDiferenca;
	
	for (int i = 0; i < TAM; i++)
		cin >> conjuntoA[i];
	for (int i = 0; i < TAM; i++)
		cin >> conjuntoB[i];
		
	tamUniao = uniao(conjuntoA, conjuntoB, conjuntoUniao);
	cout << "União: ";
	for (int i = 0; i < tamUniao; i++)
		cout << conjuntoUniao[i] << " ";
	cout << endl;
	
		tamIntersecao = intersecao(conjuntoA, conjuntoB, conjuntoIntercecao);
	cout << "Intersecao: ";
	for (int i = 0; i < tamIntersecao; i++)
		cout << conjuntoIntercecao[i] << " ";
	cout << endl;
	
	tamDiferenca = diferenca(conjuntoA, conjuntoB, conjuntoDiferenca);
	cout << "Diferença: ";
	for (int i = 0; i < tamDiferenca; i++)
		cout << conjuntoDiferenca[i] << " ";
	cout << endl;
	
	return 0;
}
