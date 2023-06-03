#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QInputDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    QFile file(file_path_);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not Open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionUpper_triggered()
{

    QString text = ui->textEdit->toPlainText();
    text = text.toUpper();
    ui->textEdit->clear();
    ui->textEdit->setText(text);

}


void MainWindow::on_actionLower_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text = text.toLower();
    ui->textEdit->clear();
    ui->textEdit->setText(text);

}


void MainWindow::on_actionSave_as_2_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Save the File");
    QFile file(file_name);
    file_path_ = file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not Open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionEcrypt_triggered()
{
    int temp;
    QString encryptedText = "";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    for(QChar letter : text){
        temp = letter.unicode();
        temp += 1;
        encryptedText += QChar(temp);
    }
    ui->textEdit->setText(encryptedText);
}


void MainWindow::on_actionDecrypt_triggered()
{
    int temp;
    QString encryptedText = "";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->clear();
    for(QChar letter : text){
        temp = letter.unicode();
        temp -= 1;
        encryptedText += QChar(temp);
    }
    ui->textEdit->setText(encryptedText);
}


void MainWindow::on_actionMerge_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(file_name);
    file_path_ = file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not Open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    file.close();
    ui->textEdit->append(text);
}


void MainWindow::on_actionLines_triggered()
{
    int count = 0;
    QString text = ui->textEdit->toPlainText();
    for(QChar letter : text){
        if(letter == '\n'){
            count++;
        }
    }
    count += 1;
    QMessageBox msgBox;
    msgBox.addButton(QMessageBox::Ok);
    msgBox.setText("Number of lines is this file is: " +QString::number(count) );
    msgBox.exec();
}


void MainWindow::on_actionCharacters_triggered()
{
    int count = 0;
    QString text = ui->textEdit->toPlainText();
    for(QChar letter : text){
        count++;
    }
    QMessageBox msgBox;
    msgBox.addButton(QMessageBox::Ok);
    msgBox.setText("Number of characters is this file is: " +QString::number(count) );
    msgBox.exec();
}


void MainWindow::on_actionWords_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(file_name);
    file_path_ = file_name;
    int count = -1;
    if((file.open(QFile::ReadOnly | QFile::Text))){
        QTextStream read(&file);
        while(!read.atEnd()){
            QString str;
            read >> str;
            count++;
        }
    }
    if(count == 0){
        count = 1;
    } else if(count == -1){
        count = 0;
    }
    QMessageBox msgBox;
    msgBox.addButton(QMessageBox::Ok);
    msgBox.setText("Number of words is this file is: " +QString::number(count) );
    msgBox.exec();
}


void MainWindow::on_actionA_specific_word_triggered()
{
    bool ok;
    int count = 0;
    QString userWord = QInputDialog::getText(this, tr("Please enter the Word you want to search for:"),
                                            tr("Word :"), QLineEdit::Normal,
                                            QDir::home().dirName(), &ok);
    QString text = ui->textEdit->toPlainText();

    if(text.contains(userWord, Qt::CaseInsensitive)){
        count = text.count(userWord, Qt::CaseInsensitive);
    } else {
        QMessageBox::information(this, "Result", "Word is NOT Found!");
    }
    QMessageBox msgBox;
    msgBox.addButton(QMessageBox::Ok);
    msgBox.setText("Number of times this word is found is: " +QString::number(count) );
    msgBox.exec();
}


void MainWindow::on_actionSearch_a_Word_triggered()
{
    bool ok;
    QString userWord = QInputDialog::getText(this, tr("Please enter the Word you want to search for:"),
                                            tr("Word :"), QLineEdit::Normal,
                                            QDir::home().dirName(), &ok);
    QString text = ui->textEdit->toPlainText();
    if(text.contains(userWord, Qt::CaseInsensitive)){
        QMessageBox::information(this, "Result", "Word is Found!");
    } else {
        QMessageBox::information(this, "Result", "Word is NOT Found!");
    }
}


void MainWindow::on_actionTurn_1st_Caps_triggered()
{
    int temp = 0;
    QString result = "";
    QString text = ui->textEdit->toPlainText();
    for(QChar letter : text){
        if(temp == 0){
            result += letter.toUpper();
            temp = 1;
        } else if(letter == ' ' || letter == '\n'){
            temp = 0;
            result += letter;
        } else {
            result += letter.toLower();
        }
    }
    ui->textEdit->clear();
    ui->textEdit->setText(result);
}


void MainWindow::on_actionClear_File_triggered()
{
    ui->textEdit->setText("");
}


void MainWindow::on_actionExit_triggered()
{
    QMessageBox::information(this, "Exit", "Thank You for using Notepad!");
    close();
}


void MainWindow::on_actionAbout_Notepad_triggered()
{
    QString about_text;
    about_text = "Auther    : Merna Islam\n";
    about_text += "Date     : 12/05/2022\n";
    about_text += "Some info: Some Random info written later.\n";
    QMessageBox::about(this, "About Notepad", about_text);
}


void MainWindow::on_actionNew_2_triggered()
{
    file_path_ = "";
    ui->textEdit->setText("");
}


void MainWindow::on_actionOpen_2_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(file_name);
    file_path_ = file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"..","File not Open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

