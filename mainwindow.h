#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "maincontract.h"
#include "mainpresenter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow , public MainContract::View
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_pushButtonIncrease_clicked();

    void on_pushButtondecress_clicked();

    void on_lineEdit_textChanged(QString num);

private:
    void ShowResultMsg(QString msg) override;

private:
    Ui::MainWindow *ui;
    MainPresenter *presenter_p;
};
#endif // MAINWINDOW_H
