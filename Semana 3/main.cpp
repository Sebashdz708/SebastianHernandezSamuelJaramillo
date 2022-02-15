/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <math.h>

double f(double x){
    //exp(-1.0*pow(x,2.0))
    return -1.0*pow(x,2.0);
}

double f_prima_central(double x, double h){
    return (f(x + h/2) - f(x - h/2))/h;
}

int main(){
    
    std::ofstream *File;
    
    File = new std::ofstream[1];
    
    File[0].open("Datos.dat", std::ofstream::trunc );
    
    double h;
    
    h = 0.01;
    
    for(int i = 0; i < 4000; i++){
        double x;
        x = -20 + i*h;
        File[0] << x << " " << f_prima_central(x,h) <<std::endl;
    }
    
    File[0].close();
    
    return 0;
}