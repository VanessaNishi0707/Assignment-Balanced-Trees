#include <iostream> // Required for input and output
using namespace std;
#include <string>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>


enum Color {
    RED,
    BLACK
};

struct Saying {
    wstring hawaiian[2]; // [0] is key and saying in Hawaiian. [1] is meaning in Hawaiian
    wstring english[2]; // [0] is saying in English. [1] is saying in English

    Color color;

    Saying *left;
    Saying *right;
    Saying *parent;
};

class Dictionary {
    public:
        Saying saying;

};

int main() {
    Dictionary dictionary;

    wchar_t waname[] = L"Aia a pa'i 'ia ka maka, ha'i 'ia kupuna nāna 'oe" ;
    char16_t* text2;

    wcout << waname << endl;

    return 0;
}