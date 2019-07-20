#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void doXml(const QString operate);

private slots:


    void on_pushButtonFind_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonUpdate_clicked();

    void on_pushButtonAdd_clicked();

    void on_pushButtonDisplay_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
