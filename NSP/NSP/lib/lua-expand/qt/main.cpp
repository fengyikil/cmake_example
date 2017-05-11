#include<QApplication>
#include<Windows.h>
#include "mainwindow.h"
#include "myMesg.h"
//class ui_thread: public QThread
//{
//public:
//    ui_thread() {}
//   void run(){
//        int b=1;
//        QApplication app(b, NULL);
//        MainWindow w;
//        w.show();
//        app.exec();
//    }
//};

DWORD WINAPI ThreadOne(LPVOID lpParameter)
{
    int b = 1;
    QApplication app(b, NULL);
    MainWindow w;
    w.show();
    app.exec();

    return 0;
}

static myMesg msg;
int main()
{
    HANDLE HOne;
    HOne=CreateThread(NULL,0,ThreadOne,NULL,0,NULL);

    while (1) {
        printf("hello\n");
        Sleep(100);
    }
}
