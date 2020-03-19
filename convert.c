#include <stdio.h>

char alphabet[62] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Use: %s <pi_file> <output>\n", argv[0]);
    return 1;
  }

  char digits[1000];
  size_t alphabet_length = sizeof(alphabet) / sizeof(char);

  FILE *output = fopen(argv[2], "w");

  FILE *pi_file = fopen(argv[1], "r");
  fread(&digits, sizeof(char), 2, pi_file);

  while (!feof(pi_file)) {
    fread(&digits, sizeof(char), 1000, pi_file);

    for (int i = 0; i < 1000; i += 2) {
      char digits_index[2];
      digits_index[0] = digits[i];
      digits_index[1] = digits[i + 1];
    
      int index = atoi(digits_index);
      if (index >= alphabet_length) {
        index = index - alphabet_length;
      }

      char alpha_char = alphabet[index];
    
      fprintf(output, "%c", alpha_char);
    }
  }

  fclose(pi_file);
  fclose(output);
}
