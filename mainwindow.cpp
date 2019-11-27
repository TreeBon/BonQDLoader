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
    char *argv[] = {"prog_emmc_firehose_8937_ddr.mbn"};
    int argc = sizeof(argv) / sizeof(char*) - 1;
    startReading(argc,argv);
}
