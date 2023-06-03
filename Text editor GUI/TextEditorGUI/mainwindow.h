#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionUpper_triggered();

    void on_actionLower_triggered();

    void on_actionSave_as_2_triggered();

    void on_actionEcrypt_triggered();

    void on_actionDecrypt_triggered();

    void on_actionMerge_triggered();

    void on_actionWords_triggered();

    void on_actionWords_2_triggered();

    void on_actionLines_triggered();

    void on_actionCharacters_triggered();

    void on_actionA_specific_word_triggered();

    void on_actionSearch_a_Word_triggered();

    void on_actionTurn_1st_Caps_triggered();

    void on_actionClear_File_triggered();

    void on_actionExit_triggered();

    void on_actionAbout_Notepad_triggered();

    void on_actionNew_2_triggered();

    void on_actionOpen_2_triggered();

private:
    Ui::MainWindow *ui;
    QString file_path_;
};
#endif // MAINWINDOW_H
