#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tokenizer.h"

int main(){
  puts("*** Welcome to Tokenizer ***");

  while(1){
    fputs("Enter 's' to enter a sentence or 'q' to quit\n> ", stdout);
    fflush(stdout);
    int c = getchar;
    getchar();

    switch(c){
      case 's':
	fputs("Enter your string: ", stdout);
	fflush(stdout);
	char sentence[100];
	break;

      case 'q':
	puts("Thanks for using Tokenizer");
	break;
    }
    if (c == 'q'){
      break;
    }
  }
  return 0;
}	    
		      
		  
