#include <stdio.h>

char Iniziale()
{
    printf("Benvenuto! Cosa vuoi fare?\n");
    printf("A) Nuova partita\n");
    printf("B) Esci dal gioco\n");

    char scelta;
    printf("Quindi?: ");
    scanf(" %c", &scelta);

    if (scelta == 'A' || scelta == 'a')
    {
        printf("WOW, hai scelto di iniziare una nuova partita. Partiamo!\n");
    }
    else if (scelta == 'B' || scelta == 'b')
    {
        printf("Allora, perché hai aperto il gioco -_- ?\n");
    }
    else
    {
        printf("Scelta non valida.\n");
    }

    return scelta;
}

void NuovaPartita(char *NomeGiocatore)
{
    printf("Come ti chiami?: ");
    scanf("%s", NomeGiocatore);
    printf("Quindi ti chiami: %s\n", NomeGiocatore);
}

void setDiDomande()
{
    char Domanda1[] = "Quante stelle ci sono nel cielo alle 10 del mattino? ... \n";
    char Domanda2[] = "Di che colore era il cavallo bianco di Napoleone? .... \n";
    char Domanda3[] = "Quanto tempo ti serve per riempire di acqua uno scola-pasta? ... \n";
    char Domanda4[] = "Se tu avessi l'alopecia quanti capelli avresti in testa? ... \n ";
    char Domanda5[] = "Come si chiama il dito fra medio e mignolo? ... \n ";

    int Punteggio = 0;
    char Scelta;

    printf("Ottimo possiamo partire\n");

    printf("----------------------------------- \n");
    printf("----------------------------------- \n");

    // PRIMA DOMANDA
    printf("Prima domanda: \n");
    printf(Domanda1);
    printf("A) 10 ----  B) 312,3 --- C) ma è giorno...  \n");
    printf("SCELTA: ");
    scanf(" %c", &Scelta);

    while (Scelta != 'A' && Scelta != 'B' && Scelta != 'C')
    {
        printf("Scelta non valida. Riprova: ");
        scanf(" %c", &Scelta);
    }

    if (Scelta == 'A' || Scelta == 'B')
    {
        printf("Risposta errata D:\n");
        Punteggio--;
    }
    else
    {
        printf("Domanda corretta :D\n");
        Punteggio++;
    }
    // FINE PRIMA DOMANDA

    // SECONDA DOMANDA
    printf("Seconda domanda: \n");
    printf(Domanda2);
    printf("A) Viola ----  B) Bianco --- C) Arcobaleno  \n");
    printf("SCELTA: ");
    scanf(" %c", &Scelta);

    while (Scelta != 'A' && Scelta != 'B' && Scelta != 'C')
    {
        printf("Scelta non valida. Riprova: ");
        scanf(" %c", &Scelta);
    }

    if (Scelta == 'A' || Scelta == 'C')
    {
        printf("Risposta errata D:\n");
        Punteggio--;
    }
    else
    {
        printf("Domanda corretta :D\n");
        Punteggio++;
    }
    // FINE SECONDA DOMANDA

    // TERZA DOMANDA
    printf("Terza domanda: \n");
    printf(Domanda3);
    printf("A) 10L ----  B) 40L --- C) mi rifiuto di rispondere  \n");
    printf("SCELTA: ");
    scanf(" %c", &Scelta);

    while (Scelta != 'A' && Scelta != 'B' && Scelta != 'C')
    {
        printf("Scelta non valida. Riprova: ");
        scanf(" %c", &Scelta);
    }

    if (Scelta == 'A' || Scelta == 'B')
    {
        printf("Risposta errata D:\n");
        Punteggio--;
    }
    else
    {
        printf("Domanda corretta :D\n");
        Punteggio++;
    }
    // FINE TERZA DOMANDA

    // 4
    printf("Quarta domanda: \n");
    printf(Domanda4);
    printf("A) anche troppi  ----  B) 40Kg --- C) meno di un pelato  \n");
    printf("SCELTA: ");
    scanf(" %c", &Scelta);

    while (Scelta != 'A' && Scelta != 'B' && Scelta != 'C')
    {
        printf("Scelta non valida. Riprova: ");
        scanf(" %c", &Scelta);
    }

    if (Scelta == 'A' || Scelta == 'B')
    {
        printf("Risposta errata D:\n");
        Punteggio--;
    }
    else
    {
        printf("Domanda corretta :D\n");
        Punteggio++;
    }
    // FINE 4

    //  5
    printf("Quinta domanda: \n"); // Corretto l'etichetta della domanda
    printf(Domanda5);
    printf("A) Piero  ----  B) Anulare --- C) 7  \n");
    printf("SCELTA: ");
    scanf(" %c", &Scelta);

    while (Scelta != 'A' && Scelta != 'B' && Scelta != 'C')
    {
        printf("Scelta non valida. Riprova: ");
        scanf(" %c", &Scelta);
    }

    if (Scelta == 'A' || Scelta == 'C')
    {
        printf("Risposta errata D:\n");
        Punteggio--;
    }
    else
    {
        printf("Domanda corretta :D\n");
        Punteggio++;
    }
    // FINE 5

    printf("Il tuo punteggio finale è: %d\n", Punteggio);
}

int main()
{
    char scelta;
    char NomeGiocatore[50];

    do
    {
        scelta = Iniziale();

        if (scelta == 'A' || scelta == 'a')
        {
            NuovaPartita(NomeGiocatore);
            setDiDomande();
        }

        // giocare di nuovo?
        printf("\n Vuoi giocare di nuovo? (S/N): ");
        scanf(" %c", &scelta);

    } while (scelta == 'S' || scelta == 's');

    return 0;
}
