#include <stdio.h>
z

int main() {
    float note1, note2, note3;
    int coeff1, coeff2, coeff3;
    float moyenne;

    printf("Entrez la note et le coefficient de la première matière: ");
    scanf("%f %d", &note1, &coeff1);
    printf("Entrez la note et le coefficient de la deuxième matière: ");
    scanf("%f %d", &note2, &coeff2);
    printf("Entrez la note et le coefficient de la troisième matière: ");
    scanf("%f %d", &note3, &coeff3);

    moyenne = (note1 * coeff1 + note2 * coeff2 + note3 * coeff3) / (coeff1 + coeff2 + coeff3);

    printf("Moyenne: %.2f\n", moyenne);

    if (moyenne >= 15) {
        printf("Admis avec félicitations\n");
    } else if (moyenne >= 12) {
        printf("Admis avec mention bien\n");
    } else if (moyenne >= 10) {
        printf("Admis\n");
    } else if (moyenne >= 9) {
        printf("Redouble\n");
    } else {
        printf("Exclu\n");
    }

    return 0;
}