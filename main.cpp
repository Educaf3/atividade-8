//(A) R:(c)
//(B) R: Y = 4;
/*
 C)
(V)
(F)
(V)
*/
// D) R: o ponteiro (*p) está recebendo o endereço de  memoria 10 e não o endereço de x. Para que (*p) receba o endereço de x o codigo deveria estar assim:
/*
int main() {
 int x, *p;
 x = 10;
 *p = &x;
 return 0;
} 
*/
// E) R: É dificil saber qual será a saida pois está subtraindo dois endereços de memoria então não é possivel afirmar com certeza qual será a saida

/* F) R: 
Pc1: 1000
Pc2: 1001
Pc3: 1005
Pc4: 1000

#include <iostream>
using namespace std;

int main() {
 int i, *pa;
 int a[] = {7, 9, 1, 10, 15};
 pa = a;
 for (i = 0; i < 5; i++) {
 printf("\npa = %d", *(a+i));
 }
 return 0;
} 