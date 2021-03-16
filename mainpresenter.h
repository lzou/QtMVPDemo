#ifndef MAINPRESENTER_H
#define MAINPRESENTER_H

#include "maincontract.h"

class MainPresenter : public MainContract::Presenter
{
    Q_OBJECT
public:
    MainPresenter(MainContract::View *v);
    ~MainPresenter() override;

    void IncreaseValue() override;
    void DecreaseValue() override;
    void change(QString $num) override;

private:
    Q_DISABLE_COPY(MainPresenter)
    MainContract::View *v_p;
    int value_;
};

#endif // MAINPRESENTER_H
