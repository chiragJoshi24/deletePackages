#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream input("data.txt");
    string line;
    int i = 1;
    while(getline(input, line)) {
        string package = "";
        int x = 6;
        if(i & 1) {
            while(line[x] != ' ')
                package += line[x++];
            cout << "sudo pacman -Rns --noconfirm " << package << endl;
        }
        i++;
    }
    return 0;
}
