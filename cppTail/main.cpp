#include <iostream>
#include <string>
#include <fstream>

void printLastKLines(const char *filename, const int K)
{
    std::ifstream file (filename);
    std::string stringArray[K];
    int size = 0;

    while (file.peek() != EOF)
    {
        getline(file, stringArray[size % K]);
        size++;
    }

    int startIndex = size > K ? (size % K) : 0;
    int count      = std::min(K, size);

    for (int i = 0; i < count; i++)
    {
        std::cout << stringArray[(startIndex + i) % K] << std::endl;
    }
}

int main(int argc, char *argv[])
{
    const char *testfile = "test.txt";
    printLastKLines(testfile, 5);
    return 0;
}

