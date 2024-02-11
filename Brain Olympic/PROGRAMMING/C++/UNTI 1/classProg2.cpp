#include<iostream>
using namespace std;
main(){
     int char_repeated,i;
    string array[10]={"Hyderabad","Mumbai","Delhi","Surat","Hyderabad","Mumbai","Rajasthan","Jaipur","Srinagar","Ranchi"};
     for (int i = 0; i < 10-1; i++)
    {
        for(int j=i+1;j<10-i-1;j++){
             if (array[i] == array[j])
        {
            cout<<"The string "<<array[i]<<" is repeated twice"<<endl;
        }
        }
    }

    for(i=0;i<10-1;i++){
        for(int j=i+1;j<10-i-1;j++){
            if(array[i]==array[j]){
                
            }
        }
    }
   

   
}