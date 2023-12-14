#include <stdio.h>
#include <stdlib.h>
#include <stdbool>

#define ALPHABET_SIZE 26

void initializeSet(char set[], int size) {
    for (int i = 0; i < size; i++) {
        set[i] = 0;
    }
}

void insertElement(char set[], char element) {
    set[element - 'a'] = 1;
}

void deleteElement(char set[], char element) {
    set[element - 'a'] = 0;
}

bool isElementPresent(char set[], char element) {
    return set[element - 'a'] != 0;
}

void unionSets(char set1[], char set2[], char resultSet[], int size) {
    for (int i = 0; i < size; i++) {
        resultSet[i] = set1[i] | set2[i];
    }
}

void intersectionSets(char set1[], char set2[], char resultSet[], int size) {
    for (int i = 0; i < size; i++) {
        resultSet[i] = set1[i] & set2[i];
    }
}

void printSet(char set[], int size) {
    printf("{ ");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (isElementPresent(set, ch)) {
            printf("%c ", ch);
        }
    }
    printf("}\n");
}

int main() {
    int size = ALPHABET_SIZE;
    char *set1 = (char *)malloc(size * sizeof(char));
    char *set2 = (char *)malloc(size * sizeof(char));
    char *resultSet = (char *)malloc(size * sizeof(char));

    initializeSet(set1, size);
    initializeSet(set2, size);

    // Let the user dynamically input elements into sets
    char element;
    printf("Enter elements for Set 1 (one character at a time, '0' to stop): ");
    while (1) {
        scanf(" %c", &element);
        if (element == '0') {
            break;
        }
        insertElement(set1, element);
    }

    printf("Enter elements for Set 2 (one character at a time, '0' to stop): ");
    while (1) {
        scanf(" %c", &element);
        if (element == '0') {
            break;
        }
        insertElement(set2, element);
    }

    printf("Set 1: ");
    printSet(set1, size);

    printf("Set 2: ");
    printSet(set2, size);

    unionSets(set1, set2, resultSet, size);
    printf("Union: ");
    printSet(resultSet, size);

    intersectionSets(set1, set2, resultSet, size);
    printf("Intersection: ");
    printSet(resultSet, size);

    // Cleanup allocated memory
    free(set1);
    free(set2);
    free(resultSet);

    return 0;
}
