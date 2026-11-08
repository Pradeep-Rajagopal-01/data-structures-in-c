#include<stdio.h>
struct stack{
    char Name[10];
    char USN[10];
    int sem;
};

int main(){

    int n;
    printf("Enter the number of students records you want to store : ");
    scanf("%d",&n);
    struct stack students[n];

    for(int i=0; i<n; i++){
        printf("Enter the students Name : ");
        scanf("%s", &students[i].Name);
        
        printf("Enter the students USN : ");
        scanf("%s", &students[i].USN);
        
        printf("Enter the students Sem : ");
        scanf("%d", &students[i].sem);
    }

    for(int i=0; i<n; i++){
        printf("%s\n",students[i].Name);
        printf("%s\n",students[i].USN);
        printf("%d\n",students[i].sem);

    }

    return 0;


    

//--------------Random Practice--------------------------------------//

    // scanf("%s" "Enetr your name", s1.Name);
    // scanf("%d" "Enetr your name", &s1.sem);

//    strcpy(s1.Name, "Prad");
    // s1.sem = 1;

    // s2.Name = "Josh";
    // s2.sem = 1;

    // printf("%s\n",s1.Name);
    // printf("%d",s1.sem);

    // printf("%s",s2.Name);
    // printf("%d",s2.sem);

}