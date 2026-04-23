#include <iostream>

using namespace std;

int main()
{
   char ch;
   cout<<"enter character :";
   cin>>ch;

   switch(ch){
   case 'a':
       cout<<"a is a vowel ";
       break;
    case 'e':
        cout<<"e is a vowel";
        break;
    case 'i':
        cout<<"i is vowel";
        break ;
    case 'o':
        cout<<"o is a vowel";
        break;
    case 'u':
            cout<<"u is a vowel";
            break;
    default:
        cout<<ch<<" is no a vovel it is consonant ";
   }

    return 0;
}
