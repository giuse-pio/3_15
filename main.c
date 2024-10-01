#include <stdio.h>

int main(void) {

    float ticket, tot;
    char condizione;
    printf(" sei uno studente (S) pensionato (P) o un disoccupato(D): ");
    scanf("%c", &condizione);
    printf(" costo Ticket: ");
    scanf("%f", &ticket);

    if (condizione == 's' || condizione == 'S') {
        tot = ticket-(ticket*0.15);
    }
    else if (condizione == 'p' || condizione == 'P') {
            tot = ticket-(ticket*10/100);
    }
    else if (condizione == 'd' || condizione == 'D') {
        tot = ticket-(ticket*25/100);
    }
    else {
        tot = ticket;
    }
    printf("il prezzo finale del ticket e': %.2f$", tot);
}