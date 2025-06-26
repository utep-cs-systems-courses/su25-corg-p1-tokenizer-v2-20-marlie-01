#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main()
{
  puts("*** Welcome to Tokenizer ***");

  while(1) {
    fputs("Enter a sentence, 'h' to check history or 'q' to quit");

    int c;
    while ((c = getchar()) == '\n');
    if (c == EOF)
      goto done;
    if(c == 'h'){

    }
    else if (c == 'q'){
      puts("See you again");
      goto done;
    }

  done:
  return 0;
}
