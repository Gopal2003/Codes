/*Today is such a beautiful evening after heavy rainfall and kids decided to play in playground, then at the same moment they 
are deligthed to see the colors of Rainbow in the sky. They observe seven colors like Violet, Indigo,Blue,Green,Yellow,Orange,
Red i.e 'V','I','B','G','Y','O','R'.Now your task is to remove a color which is mentioned above as input and display the remaining 
colors of Rainbow, if the color which you want to delete that is not comes under VIBGYOR then display message as "Color not available".*/

#include<iostream>
using namespace std;
main(){
    int i,j,found=0;
    char array[7]={'V','I','B','G','Y','O','R'},color;
    cout<<"Enter the color that you want to remove."<<endl;
    cin>>color;
    int size=sizeof(array)/sizeof(array[0]);
    if(color>='A' && color<='Z'){
        for(i=0;i<7;i++){
        if(array[i]==color){
            for(j=i;j<7;j++){
                array[j]=array[j+1];
            }
            found++;
        }
    }
    if(found>=1){
    for(i=0;i<6;i++){
        cout<<array[i]<<" ";
    }
    }
    }
    if(found==0){
        cout<<"Color not available"<<endl;
    }

}