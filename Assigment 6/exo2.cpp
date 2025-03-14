#include <iostream>
using namespace std;

template <typename T>
void sortArray(T Array[],int length){
    T replacor;
    for( int i =0; i<length;i++){
        for (int y=i+1;y<length;y++){
            if(Array[i]>Array[y]){
                replacor=Array[i];
                Array[i]=Array[y];
                Array[y]=replacor;
            }
        }
    }

};
int main(){
    int Array1[]={2,1,6,9,0,10};
    double Array2[]={9.1,0.9,1.8,3.0,8.5};
    cout<<"the Array1 before sort"<<endl;
    for (int i =0;i<6;i++){
        cout<<Array1[i]<<endl;
    }

     sortArray<int>(Array1,6);

    cout<<"the Array1 After sort"<<endl;
    for (int i =0;i<6;i++){
        cout<<Array1[i]<<endl;
    }
    cout<<endl;

    cout<< "the Array2 before sort"<<endl;
    for (int i =0;i<6;i++){
        cout<<Array1[i]<<endl;
    }

   
    sortArray<double>(Array2,5);
    
    cout<<"the Array1 After sort"<<endl;
    for (int i =0;i<5;i++){
        cout<<Array2[i]<<endl;
    }


    return 0;
}