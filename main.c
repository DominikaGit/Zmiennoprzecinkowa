#include <stdio.h>
/*Program wypisuajcy funkcja printf ta sam zienna typu int w formacie zmiennoprzecinkowym (dokladnosc do 1 i 3 cyfr po przecinku) i napisowym*/

int main() {
 int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("%1.f, %.3f, %c", (float)liczba, (float)liczba, liczba);
    getchar();
    return 0;
}
