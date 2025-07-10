#include <bits/stdc++.h>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <windows.h>
#include <thread>
using namespace std;
using namespace cv;
string ASCII(int pixel)
{
    string s = "        _.,-=+:;cba!?0123456789$W#@N";
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
    cout << "Enter the path of video: ";
    getline(cin, path);
    system("cls");
    VideoCapture cap(path);
    double fps = cap.get(CAP_PROP_FPS);
    int fd = 1000 / fps, w = 250, h;
    int fw = cap.get(CAP_PROP_FRAME_WIDTH), fh = cap.get(CAP_PROP_FRAME_HEIGHT);
    h = w * fh / fw * 0.4194;
    Mat frame, gframe, rframe;
    while(1)
    {
        cap >> frame;
        if(frame.empty())
        break;
        cvtColor(frame, gframe, COLOR_BGR2GRAY);
        resize(gframe, rframe, Size(w, h), 0, 0, INTER_LINEAR);
        string aframe = "";
        for(int i = 0; i<h; i++)
        {
            for(int j = 0; j<w; j++)
            aframe += ASCII(rframe.at<uchar>(i, j));
            aframe += '\n';
        }
        reset();
        cout << aframe;
    }
    return 0;
}
