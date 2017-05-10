#ifndef MYMESG_H
#define MYMESG_H
#include <QObject>
class myMesg:public QObject
{
     Q_OBJECT
public:
    myMesg() {}
signals:
   void notify_gui(QString);
};
#endif
