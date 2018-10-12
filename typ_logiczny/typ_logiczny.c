#include <stdbool.h>
#include "stdio.h"
int main() {
    enum dni {
        ni, po = 5, wt, sr, cz, pi, so,

    };
    enum dni dzien_tygodnia;
        bool czy_byl_obecny = true;

        dzien_tygodnia = so;
        printf ("wyniki: %i\n", dzien_tygodnia);

        printf("%i\n", czy_byl_obecny);

}