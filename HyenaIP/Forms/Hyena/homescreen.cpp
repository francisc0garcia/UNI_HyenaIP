#include "homescreen.h"
#include "ui_homescreen.h"

HomeScreen::HomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}

void HomeScreen::on_BtnImageDAQ_clicked()
{
    //imageacquisition f;
    //f.show();
}
