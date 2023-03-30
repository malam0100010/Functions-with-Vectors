#include <stdio.h>
#include <math.h>
#define TWO_BY_TWO  2
#define THREE_BY_THREE 3

#ifndef VECTORCALCFUNC_H
#define VECTORCALCFUNC_H
//vector addtion function
int vectorAdd(int vectorOne[], int vectorTwo[]){
    int additionVec[2];
    for(int i = 0; i < TWO_BY_TWO; ++i){
        additionVec[i] = vectorOne[i] + vectorTwo[i];
    }
    printf("Addtion vector: <%d, %d>", additionVec[0], additionVec[1]);    
}

//scalar mulitplication + vector addition
double scalarProd(double vectorOne[], double vectorTwo[], double scalarOne, double scalarTwo){
    double scalarVec[3];
    for(int i = 0; i < THREE_BY_THREE; ++i){
        vectorOne[i] = vectorOne[i] * scalarOne;
        vectorTwo[i] = vectorTwo[i] * scalarTwo;
        scalarVec[i] = vectorOne[i] + vectorTwo[i];
    }
    printf("Scalar Vector: <%lf, %lf, %lf>", scalarVec[0], scalarVec[1], scalarVec[2]);

}

//dot product
double dotProduct(double vectorOne[], double vectorTwo[]){
    double dotResult = 0.0;
    for(int i = 0; i < THREE_BY_THREE; ++i){
        dotResult += vectorOne[i] * vectorTwo[i];
    }
    printf("Resultant of dot product: %lf\n", dotResult);
}

//magnitude
double magnitude(double tBtMatrix[]){
    double mag = 0.0;
    for(int i = 0; i < 3; ++i){
        mag += tBtMatrix[i] * tBtMatrix[i];
    }
    mag = sqrt(mag);
    printf("The magnitude of you vector is: %lf\n", mag);

}

//vector projection
double projVec(double projFromV[], double projOntoU[]){
    double dotProd = 0.0;
    double magU = 0.0;
    double scalarMultiplier;
    double projectionVector[2];
    //u dot v and mag U squared
    for(int i = 0; i < TWO_BY_TWO; ++i){
        dotProd += projFromV[i] * projOntoU[i];
        magU += projOntoU[i] * projOntoU[i];
    }
    scalarMultiplier = dotProd / magU;
    //mulitply above by projOntoU vector to get projection
    for(int i = 0; i < TWO_BY_TWO; ++i){
        projectionVector[i] = scalarMultiplier * projOntoU[i];
    }
    printf("Projection Vector: <%lf, %lf>\n", projectionVector[0], projectionVector[1]);

}

double crossProd(double vecOne[], double vecTwo[]){
    double crossProdVec[3];
    crossProdVec[0] = (vecOne[1] * vecTwo[2]) - (vecOne[2] * vecTwo[1]);
    crossProdVec[1] = -1 * ((vecOne[0] * vecTwo[2]) - (vecOne[2] * vecTwo[0]));
    crossProdVec[2] = (vecOne[0] * vecTwo[1]) - (vecOne[1] * vecTwo[0]);
    printf("The cross product of the two vectors is: <%lf, %lf, %lf>\n", crossProdVec[0], crossProdVec[1], crossProdVec[2]);

}

// vec1: -1 2 5 
// vec2: 4 0 -3


#endif
