#include <stdio.h>
#include <string.h>

struct students{
    char name[30];
    int age;
    enum score{
        A,B,C,D,F
    }e_s;
}b[72];


int main(){
    char grade[10];
    int val_menu,t=0,error;
    do{
        scanf("%d",&val_menu);
        
        switch (val_menu){
            
            case 1: 
                if(t==3){
                    printf("Maximum number of students reached.\n");
                }
                else{
                    scanf("%s",b[t].name);
                    scanf("%d",&b[t].age);
                    scanf("%s",grade);
                    if (strcmp(grade,"A")==0){
                        b[t].e_s=0;
                    }
                    else if (strcmp(grade,"B")==0){
                        b[t].e_s=1;
                    }
                    else if (strcmp(grade,"C")==0){
                        b[t].e_s=2;
                    }
                    else if (strcmp(grade,"D")==0){
                        b[t].e_s=3;
                    }
                    else if (strcmp(grade,"F")==0){
                        b[t].e_s=4;
                    }
                    else{
                        b[t].e_s=4;
                    }
                    t=t+1;
                    printf("Student added successfully.\n");    
                }
                break;
                
                
            case 2: //displaying students
                printf("List of students:\n");
                for(int i=0;i<t;i++){
                    printf("Student %d\n",i+1);
                    printf("Name: %s\n",b[i].name);
                    printf("Age: %d\n",b[i].age);
                    if (b[i].e_s==0){
                        printf("Score: A\n");
                    }
                    else if (b[i].e_s==1){
                        printf("Score: B\n");
                    }
                    else if (b[i].e_s==2){
                        printf("Score: C\n");
                    }
                    else if (b[i].e_s==3){
                        printf("Score: D\n");
                    }
                    else if (b[i].e_s==4){
                        printf("Score: F\n");
                    }
                    printf("\n");
                }
                break;
                
                
                
            case 3: //higest score
                printf("Highest-scoring student:\n");
                for(int i=0;i<t;i++){
                    if (b[i].e_s==0){
                        printf("Name: %s\n",b[i].name);
                        printf("Age: %d\n",b[i].age);
                        if (b[i].e_s==0){
                            printf("Score: A\n");
                        }
                        else if (b[i].e_s==1){
                            printf("Score: B\n");
                        }
                        else if (b[i].e_s==2){
                            printf("Score: C\n");
                        }
                        else if (b[i].e_s==3){
                            printf("Score: D\n");
                        }
                        else if (b[i].e_s==4){
                            printf("Score: F\n");
                        }
                    }
                    break;
                }
                printf("\n");
                break;
                
                
            case 4: //exiting
                printf("Exiting the program. Thank you for using our system!");
                break;
        }
    } while (val_menu!=4);
return 0;
}