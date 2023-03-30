#include <stdio.h>
#include "vectorCalc.h"

int main(){
    char input;
    printf("What vector operation would you like to perform?\n");
    printf("a: Add two vectors (2x2)\n");
    printf("b: Scalar multiplication + vector addtion (3x2)\n");
    printf("c: Find the dot product (3x2)\n");
    printf("d: Find a vector's magnitude (3x1)\n");
    printf("e: Find the projection of two vectors (2x2)\n");
    printf("f: Find the cross product of two vectors (3x2)\n");
    scanf(" %c", &input);

    switch(input){
        case 'a':
            int addVec1[2];
            int addVec2[2];
            printf("Please enter two integers for the first matrix: (ex. 2 3)\n");
                for(int i = 0; i < 2; ++i){
                scanf("%d", &addVec1[i]);
                }
            printf("Please enter two integers for the second matrix: (ex. 4 5)\n");
                for(int i = 0; i < 2; ++i){
                scanf("%d", &addVec2[i]);
                }
            vectorAdd(addVec1, addVec2);
            break;

        case 'b':
            double scalarVec1[3];
            double scalarVec2[3];
            double scalarOne;
            double scalarTwo;
            printf("Please enter three numbers for the first matrix: (ex. 1.1 2.2 3.3)\n");
                for(int i = 0; i < 3; ++i){
                scanf("%lf", &scalarVec1[i]);
                }
            printf("Please enter three numbers for the second matrix: (ex. 4.4 5.5 6.6)\n");
                for(int i = 0; i < 3; ++i){
                    scanf("%lf", &scalarVec2[i]);
                }
            printf("Please enter a scalar multiple for the first vector\n");
                scanf("%lf", &scalarOne);
            printf("Please enter a scalar multiple for the second vector\n");
                scanf("%lf", &scalarTwo);
            scalarProd(scalarVec1, scalarVec2, scalarOne, scalarTwo);
            break;

        case 'c':
            double dotVec1[3];
            double dotVec2[3];
            printf("Please enter three numbers for the first matrix: (ex. 1.1 2.2 3.3)\n");
                for(int i = 0; i < 3; ++i){
                scanf("%lf", &dotVec1[i]);
                }
            printf("Please enter three numbers for the second matrix: (ex. 4.4 5.5 6.6)\n");
                for(int i = 0; i < 3; ++i){
                    scanf("%lf", &dotVec2[i]);
                }
            dotProduct(dotVec1, dotVec2);
            break;

        case 'd':
            double magVec[3];
            printf("Please enter a 3 number matrix: (ex. 1.1 2.2 3.3)\n");
                for(int i = 0; i < 3; ++i){
                scanf("%lf", &magVec[i]);
                }
            magnitude(magVec);
            break;
        
        case 'e':
            double vecV[2];
            double vecU[2];
            printf("Please enter two numbers for the first matrix: (ex. 5.4 3.4)\n");
                for(int i = 0; i < 2; ++i){
                scanf("%lf", &vecV[i]);
                }
            printf("Please enter two numbers for the second matrix: (ex. 7.9 3.8)\n");
                for(int i = 0; i < 2; ++i){
                scanf("%lf", &vecU[i]);
                }
            projVec(vecV, vecU);
            break;
        case 'f':
            double crossVec1[3];
            double crossVec2[3];
            printf("Please enter three numbers for the first matrix: (ex. 4.1 3.4 5.6)\n");
                for(int i = 0; i < 3; ++i){
                    scanf("%lf", &crossVec1[i]);
                }
            printf("Please enter three numbers for the second matrix: (ex. 5.4 1.4 8.9)\n");
                for(int i = 0; i < 3; ++i){
                    scanf("%lf", &crossVec2[i]);
                }
            crossProd(crossVec1, crossVec2);
            break;

        default:
            printf("Invalid input\n");
            
    }
    
    return 0;
}