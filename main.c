#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int a;
    printf("---1ajouter un livre au stock\n\n");
    printf("2afficher les livres disponibles\n\n");
    printf("3rechercher un livre par son titre\n\n");
    printf("4mettre a jour la quantite d un livre\n\n");
    printf("5supprimer un livre du stock\n\n");
    printf("6afficher le nombre total de livres en stockes\n\n");
do {
      printf ("choisire un numero: ");
      scanf("%d",&a);
      char livre[50];
      char titre[50];
      float prix  ;
      int total ;
int stock=0;

      switch(a){

          case 1:{

      printf("nombre le titre livre:");
      scanf ("%s",livre);
      printf("titre des livres :");
      scanf("%s",titre);
      printf("prix de livre :");
      scanf("%f",&prix);
     printf ("total de livre:");
     scanf("%d",&total);
     stock ++;
     printf ("livre ajouter avec succes %s !\n ");
     break;
    }

          case 2 :{
 printf ("liste de livre disponible en stock :\n");

    printf ("livre ajoutee:\n");
    printf ("titre du livre:%s\n" ,livre);

 printf ("auteur de livre %s\n",titre);
   printf("prix de livre %.2f\n",prix);
  printf ("quantite:%d\n\n",total);
 break ;
  }
  case 3:{
            char recherche [50];
            printf (" entrer le titre du livre a le rechercher:");
            scanf ("%s,rechercher");
            int found =0;

            if (strcmp(titre, recherche)==0){
            printf ("le livre trouve:\n");
            printf ("titre du livre :%s\n",livre);
            printf ( "auteur du livre:%s\n",titre);
            printf ("prix du livre :%.2f\n",prix);
            printf ("quantite des livres:%d\n",total);

            found =1;
           }

          if (!found) printf  ("livre n est pas trouve.\n");

                break ;
               }

               ///

               case 4:{
              char recherche[50];
int nv;
            printf ("entrer le titre du livre a jour: ");
            scanf ("%s", recherche);
            int found =0;
            for(int i=0;i<stock ;i++){
                   if (strcmp(titre,recherche)==0){
                     printf("entrer la nouvellequantite[i]");
                   scanf ("%d",&nv);
                   found =1;

                   }
            }
            if(!found)   printf ("livre n est pas trouve.\n");
                  break ;
               }

          case 5:{
          char recherche [50];
          printf("entrer le titre du livre qui vas supprimer:");
          scanf("%s",recherche);
          int found = 0;
          for (int i = 0; i <stock;i++){
            if (strcmp(titre,recherche)==0){

          }

          }
          if (!found){
    printf("livre n est pas trouve.\n");
          }
          break;
          }

           case 6: {
            int s = 0;
            s += stock;
            printf("les livres total en stock : %d\n", s);
                break;
            }

  } //switch

            } while(a!=0);  //do
          }





















