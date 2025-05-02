#include "stringtoolkit.h"

int string_length(const char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int is_vowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void to_uppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}

void to_lowercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int count_vowels(const char str[]) {
    int count = 0, i = 0;
    while (str[i] != '\0') {
        if (is_vowel(str[i])) count++;
        i++;
    }
    return count;
}

void reverse_string(char str[]) {
    int len = string_length(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int compare_strings(const char s1[], const char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        char c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        char c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
        if (c1 < c2) return -1;
        else if (c1 > c2) return 1;
        i++;
    }
    if (s1[i] == '\0' && s2[i] != '\0') return -1;
    if (s1[i] != '\0' && s2[i] == '\0') return 1;
    return 0;
}

void copy_string(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void sort_strings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (compare_strings(arr[i], arr[j]) > 0) {
                copy_string(temp, arr[i]);
                copy_string(arr[i], arr[j]);
                copy_string(arr[j], temp);
            }
        }
    }
}

void reverse_words(char str[]) {
    char words[100][100];
    int word_count = 0, i = 0, j = 0, k = 0;

    // Split into words
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words[word_count][j] = '\0';
            word_count++;
            j = 0;
        } else {
            words[word_count][j++] = str[i];
        }
        i++;
    }
    words[word_count][j] = '\0';
    word_count++;

    // Clear original string
    i = 0;

    // Copy words in reverse
    for (k = word_count - 1; k >= 0; k--) {
        j = 0;
        while (words[k][j] != '\0') {
            str[i++] = words[k][j++];
        }
        if (k != 0) str[i++] = ' ';
    }
    str[i] = '\0';
}