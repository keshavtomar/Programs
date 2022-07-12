#include <iostream>
#include <climits>
#include <algorithm>
#include <fstream>
#include <cstring>

using namespace std;

int main(void)
{
    string prefix;
    cout << "Give a name, with which you will access this snipett : " << endl;
    getline(cin, prefix);
    ifstream in;
    in.open("code.txt");

    string st;

    ofstream out;
    out.open("json.txt");

    out << "{\n\t\"Print to console\": {\n\t\t\"prefix\": \"" << prefix << "\",\n\t\t\"body\": [\n";
    while (in.eof() == 0)
    {
        // using getline to fill the whole line in st
        getline(in, st);
        out << "\"" << st << "\"," << endl;
    }
    out << "\n\t\t],\n\t}\n}";
    in.close();
    out.close();
}
