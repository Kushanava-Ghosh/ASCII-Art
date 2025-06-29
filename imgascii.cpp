#include <bits/stdc++.h>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <windows.h>
#include <thread>
#include <unistd.h>
using namespace std;
using namespace cv;
string ASCII(int pixel)
{
    string s = "N@#W$9876543210?!abc;:+=-,._                ";
    return string(1, s[pixel * s.length() / 256]);
}
string invASCII(int pixel)
{
    string s = "                _.,-=+:;cba!?0123456789$W#@N";
    return string(1, s[pixel * s.length() / 256]);
}
void reset() 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {0, 0};
    SetConsoleCursorPosition(hConsole, pos);
}
int main()
{
    string path;
    cout << "Enter the path of image: ";
    getline(cin, path);
    system("cls");
    Mat img = imread(path, IMREAD_GRAYSCALE), rimg;
    if(img.empty())
    {
        cerr << "Could not load image" << endl;
        return 1;
    }
    int w = 250, h;
    h = w * img.rows / img.cols * 0.4194;
    resize(img, rimg, Size(w, h), 0, 0, INTER_LINEAR);
    string aimg = "";
    for(int i = 0; i<h; i++)
    {
        for(int j = 0; j<w; j++)
        aimg += ASCII(rimg.at<uchar>(i, j));
        aimg += " ";
        for(int j = 0; j<w; j++)
        aimg += invASCII(rimg.at<uchar>(i, j));
        aimg += '\n';
    }
    cout << aimg;
    sleep(30);
    return 0;
}
