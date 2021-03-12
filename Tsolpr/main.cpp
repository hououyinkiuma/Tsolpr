#include<iostream>
#include"utils.h"
#include<cstdlib>

using namespace std;
using namespace Tsolpr;

int main(int argc, const char* argv[]) {
	int t;

}

int TestFunction(const char* image_adress) {
    auto files = Tsolpr::utils::get_files(image_adress);
    if (files.size() == 0) {
        cout << "files open error." << endl;
        return 0;
    }
    cout << "test start.\n";


}