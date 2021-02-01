#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc != 2){
        cerr << "usage: ./TestTask.exe <file_path>" << endl;
        exit(1);
    }
    string filename (argv[1]);
    if(ifstream fs(filename); fs){
        set data(istream_iterator<string>(fs), {});
        cout << data.size() << endl;
    }
    return 0;
}