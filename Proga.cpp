#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    char* c[] = {
   (char*)"ENTER",
   (char*)"NEW",
   (char*)"POINT",
   (char*)"FIRST"
    };
    char** cp[] = { c + 3, c + 2, c + 1, c };
    char*** cpp = cp;


    cout << ("%s", **++cpp);
    cout << ("%s ", *-- * ++cpp + 3);
    cout << ("%s", *cpp[-2] + 3);
    cout << ("%s\n", cpp[-1][-1] + 1);
    return 0;
}
