#include<bits/stdc++.h>
using namespace std;

/* ================= BASIC FUNCTIONS ================= */

// 1
void printName() {
    cout << "My name is Keshav" << endl;
}

// 2
void welcomeMessage() {
    cout << "Welcome to C++ Functions Learning!" << endl;
}

// 3
void printString(string s) {
    cout << s << endl;
}

// 4
void checkCase(char c) {
    if (isupper(c)) cout << "Uppercase";
    else if (islower(c)) cout << "Lowercase";
    else cout << "Not a letter";
    cout << endl;
}

// 5
void charType(char c) {
    if (isalpha(c)) cout << "Letter";
    else if (isdigit(c)) cout << "Digit";
    else cout << "Symbol";
    cout << endl;
}

// 6
void voteEligibility(int age) {
    if (age >= 18) cout << "Eligible to vote";
    else cout << "Not eligible";
    cout << endl;
}

// 7
void isEmptyString(string s) {
    if (s.length() == 0) cout << "Empty String";
    else cout << "Not Empty";
    cout << endl;
}

// 8
void passwordLength(string pass) {
    if (pass.length() >= 8) cout << "Password length OK";
    else cout << "Password too short";
    cout << endl;
}

/* ================= INTERMEDIATE ================= */

// 9
void compareStrings(string a, string b) {
    if (a == b) cout << "Equal";
    else cout << "Not Equal";
    cout << endl;
}

// 10
void countVowels(string s) {
    int count = 0;
    for (char c : s)
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    cout << count << endl;
}

// 11
void onlyLetters(string s) {
    for (char c : s) {
        if (!isalpha(c)) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

// 12
void onlyDigits(string s) {
    for (char c : s) {
        if (!isdigit(c)) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

// 13
void validUsername(string s) {
    if (s.length() < 5) {
        cout << "Invalid";
        return;
    }
    for (char c : s)
        if (!isalnum(c)) {
            cout << "Invalid";
            return;
        }
    cout << "Valid";
}

// 14
void validEmail(string s) {
    if (s.find('@') != string::npos && s.find('.') != string::npos)
        cout << "Valid Email";
    else
        cout << "Invalid Email";
}

// 15
string removeSpaces(string s) {
    string r = "";
    for (char c : s)
        if (c != ' ') r += c;
    return r;
}

// 16
string titleCase(string s) {
    bool cap = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            cap = true;
        else if (cap) {
            s[i] = toupper(s[i]);
            cap = false;
        } else
            s[i] = tolower(s[i]);
    }
    return s;
}

/* ================= ADVANCED ================= */

// 17
string reverseString(string s) {
    string r = "";
    for (int i = s.length()-1; i >= 0; i--)
        r += s[i];
    return r;
}

// 18
void palindrome(string s) {
    if (s == reverseString(s)) cout << "Palindrome";
    else cout << "Not Palindrome";
}

// 19
int wordCount(string s) {
    int count = 0;
    bool inWord = false;
    for (char c : s) {
        if (c != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (c == ' ')
            inWord = false;
    }
    return count;
}

// 20
string longestWord(string s) {
    string word = "", longest = "";
    for (char c : s) {
        if (c != ' ')
            word += c;
        else {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        }
    }
    if (word.length() > longest.length())
        longest = word;
    return longest;
}

// 21
void hasSpecialChar(string s) {
    for (char c : s)
        if (!isalnum(c) && c != ' ') {
            cout << "Yes";
            return;
        }
    cout << "No";
}

// 22
string replaceVowels(string s) {
    for (char &c : s)
        if (string("aeiouAEIOU").find(c) != string::npos)
            c = '*';
    return s;
}

// 23
void anagram(string a, string b) {
    if (a.length() != b.length()) {
        cout << "Not Anagram";
        return;
    }
    int count[256] = {0};
    for (char c : a) count[c]++;
    for (char c : b) count[c]--;
    for (int i = 0; i < 256; i++)
        if (count[i] != 0) {
            cout << "Not Anagram";
            return;
        }
    cout << "Anagram";
}

// 24
string removeDuplicates(string s) {
    string r = "";
    for (char c : s)
        if (r.find(c) == string::npos)
            r += c;
    return r;
}

/* ================= MIXED ================= */

// 25
void printWords(string s) {
    string word = "";
    for (char c : s) {
        if (c != ' ')
            word += c;
        else {
            cout << word << endl;
            word = "";
        }
    }
    cout << word << endl;
}

// 26
void inputUntilStop() {
    string s;
    while (true) {
        cin >> s;
        if (s == "stop") break;
    }
}

// 27
void loginSystem() {
    string u, p;
    int attempts = 3;
    while (attempts--) {
        cin >> u >> p;
        if (u == "admin" && p == "1234") {
            cout << "Login Success";
            return;
        }
        cout << "Wrong\n";
    }
    cout << "Blocked";
}

// 28
void charStats(string s) {
    int u=0,l=0,d=0,sp=0;
    for (char c : s) {
        if (isupper(c)) u++;
        else if (islower(c)) l++;
        else if (isdigit(c)) d++;
        else sp++;
    }
    cout << u<<" "<<l<<" "<<d<<" "<<sp;
}

// 29
void menuSystem() {
    int ch;
    string name;
    do {
        cin >> ch;
        switch (ch) {
            case 1: cin >> name; break;
            case 2: cout << "Hello " << name << endl; break;
            case 3: cout << "Logout"; break;
        }
    } while (ch != 3);
}

// 30
void strongPassword(string s) {
    bool u=false,d=false,sp=false;
    for (char c : s) {
        if (isupper(c)) u=true;
        else if (isdigit(c)) d=true;
        else if (!isalnum(c)) sp=true;
    }
    if (u && d && sp) cout << "Strong";
    else cout << "Weak";
}

// 31
void namesUntilDone() {
    string s;
    while (true) {
        cin >> s;
        if (s == "done") break;
        cout << s << endl;
    }
}

// 32
string chatFilter(string s) {
    if (s.find("bad") != string::npos)
        return "***";
    return s;
}

// 33
void fileValidation(string s) {
    if (s.ends_with(".txt") || s.ends_with(".pdf") || s.ends_with(".jpg"))
        cout << "Valid File";
    else
        cout << "Invalid File";
}

// 34
void repeatedWords(string s) {
    string words[100];
    int count[100] = {0}, n = 0;
    string word = "";
    for (char c : s + " ") {
        if (c != ' ')
            word += c;
        else {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (words[i] == word) {
                    count[i]++;
                    found = true;
                }
            }
            if (!found) {
                words[n] = word;
                count[n++] = 1;
            }
            word = "";
        }
    }
    for (int i = 0; i < n; i++)
        if (count[i] > 1)
            cout << words[i] << " ";
}

/* ================= MAIN ================= */

int main() {
    printName();
    welcomeMessage();
    cout << titleCase("hello world from cpp") << endl;
    cout << reverseString("coding") << endl;
    return 0;
}
