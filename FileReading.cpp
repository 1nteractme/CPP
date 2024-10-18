#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <unordered_map>

using namespace std;

string FindWord(const string &path)
{
    string output, line;
    ifstream in(path);

    if (in.is_open())
    {
        while (getline(in, line))
            output += line + " ";
        in.close();
    }
    else
        output = "File wasn't open";

    return output;
}

int Count(string s)
{
    size_t max(0);
    string maxWord;

    char *word = strtok(const_cast<char *>(s.c_str()), " ,.-!?");

    unordered_map<string, size_t> wordCount;

    while (word != nullptr)
    {
        size_t tmpLen = strlen(word);
        string currentWord(word);

        wordCount[currentWord]++; // подсчет кол-ва

        if (max < tmpLen)
        {
            max = tmpLen;
            maxWord = currentWord;
        }

        word = strtok(nullptr, " ,.-!?");
    }

    cout << "\nМаксимальная длина: " << max << "\nСлово: " << maxWord << "\nКолличество: " << wordCount[maxWord] << endl; // вывод статистики
    return 1;
}

int main()
{
    string path;

    cout << "Введите путь до файла: ";
    cin >> path;

    string str = FindWord(path);

    cout << str << endl; // вывод текста

    Count(str);

    return 0;
}
