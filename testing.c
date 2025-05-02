#include <stdio.h>
#include "stringtoolkit.h"
#include"implement.c"

int main() {
    char str1[] = "Hello World!";
    char str2[] = "Programming";
    char str3[100] = "this is a test";

    printf("Original: %s\n", str1);
    to_uppercase(str1);
    printf("Uppercase: %s\n", str1);
    to_lowercase(str1);
    printf("Lowercase: %s\n", str1);

    printf("Vowel count in '%s': %d\n", str2, count_vowels(str2));

    reverse_string(str2);
    printf("Reversed string: %s\n", str2);

    char words[5][100] = {"banana", "apple", "orange", "grape", "kiwi"};
    sort_strings(words, 5);
    printf("Sorted strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    printf("Original sentence: '%s'\n", str3);
    reverse_words(str3);
    printf("Words reversed: '%s'\n", str3);

    return 0;
}