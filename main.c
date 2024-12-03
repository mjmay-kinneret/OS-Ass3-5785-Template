/*
  Operating Systems
  Semester 1 5785
  Kinneret College on the Sea of Galilee
  Michael J. May
  
  Assignment 3:
  Find lines with uniform word length.

*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

#include "uniform_length_lines.h"

/*
 * main - Handle command line flags and arguments.
 *  Input: If there are mulitple files provided, each file is handled by a different child.
 *  if no files are provided, reads from STDIN.
 *  Waits for all children to finish and then outputs the total number of children created and the total number
 *  of uniform length lines in the files.
 *  
 *  Output: Prints a completion message when all children are done. 
 *  Example:
 *  4 children finished.  Total 130 lines found  
 */
int main (int argc, char *argv[]) {

	// TODO: Read the file or STDIN
	// TODO: Process each file or STDIN in a separate process (use fork!)
	// TODO: Output the final message with total children and how many total lines there were. (use wait!)

  return 0;
}
