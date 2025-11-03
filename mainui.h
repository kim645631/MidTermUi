#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainUi;
}
QT_END_NAMESPACE

class MainUi : public QWidget
{
    Q_OBJECT

public:
    MainUi(QWidget *parent = nullptr);
    ~MainUi();

private:
    Ui::MainUi *ui;
};
#endif // MAINUI_H
