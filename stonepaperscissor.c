#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int point = 1;
    while(point <= 5) {
        int number;
        char userinput;
        printf("Enter s for stone \nEnter p for paper \nEnter k for scissor\n");
        scanf("%c", &userinput);
        srand(time(0));
        number = rand() % 3 + 1;
        if(number==1) {
            printf("The computer chose stone\n");
        }
        if(number==2) {
            printf("The computer chose paper\n");
        }
        if(number==3) {
            printf("The computer chose scissor\n");
        }

        if ((number == 1 && userinput == 's') || (number == 2 && userinput == 'p') || (number == 3 && userinput == 'k')) {
            printf("Dismiss , You both chose the same\n");
        }
        if ((number == 1 && userinput == 'p') || number == 2 && userinput == 'k' || number == 3 && userinput == 's') {
            printf("YOU WON\n");
        }
        if ((number == 2 && userinput == 's') || (number == 3 && userinput == 'p') || number == 1 && userinput == 'k') {
            printf("YOU LOST\n");
        }
        point += 1;
    }
    return 0;
}