#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbeleves;
    char Continuer;

    printf("Bonjour nous allons faire le r%csultat des 3 notes d'examens pass%cs\n", 130, 130);
    printf("Veuillez entrez le nombre d'%cl%cve qui a participer au examens : ", 130, 138);
    scanf("%i", &nbeleves);

    NBElevesEtCalcule(nbeleves);

    printf("Toute les notes ont %ct%c entrez\n", 130,130);
    printf("Voulez vous continuer ? (O/N) : ");

    scanf("%s", &Continuer);

    if(Continuer == 'o' || Continuer == 'O' || Continuer == '0')
    {
        system("cls");
        main();
    }
    else
    {
        return 0;
    }
}

int NBElevesEtCalcule(int NbrEleves)
{
    int i, id, moy;
    int NoteEleve[3] = {0, 0, 0}, SauvNote[5] = {0, 0, 0, 0, 0};

    for (i = 0 ; i!= NbrEleves ; i++)
    {
        printf("Entrez le num%cro de l'%cl%cve : ", 130, 130, 138);
        scanf("%i", &id);

        printf("Entrez les 3 notes en pourcentage des trois examens pass%cs : \n", 130);
        scanf("%d", &NoteEleve[0]);
        scanf("%d", &NoteEleve[1]);
        scanf("%d", &NoteEleve[2]);

        moy = (NoteEleve[0] + NoteEleve[1] + NoteEleve[2]) / 3;

        SauvNote[0+i] = moy;

        printf("La moyenne de l'%cl%cve %d est de %d (%d, %d, %d)\n", 130, 138, id, SauvNote[0+i], NoteEleve[0], NoteEleve[1], NoteEleve[2]);
    }

    return main;
}


