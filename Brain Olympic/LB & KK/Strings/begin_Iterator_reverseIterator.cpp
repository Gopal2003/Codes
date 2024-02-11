#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "Gopal Agarwal";
    /**
     * !-Farward Iterator
    */

   /*
    string::iterator it = name.begin();
    string::iterator  ch = it;
    *it = 'P';
    for( it; it != name.end() ; it++ )
    cout << *it;
    */

    /**
     * !- Reverse Iterator
    */

   /*
   string :: reverse_iterator rit = name.rbegin();
   *rit = 'G';
   for(;rit != name.rend(); rit++)
   {
        cout << *rit;
   }
   */
   

  /**
   * !- Cbegin()
  */

    /*
    string :: const_iterator cit = name.cbegin();
    for( ; cit != name.cend(); cit++)
    {
        cout << *cit;
    }
    */
    


    
   
   
    return 0;
}