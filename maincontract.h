#ifndef MAINCONTRACT_H
#define MAINCONTRACT_H

#include <QObject>

class MainContract
{
public:
    //view interface
    class View {
    public:
        virtual ~View();
        virtual void ShowResultMsg(QString msg) =0;
    };

    //presenter interface
    class Presenter : public QObject {
    public:
        virtual ~Presenter();
        virtual void IncreaseValue() = 0;
        virtual void DecreaseValue() = 0;
        virtual void change(QString $num) = 0;
    };
};

#endif // MAINCONTRACT_H
