#include <iostream>
using namespace std;
main()
{
    int char_repeated;
    char charSearch,elem;
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    char arrName[size] = {'G', 'O', 'P', 'A', 'L', 'A', 'G', 'A', 'R', 'W', 'A', 'L'};
    cout << "Enter the character that you want to search" << endl;
    cin >> charSearch;
    for (int i = 0; i < size; i++)
    {
        if (charSearch == arrName[i])
        {
            cout << " Character found " << endl;
            char_repeated++;
        }
    }
    int char_count = char_repeated;
    if (char_repeated < 1)
    {
        cout << "Character does not exist" << endl;
    }
    else if (char_repeated == 1)
    {
        cout << "The character is repeated only once" << endl;
    }
    else
    {
        cout << "The character " << charSearch << " is repeated " << char_count << " times" << endl;
    }
    for(int i=0;i<size; i++){
        for(int j=i+1;j<size;j++){
            if(arrName[i]>arrName[j]){
            int temp=arrName[i];
            arrName[i]=arrName[j];
            arrName[j]=temp;
            }
        }
    }
    cout<<"elements of Array after sorting in ascending order"<<endl;

    for(int i=0;i<size;i++){
        cout<<arrName[i]<<endl;
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arrName[i]==arrName[j]){
                    for(int k=j;k<size;k++){
                        arrName[k]=arrName[k+1];
                    }
                    size--;
                    j--;
            }
        }
    }
    cout<<"Elements after duplicate deletion "<<endl;
    for(int i=0;i<size;i++){
        cout<<arrName[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element that you want to insert in first position"<< endl;
    cin>>elem;
    size++;
    for(int i=size;i>=0;i--){
        // if(i==7){
        //  size++;
        // //  break;
        //    }
        arrName[i]=arrName[i-1];
        if(i==0){
            arrName[i]=elem;
        }
    }

    cout<<endl<<"Elements after inserting in first position"<<endl;

    for(int i=0;i<size;i++){
        cout<<arrName[i]<<endl;
    }

     for(int i=0;i<size;i++){
        if(i==4){
            for(i=4;i<size;i++){
            arrName[i]=arrName[i+1];
            }
        }
     }
     size--;

     cout<<endl<<"Elements of array after deleting the 5th position's element are "<<endl;
    
     for(int i=0;i<size;i++){
        cout<<arrName[i]<<endl;
     }
   
    
}