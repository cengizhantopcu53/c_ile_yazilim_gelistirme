#include <stdio.h>

int main(int argc, char* argv[]) {

	/* Ternary Operatörü ------------------------------------*/
	/*
	* Ternary operatör, üçlü bir operatördür. 
	* x'in değeri 0'dan büyükse, y'ye 10 değerini atar; aksi takdirde, y'ye 0 değerini atar.
	*/
	/* BEGIN 0 */
	int x = 5;
	int y = (x > 0) ? 10 : 0;
	
	printf("%d",y);
	/* END 0 */

	/* OUTPUT 0 */
	/*
	10
	*/
	/* OUTPUT 0 */

	return 0;
}