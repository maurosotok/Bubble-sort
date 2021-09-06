#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int numeros[] = {4,1,2,3,5};
	int k;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5-1; j++){
			if(numeros[j]<numeros[j+1]){
				k= numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1] = k;
			}
		}
	}
	cout<<"Orden Ascendente"<<endl;
	for(int i =0; i<5; i++){
		cout<<numeros[i]<<endl;
	}
	
	return 0;
}
