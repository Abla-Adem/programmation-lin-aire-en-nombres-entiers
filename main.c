#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
char** file_to_array(FILE *f,int MAX_LENGTH,int *nbr_ligne,int *nbr_variable,int *len,int *variable_coef,char **variable_nom)
{
    char** str_table;
    char * buffer = (char *) malloc( MAX_LENGTH );

    //pour ne pas compter les 3 premiere ligne
    while ( ! feof( f ) ) {
        fgets( buffer, MAX_LENGTH, f );
        *nbr_ligne++;
    }
    fclose( f );
    str_table= malloc(*nbr_ligne * sizeof(char*));
    for (int i = 0; i < *nbr_ligne; ++i) {
        str_table[i]=(char *) malloc( MAX_LENGTH );
    }
    f=fopen("test.txt","r");
    //pour sauter la premiere ligne
    fgets( buffer, MAX_LENGTH, f );
    //traitement de la ligne qui contient la fonction qu'on maximise
    fgets( buffer, MAX_LENGTH, f );
    *len=strlen( buffer);
    for (int i = 0; i < len; ++i) {
        if(buffer[i]=='+' || buffer[i]=='-')
        {
            *nbr_variable++;
        }

    }
    variable_coef=malloc(*nbr_variable * sizeof(int));
    variable_nom=malloc(*nbr_variable * sizeof(char*));
    for (int i = 0; i < *nbr_variable; ++i) {
        variable_nom[i]=(char *) malloc(10);

    }
    return str_table;
}
void decomp_str(char* buffer,int MAX_LENGTH,int *variable_coef,char **variable_nom,int nbr_variable)
{
    int len=strlen( buffer);
    char * buffer_temp = (char *) malloc( MAX_LENGTH );
    int comptuer=0;
    int dernier_plusmoins=0;
    int dernier_coef=0;
    int i=0;
    int coef_vrai=1;
    while(i < len) {

        while(isdigit(buffer[i]) && i<len)
        {

            i++;
        }
        if(isalpha(buffer[i]) && coef_vrai)
        {
            if(i==dernier_coef)
            {
                variable_coef[comptuer]=1;

            }
            else
            {
                strncpy(buffer_temp,buffer+dernier_coef,i-dernier_coef);
                variable_coef[comptuer]=atoi(buffer_temp);

            }
            coef_vrai=0;
            dernier_coef=i;
        }

        if(i<len)
        {
            if(buffer[i]=='+' || buffer[i]=='-')
            {
                strncpy(variable_nom[comptuer],buffer+dernier_coef,i-dernier_coef);

                dernier_plusmoins=i+1;
                dernier_coef=i+1;
                comptuer++;
                coef_vrai=1;
            }
            i++;
        }
    }
    strncpy(variable_nom[comptuer],buffer+dernier_coef,i-dernier_coef-1);
    for (int i = 0; i < nbr_variable; ++i) {
        printf("%s %i\n",variable_nom[i],variable_coef[i]);
    }
}
int main() {
    int MAX_LENGTH=250;
    FILE* f=fopen("test.txt","r");
    char** str_table;
    int* variable_coef;
    char** variable_nom;
    char * buffer = (char *) malloc( MAX_LENGTH );

    //pour ne pas compter les 3 premiere ligne
    int nbr_ligne=-3;
    int nbr_variable=1;
    int len;
    str_table=file_to_array(f,MAX_LENGTH,&nbr_ligne,&nbr_variable,&len,variable_coef,variable_nom);
    decomp_str(buffer,MAX_LENGTH,variable_coef,variable_nom,nbr_variable);
    //pour sauter la troisieme ligne
    fgets( buffer, MAX_LENGTH, f );
    //traitement des condition
    for (int i = 0; i < nbr_ligne; ++i) {
        fgets( str_table[i], MAX_LENGTH, f );
        printf("%s ",str_table[i]);
    }
    //fin
    return 0;
}
