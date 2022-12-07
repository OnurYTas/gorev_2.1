#include <iostream>
#include <vector>
#include<math.h>
#include <clocale>

double mean(double arrr[], int n)
{
    double s=0;
    //int n = 6;
    
    std::vector<double> data(arrr, arrr + n);
    
    for (int x =0;x<data.size();x++)
        s+= data[x];
        
    s=s/data.size();

    
    
    return (s);
}
double stddev(double ar[], int n, double ort){
    double s=0;
    
    std::vector<double> data(ar, ar + n);
    //double st= mean(ar);
    for (int x =0;x<data.size();x++){
        s+=pow((data[x]-ort),2);
    }
    s=pow(s/n,0.5);
    return(s);


}
double dataa[]={1,5};// direkt vektör olarak başlatınca olmadı
int main()
{
    setlocale(LC_ALL, "Turkish");
    
    int sa;
    std::cout<<"Dizi kaç elemanlı? ";
    std::cin>>sa;
    double dataa[sa];
    for (int y =0;y<sa;y++){
        
        std::cout<<y<<". Elemanı gir: ";
        std::cin>>dataa[y];
    }
    std::cout<<"Hesaplanıyor..."<<std::endl;

    int datasize =sizeof(dataa)/sizeof(dataa[0]);// bunu fonksiyonda yapınca olmadı?
    double orta =mean (dataa,datasize);
    std::cout <<"Dizinin ortalaması: "<< mean(dataa,datasize)<<std::endl;
    
    std::cout<<"Dizinin standart sapması: "<<stddev(dataa,datasize,orta);
    
    return 0;

}
