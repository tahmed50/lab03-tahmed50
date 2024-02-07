#include "stringLib.h"

// DO NOT use string.h
// DO NOT use array notation (a[x])
// You must use pointer notation (*a) to implement the following 3 functions

int stringLength(char  *a) {
	 char *ptr = a; 
    while (*ptr != '\0') {
        ptr++; 
    }
    return ptr - a; 
	// Return the number of characters before the first null terminator
	
}

void stringCopy(char *a,char *b) 
{
	 while (*b != '\0') {
        *a = *b; 
        a++;
        b++;
    }
    *a = '\0';
	// Copy all of the characters, up to and including the first null terminator in b, to a
	// You may assume that the caller has given you sufficient writable memory in a to
	// contain the entire "b" string
}

void stringCat(char *a,char *b) {
	while (*a != '\0') {
        a++; 
    }
    while (*b != '\0') {
        *a = *b; 
        a++;
        b++;
    }
    *a = '\0'; 
	// Copy all of the characters, up to and including the first null teminator in b,
	//    starting at the first null terminator in a
	// You may assume that the caller has given you sufficient writable memory in a to
	//    contain both what is already in a, and the contents of the "b" string
}