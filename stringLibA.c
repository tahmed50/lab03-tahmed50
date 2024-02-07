#include "stringLib.h"

// DO NOT use string.h
// DO NOT use pointer notation (*a)
// You must use array notation (a[x]) to implement the following 3 functions

int stringLength(char a[]) {
	int length = 0;
	while (a[length] != '\0')
	{
		length++;
	}
	// Return the number of characters before the first null terminator
	return length;
	//I changed it from return 0 to return length because it would be more convenient for me. 
}

void stringCopy(char a[],char b[]) {
	int i = 0; //we start at i = 0 because arrays start at 0 and so on. 
	while (b[i] != '\0') //while b is not the null terminar we can loop whatever is inside the loop 
	{
		a[i] = b[i]; //copies b to a 
		i++; //adds 1 to i (loops and stuff )
	}
	a[i] = '\0'; // this copies the null terminator
	// doing a[i] = a[i] + '\0'; does not work since adding \0 just makes it basically a[i] = a[i].
	//basically this works because it makes the last character = to null term is basically what I understood of this. I am still not compleatly sure. 
	
	
	// Copy all of the characters, up to and including the first null terminator in b, to a
	// You may assume that the caller has given you sufficient writable memory in a to
	//     contain the entire "b" string
}

void stringCat(char a[],char b[]) {
	int aLength = stringLength(a); 
    int i = 0;
    while (b[i] != '\0') 
	{
        a[aLength + i] = b[i]; 
        i++;
    }
    a[aLength + i] = '\0'; 
	// Copy all of the characters, up to and including the first null teminator in b,
	//    starting at the first null terminator in a
	// You may assume that the caller has given you sufficient writable memory in a to
	//    contain both what is already in a, and the contents of the "b" string
}