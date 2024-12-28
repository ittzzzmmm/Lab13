#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum_mean =0 ;
    for(int i=0; i<N; i++){sum_mean = sum_mean + A[i] ;}
    B[0] = sum_mean/N ; 

    double sum_sd =0;
    for(int i=0; i<N; i++){sum_sd = sum_sd + pow(A[i]-B[0],2) ;}
    B[1] = sqrt(sum_sd/N);

    double prod = 1;
    for(int i=0; i<N; i++){prod=prod*A[i];}
    B[2] = pow(prod,1.0/N) ;

    double sum_inverse = 0;
    for(int i=0; i<N; i++){sum_inverse=sum_inverse+(1/A[i]);}
    B[3] = N/sum_inverse ;

    B[4] = A[0];
    for(int i=0; i<N; i++){
        if(A[i] >= B[4]) B[4] = A[i] ;}
    
    B[5] = A[0] ;
    for(int i=0; i<N; i++){
        if(A[i] <= B[5]) B[5] = A[i] ;}


}