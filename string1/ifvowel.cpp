#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    int count = 0;
    

    for(int i = 0;  i<n; i++) {
            if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
                str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
                str[i] == 'u' || str[i] == 'U')
                count++;
    }

    cout << count << endl;
    return 0;
}
