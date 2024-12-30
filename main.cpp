#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream input("data.txt");
    ofstream output("output.txt");
    string line;
    int i = 1;
    while(getline(input, line)) {
        string package = "";
        int x = 6;
        if(i & 1) {
            while(line[x] != ' ')
                package += line[x++];
            output << "sudo pacman -Rns --noconfirm " << package << endl;
        }
        i++;
    }
    int status = system("bash output.txt");
    if(status == 0)
        cout << "The Command was successfully run and all the apps in the list were removed" << endl; 
    else 
        cout << "An error occoured" << endl;

    return 0;
}
