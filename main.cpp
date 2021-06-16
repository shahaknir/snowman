#include <iostream>
using namespace std;
#include "snowman.hpp"

int main() {

    string s = ariel::snowman(11111111);
    /**
     * Should print:
         _===_
         (.,.)
        <( : )>
         ( : )
     *
     */
     cout << "First SnowMan: " << endl;
    cout << s << "\n\n"<<endl;
    cout << "Second SnowMan: " << endl;
    cout << ariel::snowman(11114411) <<"\n\n"<< endl;
    /**
     * Should print:
_===_
(.,.)
( : )
( : )
	*/
    cout << "Third SnowMan: " << endl;
    cout << ariel::snowman(33232124) <<"\n\n"<< endl;
    /**
     * Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
    try {
        cout << ariel::snowman(5) <<"\n\n"<< endl;   // Exception - not a valid code
    } catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid code '5'"
    }
    cout << "Fourth SnowMan: " << endl;
    cout << ariel::snowman(13121312) <<"\n\n"<< endl;
    /**
     * Should print:
         _===_
         (._o)
        <( : )\
         (" ")

     */

    cout << "Fifth SnowMan: " << endl;
    cout << ariel::snowman(22222211) <<"\n\n"<< endl;
    /**
     * Should print:
  ___
 .....
\(o.o)/
 ( : )
 ( : )

     */

    cout << "sixth SnowMan: " <<"\n\n"<< endl;
    cout << ariel::snowman(14141414) << "\n\n"<<endl;
    /**
     * Should print:

 _===_
 (. -)
<( : )
 (   )

     */

    cout << "Seventh SnowMan: " << endl;
    cout << ariel::snowman(43214321) << "\n\n"<<endl;
    /**
     * Should print:
  ___
 (_*_)
 (o_.)
 (] [)\
 ( : )

     */

    return 0;
}
