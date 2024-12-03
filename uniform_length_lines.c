/*
  Operating Systems
  Semester 1 5785
  Kinneret College on the Sea of Galilee
  Michael J. May
  
  Assignment 3:
  Find lines with uniform word length.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

/* The maximum length of each word in a file */
#define MAX_LINE_LEN 2000

/*
 * TODO: Fill in the documentation header.
 */
int word_length(char* word) {

	// TODO: Given a word, return how long it is.
	return -1;
}

/*
 * TODO: Fill in the documentation header.
 */
int line_uniform_length (char* line) {
	
	// TODO: Use strtok to break the line given into words
	// TODO: Check if the words are all the same length
	// TODO: If the words are all the same length, return the word length.
	return -1;	
}

/*
 * TODO: Fill in the documentation header.
 */
int print_uniform_length_words(FILE* inFile, char* fileName) {
	
	// TODO: Read the file in line by line
	// TODO: For each line, check if it has uniform length using line_uniform_length
	// TODO: Output each line that is of uniform length with the format: fileName: lineNumber: wordLength: text of the line
	// TODO: Return how many lines were found
	
	return -1;
}