#include "mainpresenter.h"
#include <QDebug>

MainPresenter::MainPresenter(MainContract::View *v)
{
    v_p = v;
    value_ = 0;
}

MainPresenter::~MainPresenter() {

}

void MainPresenter::IncreaseValue() {
    value_ ++;
    v_p->ShowResultMsg(QString::number(value_));
}

void MainPresenter::DecreaseValue() {
    value_ --;
    v_p->ShowResultMsg(QString::number(value_));
}

void MainPresenter::change(QString $num) {
    qDebug()<<$num<<endl;
    value_ = $num.toInt();
    v_p->ShowResultMsg(QString::number(value_));
}
