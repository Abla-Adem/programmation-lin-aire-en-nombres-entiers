#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

struct cond_struct_s
{
    int nbr_ligne;
    char **str_table;
};
typedef struct cond_struct_s cond_struct;
struct fct_struct_s
{
    char *str_fct;
    int nbr_variable;
    char **variable_nom;
    int *variable_coef;
};
typedef struct fct_struct_s fct;
void file_to_array(FILE *f,int MAX_LENGTH,cond_struct *cond,fct *fonction)
{
    char** str_table;
    char * buffer = (char *) malloc( MAX_LENGTH );
    fonction->str_fct=(char *) malloc( MAX_LENGTH );
    int len;
    //pour ne pas compter les 3 premiere ligne
    while ( ! feof( f ) ) {
        fgets( buffer, MAX_LENGTH, f );
        cond->nbr_ligne++;
    }
    fclose( f );
    cond->str_table= malloc(cond->nbr_ligne * sizeof(char*));
    for (int i = 0; i < cond->nbr_ligne; ++i) {
        cond->str_table[i]=(char *) malloc( MAX_LENGTH );
    }
    f=fopen("test.txt","r");
    //pour sauter la premiere ligne
    fgets( buffer, MAX_LENGTH, f );
    //traitement de la ligne qui contient la fonction qu'on maximise
    fgets( fonction->str_fct, MAX_LENGTH, f );
    len=strlen( fonction->str_fct);
    for (int i = 0; i < len; ++i) {
        if (fonction->str_fct[i] == '+' || fonction->str_fct[i] == '-') {
            fonction->nbr_variable++;
        }
    }
    fgets( buffer, MAX_LENGTH, f );
    int i=0;
    char temp;
    while ( ! feof( f ) )
    {
         fgets( cond->str_table[i], MAX_LENGTH, f );
         temp=cond->str_table[i][strlen(cond->str_table[i])-1];
        cond->str_table[i][strlen(cond->str_table[i])-1]='\0';
         i++;
    }
    cond->str_table[i-1][strlen(cond->str_table[i-1])]=temp;



    fonction->variable_coef=malloc(fonction->nbr_variable * sizeof(int));
    fonction->variable_nom=malloc(fonction->nbr_variable * sizeof(char*));
    for (int i = 0; i < fonction->nbr_variable; ++i) {
        fonction->variable_nom[i]=(char *) malloc(10);


    }
}
void decomp_str(fct *fonction,int MAX_LENGTH)
{
    int len=strlen( fonction->str_fct);
    char * buffer_temp = (char *) malloc( MAX_LENGTH );
    int comptuer=0;
    int dernier_plusmoins=0;
    int dernier_coef=0;
    int i=0;
    int coef_vrai=1;
    while(i < len) {
        while(isdigit(fonction->str_fct[i]) && i<len)
        {

            i++;
        }
        if(isalpha(fonction->str_fct[i]) && coef_vrai)
        {
            if(i==dernier_coef)
            {
                fonction->variable_coef[comptuer]=1;

            }
            else
            {
                strncpy(buffer_temp,fonction->str_fct+dernier_coef,i-dernier_coef);
                fonction->variable_coef[comptuer]=atoi(buffer_temp);

            }
            coef_vrai=0;
            dernier_coef=i;
        }

        if(i<len)
        {
            if(fonction->str_fct[i]=='+' || fonction->str_fct[i]=='-')
            {
                strncpy(fonction->variable_nom[comptuer],fonction->str_fct+dernier_coef,i-dernier_coef);
                fonction->variable_nom[comptuer][i-dernier_coef]='\0';
                dernier_plusmoins=i+1;
                dernier_coef=i+1;
                comptuer++;
                coef_vrai=1;
            }
            i++;
        }
    }
    strncpy(fonction->variable_nom[comptuer],fonction->str_fct+dernier_coef,i-dernier_coef-1);
    fonction->variable_nom[comptuer][i-dernier_coef-1]='\0';

}
int main() {
    int MAX_LENGTH=250;
    FILE* f=fopen("test.txt","r");
    fct fonction;
    cond_struct cond;
    fonction.nbr_variable=1;
    cond.nbr_ligne=-3;

    char * buffer = (char *) malloc( MAX_LENGTH );

    //pour ne pas compter les 3 premiere ligne
    int len;
    file_to_array(f,MAX_LENGTH,&cond,&fonction);
    decomp_str(&fonction,MAX_LENGTH);

    //fin

    return 0;
}
