/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionUpper;
    QAction *actionLower;
    QAction *actionPaste;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionSave_as_2;
    QAction *actionEcrypt;
    QAction *actionDecrypt;
    QAction *actionMerge;
    QAction *actionCharacters;
    QAction *actionWords;
    QAction *actionLines;
    QAction *actionA_specific_word;
    QAction *actionSearch_a_Word;
    QAction *actionTurn_1st_Caps;
    QAction *actionClear_File;
    QAction *actionExit;
    QAction *actionAbout_Notepad;
    QAction *actionNew_2;
    QAction *actionOpen_2;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QMenu *menuCount;
    QMenu *menuFormat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionUpper = new QAction(MainWindow);
        actionUpper->setObjectName(QString::fromUtf8("actionUpper"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Images/Uppercase.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpper->setIcon(icon1);
        actionLower = new QAction(MainWindow);
        actionLower->setObjectName(QString::fromUtf8("actionLower"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Images/Lowercase.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLower->setIcon(icon2);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionSave_as_2 = new QAction(MainWindow);
        actionSave_as_2->setObjectName(QString::fromUtf8("actionSave_as_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/Images/SaveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as_2->setIcon(icon3);
        actionEcrypt = new QAction(MainWindow);
        actionEcrypt->setObjectName(QString::fromUtf8("actionEcrypt"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/Images/encrypt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEcrypt->setIcon(icon4);
        actionDecrypt = new QAction(MainWindow);
        actionDecrypt->setObjectName(QString::fromUtf8("actionDecrypt"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/Images/decrypt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecrypt->setIcon(icon5);
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/Images/Merge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerge->setIcon(icon6);
        actionCharacters = new QAction(MainWindow);
        actionCharacters->setObjectName(QString::fromUtf8("actionCharacters"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/Images/character.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCharacters->setIcon(icon7);
        actionWords = new QAction(MainWindow);
        actionWords->setObjectName(QString::fromUtf8("actionWords"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/Images/wordcount.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWords->setIcon(icon8);
        actionLines = new QAction(MainWindow);
        actionLines->setObjectName(QString::fromUtf8("actionLines"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/Images/countLines.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLines->setIcon(icon9);
        actionA_specific_word = new QAction(MainWindow);
        actionA_specific_word->setObjectName(QString::fromUtf8("actionA_specific_word"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/Images/Searchword.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionA_specific_word->setIcon(icon10);
        actionSearch_a_Word = new QAction(MainWindow);
        actionSearch_a_Word->setObjectName(QString::fromUtf8("actionSearch_a_Word"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch_a_Word->setIcon(icon11);
        actionTurn_1st_Caps = new QAction(MainWindow);
        actionTurn_1st_Caps->setObjectName(QString::fromUtf8("actionTurn_1st_Caps"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/rec/Images/firstCaps.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTurn_1st_Caps->setIcon(icon12);
        actionClear_File = new QAction(MainWindow);
        actionClear_File->setObjectName(QString::fromUtf8("actionClear_File"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/rec/Images/Clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_File->setIcon(icon13);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/rec/Images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon14);
        actionAbout_Notepad = new QAction(MainWindow);
        actionAbout_Notepad->setObjectName(QString::fromUtf8("actionAbout_Notepad"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/rec/Images/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Notepad->setIcon(icon15);
        actionNew_2 = new QAction(MainWindow);
        actionNew_2->setObjectName(QString::fromUtf8("actionNew_2"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/rec/Images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_2->setIcon(icon16);
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/rec/Images/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_2->setIcon(icon17);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 781, 481));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuCount = new QMenu(menubar);
        menuCount->setObjectName(QString::fromUtf8("menuCount"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuCount->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew_2);
        menuFile->addAction(actionOpen_2);
        menuFile->addSeparator();
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave_as_2);
        menuFile->addSeparator();
        menuFile->addAction(actionMerge);
        menuFile->addAction(actionExit);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEcrypt);
        menuEdit->addAction(actionDecrypt);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSearch_a_Word);
        menuEdit->addAction(actionClear_File);
        menuAbout->addAction(actionAbout_Notepad);
        menuCount->addAction(actionCharacters);
        menuCount->addAction(actionWords);
        menuCount->addAction(actionLines);
        menuCount->addAction(actionA_specific_word);
        menuFormat->addAction(actionUpper);
        menuFormat->addAction(actionLower);
        menuFormat->addAction(actionTurn_1st_Caps);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as..", nullptr));
        actionUpper->setText(QCoreApplication::translate("MainWindow", "UpperCase", nullptr));
        actionLower->setText(QCoreApplication::translate("MainWindow", "LowerCase", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionSave_as_2->setText(QCoreApplication::translate("MainWindow", "Save as..", nullptr));
        actionEcrypt->setText(QCoreApplication::translate("MainWindow", "Ecrypt", nullptr));
        actionDecrypt->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        actionMerge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        actionCharacters->setText(QCoreApplication::translate("MainWindow", "Characters", nullptr));
        actionWords->setText(QCoreApplication::translate("MainWindow", "Words", nullptr));
        actionLines->setText(QCoreApplication::translate("MainWindow", "Lines", nullptr));
        actionA_specific_word->setText(QCoreApplication::translate("MainWindow", "A Word..", nullptr));
        actionSearch_a_Word->setText(QCoreApplication::translate("MainWindow", "Search a Word..", nullptr));
        actionTurn_1st_Caps->setText(QCoreApplication::translate("MainWindow", "Turn 1st Caps", nullptr));
        actionClear_File->setText(QCoreApplication::translate("MainWindow", "Empty File", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout_Notepad->setText(QCoreApplication::translate("MainWindow", "About Notepad", nullptr));
        actionNew_2->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuCount->setTitle(QCoreApplication::translate("MainWindow", "Count", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
