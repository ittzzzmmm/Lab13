#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool image[N][M]){
    for(int i = M; i>-2; i--) {cout << "-";} cout<<"\n";
    for(int n = 0; n<N; n++){
        cout << "|";
        for(int m =0; m<M; m++){
            if(image[n][m]==1) cout <<"*";
            else cout << " ";}
        cout << "|" <<endl;    
    }
    for(int i = M; i>-2; i--) {cout << "-";} cout<<"\n";
}

void updateImage(bool image[N][M],int s,int x,int y){
    for(int n = 0; n<N; n++){
        for(int m = 0; m<M; m++){
            if(pow(n-x,2)+pow(m-y,2)<= pow(s-1,2)){
                image[n][m] = 1 ;
            }
        }
    }
}