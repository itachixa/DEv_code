#include <iostream>
using namespace std;
z

template <typename T_584>
void sortArray_584(T_584 Array_584[],int length_584){
    T_584 replacor_584;
    for( int i_584 =0; i_584<length_584;i_584++){
        for (int y_584=i_584+1;y_584<length_584;y_584++){
            if(Array_584[i_584]>Array_584[y_584]){
                replacor_584=Array_584[i_584];
                Array_584[i_584]=Array_584[y_584];
                Array_584[y_584]=replacor_584;
            }
        }
    }

};
int main(){
    int Array1_584[]={2,1,6,9,0,10};
    double Array2_584[]={9.1,0.9,1.8,3.0,8.5};
    cout<<"the Array1 before sort"<<endl;
    for (int i_584 =0;i_584<6;i_584++){
        cout<<Array1_584[i_584]<<endl;
    }

     sortArray_584<int>(Array1_584,6);

    cout<<"the Array1 After sort"<<endl;
    for (int i_584 =0;i_584<6;i_584++){
        cout<<Array1_584[i_584]<<endl;
    }
    cout<<endl;

    cout<< "the Array2 before sort"<<endl;
    for (int i_584 =0;i_584<5;i_584++){
        cout<<Array2_584[i_584]<<endl;
    }

   
    sortArray_584<double>(Array2_584,5);
    
    cout<<"the Array2 After sort"<<endl;
    for (int i_584 =0;i_584<5;i_584++){
        cout<<Array2_584[i_584]<<endl;
    }


    return 0;
}