#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = {'\0'};
	menu();
	scanf ("%c", &scelta);
	fflush(stdin);

	switch (scelta)
	{
		case 'A':
			moltiplica();
			break;
		case 'B':
            dividi();
        	break;
		case 'C':
            ins_string();
            break;
        default :
        	printf("Hai inserito la lettera errata\n");
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:\n");
	printf("Primo numero:");
	scanf ("%hd", &a);
	printf("\nSecondo numero:\n");
	scanf ("%hd", &b);

	int prodotto = a * b;

	printf ("Il prodotto tra %hd e %hd e': %d", a,b,prodotto);
}


void dividi ()
{
        float  a,b;
        printf ("Inserisci il numeratore:");
        scanf ("%f", &a);
		printf ("Inserisci il denumeratore:");
        scanf ("%f", &b);

        float divisione = a / b;

        printf ("La divisione tra %.2f e %.2f e': %.2f", a,b,divisione);
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        fgets(stringa,10,stdin);
        printf("Hai scritto: %s", stringa);
}
