#include "mainwindow.h"
#include "ui_mainwindow.h"

extern "C" {

#include "firehose.c"
#include "qdl.c"
#include "sahara.c"
#include "util.c"
#include "patch.c"
#include "program.c"
#include "ufs.c"

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    char *argv[2];
    argv[0] = (char*)"prog_emmc_firehose_8937_ddr.mbn";
    argv[1] = (char*)"rawprogram1.xml";
    argv[2] = (char*)"patch0.xml";
    int argc = 3;
    startReading(argc,argv);
}
