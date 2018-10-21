// String Adder
#include <iostream>
using namespace std;
int main() {
	char first_summand [128];
	char second_summand[128];
	char sum[129];
	int isum, icarry;
	char * first, * second, * csum;
// Input the first summand
	cout <<"Input the first summand: ";
	first = first_summand;
	*first++ = 0;
	while ( (*first++ = cin.get()) != '\n' )
		;
	*--first = 0;
	first--;
// Input the second summand
	cout <<"Input the second summand: ";
	second = second_summand;
	*second++ = 0;
	while ( (*second++ = cin.get()) != '\n' )
		;
	*--second = 0;
	second--;
// Calculate the sum
	csum = sum + 128;
	*csum-- = 0;
	icarry = 0;
	while ( *first || *second ) {
		if (*first && *second){
			isum = *first-- + *second-- - 2 * '0' +icarry;
			icarry = isum / 10;
			isum = isum % 10;
 			*csum-- = isum + '0';
		}
		if ( *first && (! *second) ){
			isum = *first-- - '0' + icarry;
			icarry = isum / 10;
			isum = isum % 10;
			*csum-- = isum + '0';
		}
		if ( (! *first) && *second ){
			isum = *second -- - '0' + icarry;
			icarry = isum / 10;
			isum = isum % 10;
			*csum-- = isum + '0';
		}
	}
	if ( icarry){
		*csum-- = icarry + '0';
	}
	csum++; //adjust csum to point to the start of the output string
	cout<< csum << '\n';
	return 0;
}
