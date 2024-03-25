#include <stdio.h>

int stringscompar(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 == '\0') {
        return 0; 
    } else {
        
        return *str1 - *str2;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    int resultado = stringscompar(str1, str2);

    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado < 0) {
        printf("A primeira string eh menor que a segunda.\n");
    } else {
        printf("A primeira string eh maior que a segunda.\n");
    }

    return 0;
}
