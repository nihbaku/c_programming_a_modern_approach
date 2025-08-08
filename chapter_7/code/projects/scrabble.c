/* Program which computes the values of a word using the scrabble point system */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char word;
  unsigned short int sum = 0; // Just wanted to use the type, is justified since the longest word will not reach the highest short int count.

  printf("Enter a word:");
  while ((word = getchar()) != '\n') {
    word = toupper(word);
    switch (word) { // Alot of fallthroughs beware!
      case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': 
        sum += 1; break;
      case 'D': case 'G': 
        sum += 2; break;
      case 'B': case 'C': case 'M': case 'P': 
        sum += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y': 
        sum += 4; break;
      case 'K': 
        sum += 5; break;
      case 'J': case 'X': 
        sum += 8; break;
      case 'Q': case 'Z': 
        sum += 10; break;
      default:
        printf("Something went wrong\n"); return 1;
    }
  }
  printf("Scrabble value: %d\n", sum);
  return 0;
}
