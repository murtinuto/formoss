// String subtractor
#include <iostream>
using namespace std;
int main(){
// Make initial declarations
	char first_number[81];
	char second_number[81];
	char difference [81];
	int idif, iborrow;
	char * first, * second, * cdif;
// Receive input for the first array
	cout<<" Input the minuend: ";
	first = first_number;
	*first++ = 0;
	while ((*first++ = cin.get()) != '\n')
		;
	*--first = 0;
	first--;
//Receive input for the second array
	cout<<" Input the subtrahend: ";
	second = second_number;
	*second++ = 0;
	while ((*second++ = cin.get()) != '\n' )
		;
	*--second = 0;
	second--;
//Calculate the difference
	cdif = difference + 80;
	*cdif-- = 0;
	iborrow = 0;
	while ( *first || *second){
		if (*first >= *second ) {
			idif = *first-- - *second-- -'0';
			*cdif-- = idif + '0';
		}
		if (*first < *second ) {
			*first-- = *first-- - 1;
			*first = *first + 10;
			idif = *first-- - *second-- - '0';
			*cdif-- = idif + '0';		
		}
	}
cdif++; //adjust cdif to point to the start of the output string
cout<< cdif<< '\n';
return 0;
}
 



















