/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoadCSG;
    QAction *actionSaveCSG;
    QAction *actionLoadIMG;
    QAction *actionSaveIMG;
    QAction *actionAppendCSG;
    QAction *actionClearCSG;
    QAction *actionSwapLRRoot;
    QAction *actionUnjoinRoot;
    QAction *actionDrawSobel;
    QAction *actionDraw_BB;
    QAction *actionClone;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *HLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpinBox *currentNode;
    QCheckBox *checkBox_drawCurrent;
    QFrame *line_4;
    QLabel *label_7;
    QComboBox *Operation;
    QLabel *label;
    QSpinBox *id_filsGauche;
    QFrame *line;
    QLabel *label_2;
    QSpinBox *id_filsDroit;
    QPushButton *create_oper;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QLabel *label_6;
    QComboBox *prim_type;
    QSpinBox *nb_sides;
    QPushButton *create_prim;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSlider *translationX;
    QDoubleSpinBox *dsb_tx;
    QHBoxLayout *horizontalLayout_3;
    QSlider *translationY;
    QDoubleSpinBox *dsb_ty;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QSlider *rotation;
    QDoubleSpinBox *dsb_Rot;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QSlider *scaleX;
    QDoubleSpinBox *dsb_sx;
    QHBoxLayout *horizontalLayout_6;
    QSlider *scaleY;
    QDoubleSpinBox *dsb_sy;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetTransfo;
    QPushButton *applyTransfo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuCSG;
    QMenu *menuImage;
    QMenu *menuCurNode;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1038, 921);
        actionLoadCSG = new QAction(MainWindow);
        actionLoadCSG->setObjectName(QStringLiteral("actionLoadCSG"));
        actionSaveCSG = new QAction(MainWindow);
        actionSaveCSG->setObjectName(QStringLiteral("actionSaveCSG"));
        actionLoadIMG = new QAction(MainWindow);
        actionLoadIMG->setObjectName(QStringLiteral("actionLoadIMG"));
        actionSaveIMG = new QAction(MainWindow);
        actionSaveIMG->setObjectName(QStringLiteral("actionSaveIMG"));
        actionAppendCSG = new QAction(MainWindow);
        actionAppendCSG->setObjectName(QStringLiteral("actionAppendCSG"));
        actionClearCSG = new QAction(MainWindow);
        actionClearCSG->setObjectName(QStringLiteral("actionClearCSG"));
        actionSwapLRRoot = new QAction(MainWindow);
        actionSwapLRRoot->setObjectName(QStringLiteral("actionSwapLRRoot"));
        actionUnjoinRoot = new QAction(MainWindow);
        actionUnjoinRoot->setObjectName(QStringLiteral("actionUnjoinRoot"));
        actionDrawSobel = new QAction(MainWindow);
        actionDrawSobel->setObjectName(QStringLiteral("actionDrawSobel"));
        actionDraw_BB = new QAction(MainWindow);
        actionDraw_BB->setObjectName(QStringLiteral("actionDraw_BB"));
        actionClone = new QAction(MainWindow);
        actionClone->setObjectName(QStringLiteral("actionClone"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        HLayout = new QHBoxLayout();
        HLayout->setSpacing(6);
        HLayout->setObjectName(QStringLiteral("HLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        currentNode = new QSpinBox(centralWidget);
        currentNode->setObjectName(QStringLiteral("currentNode"));

        horizontalLayout_7->addWidget(currentNode);


        verticalLayout->addLayout(horizontalLayout_7);

        checkBox_drawCurrent = new QCheckBox(centralWidget);
        checkBox_drawCurrent->setObjectName(QStringLiteral("checkBox_drawCurrent"));

        verticalLayout->addWidget(checkBox_drawCurrent);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(4);
        line_4->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_4);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        Operation = new QComboBox(centralWidget);
        Operation->setObjectName(QStringLiteral("Operation"));

        verticalLayout->addWidget(Operation);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        id_filsGauche = new QSpinBox(centralWidget);
        id_filsGauche->setObjectName(QStringLiteral("id_filsGauche"));

        verticalLayout->addWidget(id_filsGauche);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        id_filsDroit = new QSpinBox(centralWidget);
        id_filsDroit->setObjectName(QStringLiteral("id_filsDroit"));

        verticalLayout->addWidget(id_filsDroit);

        create_oper = new QPushButton(centralWidget);
        create_oper->setObjectName(QStringLiteral("create_oper"));

        verticalLayout->addWidget(create_oper);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(4);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        prim_type = new QComboBox(centralWidget);
        prim_type->setObjectName(QStringLiteral("prim_type"));

        verticalLayout->addWidget(prim_type);

        nb_sides = new QSpinBox(centralWidget);
        nb_sides->setObjectName(QStringLiteral("nb_sides"));
        nb_sides->setMinimum(3);
        nb_sides->setValue(4);

        verticalLayout->addWidget(nb_sides);

        create_prim = new QPushButton(centralWidget);
        create_prim->setObjectName(QStringLiteral("create_prim"));

        verticalLayout->addWidget(create_prim);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(4);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        translationX = new QSlider(centralWidget);
        translationX->setObjectName(QStringLiteral("translationX"));
        translationX->setEnabled(true);
        translationX->setMinimum(-500);
        translationX->setMaximum(500);
        translationX->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(translationX);

        dsb_tx = new QDoubleSpinBox(centralWidget);
        dsb_tx->setObjectName(QStringLiteral("dsb_tx"));
        dsb_tx->setDecimals(1);
        dsb_tx->setMinimum(-500);
        dsb_tx->setMaximum(500);

        horizontalLayout_2->addWidget(dsb_tx);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        translationY = new QSlider(centralWidget);
        translationY->setObjectName(QStringLiteral("translationY"));
        translationY->setEnabled(true);
        translationY->setMinimum(-500);
        translationY->setMaximum(500);
        translationY->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(translationY);

        dsb_ty = new QDoubleSpinBox(centralWidget);
        dsb_ty->setObjectName(QStringLiteral("dsb_ty"));
        dsb_ty->setDecimals(1);
        dsb_ty->setMinimum(-500);
        dsb_ty->setMaximum(500);

        horizontalLayout_3->addWidget(dsb_ty);


        verticalLayout->addLayout(horizontalLayout_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        rotation = new QSlider(centralWidget);
        rotation->setObjectName(QStringLiteral("rotation"));
        rotation->setMinimum(-180);
        rotation->setMaximum(180);
        rotation->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(rotation);

        dsb_Rot = new QDoubleSpinBox(centralWidget);
        dsb_Rot->setObjectName(QStringLiteral("dsb_Rot"));
        dsb_Rot->setDecimals(1);
        dsb_Rot->setMinimum(-180);
        dsb_Rot->setMaximum(180);

        horizontalLayout_4->addWidget(dsb_Rot);


        verticalLayout->addLayout(horizontalLayout_4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        scaleX = new QSlider(centralWidget);
        scaleX->setObjectName(QStringLiteral("scaleX"));
        scaleX->setMinimum(-1000);
        scaleX->setMaximum(1000);
        scaleX->setPageStep(10);
        scaleX->setValue(0);
        scaleX->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(scaleX);

        dsb_sx = new QDoubleSpinBox(centralWidget);
        dsb_sx->setObjectName(QStringLiteral("dsb_sx"));
        dsb_sx->setReadOnly(false);
        dsb_sx->setMinimum(0);
        dsb_sx->setMaximum(1000);
        dsb_sx->setSingleStep(0.1);
        dsb_sx->setValue(1);

        horizontalLayout_5->addWidget(dsb_sx);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        scaleY = new QSlider(centralWidget);
        scaleY->setObjectName(QStringLiteral("scaleY"));
        scaleY->setMinimum(-1000);
        scaleY->setMaximum(1000);
        scaleY->setValue(0);
        scaleY->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(scaleY);

        dsb_sy = new QDoubleSpinBox(centralWidget);
        dsb_sy->setObjectName(QStringLiteral("dsb_sy"));
        dsb_sy->setReadOnly(false);
        dsb_sy->setMinimum(0);
        dsb_sy->setMaximum(1000);
        dsb_sy->setSingleStep(0.1);
        dsb_sy->setValue(1);

        horizontalLayout_6->addWidget(dsb_sy);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        resetTransfo = new QPushButton(centralWidget);
        resetTransfo->setObjectName(QStringLiteral("resetTransfo"));

        horizontalLayout->addWidget(resetTransfo);

        applyTransfo = new QPushButton(centralWidget);
        applyTransfo->setObjectName(QStringLiteral("applyTransfo"));

        horizontalLayout->addWidget(applyTransfo);


        verticalLayout->addLayout(horizontalLayout);


        HLayout->addLayout(verticalLayout);


        gridLayout->addLayout(HLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1038, 28));
        menuCSG = new QMenu(menuBar);
        menuCSG->setObjectName(QStringLiteral("menuCSG"));
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName(QStringLiteral("menuImage"));
        menuCurNode = new QMenu(menuBar);
        menuCurNode->setObjectName(QStringLiteral("menuCurNode"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuCSG->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuBar->addAction(menuCurNode->menuAction());
        menuCSG->addAction(actionLoadCSG);
        menuCSG->addAction(actionSaveCSG);
        menuCSG->addAction(actionAppendCSG);
        menuCSG->addAction(actionClearCSG);
        menuImage->addAction(actionLoadIMG);
        menuImage->addAction(actionSaveIMG);
        menuImage->addSeparator();
        menuImage->addAction(actionDrawSobel);
        menuCurNode->addAction(actionSwapLRRoot);
        menuCurNode->addAction(actionUnjoinRoot);
        menuCurNode->addAction(actionDraw_BB);
        menuCurNode->addAction(actionClone);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLoadCSG->setText(QApplication::translate("MainWindow", "Load", 0));
        actionSaveCSG->setText(QApplication::translate("MainWindow", "Save", 0));
        actionLoadIMG->setText(QApplication::translate("MainWindow", "Load", 0));
        actionSaveIMG->setText(QApplication::translate("MainWindow", "Save", 0));
        actionAppendCSG->setText(QApplication::translate("MainWindow", "Append", 0));
        actionClearCSG->setText(QApplication::translate("MainWindow", "Clear", 0));
        actionSwapLRRoot->setText(QApplication::translate("MainWindow", "swapLR", 0));
        actionUnjoinRoot->setText(QApplication::translate("MainWindow", "unjoinRoot", 0));
        actionDrawSobel->setText(QApplication::translate("MainWindow", "drawSobel", 0));
        actionDraw_BB->setText(QApplication::translate("MainWindow", "draw BB", 0));
        actionClone->setText(QApplication::translate("MainWindow", "clone", 0));
        label_8->setText(QApplication::translate("MainWindow", "Current Node:", 0));
        checkBox_drawCurrent->setText(QApplication::translate("MainWindow", "Draw Current", 0));
        label_7->setText(QApplication::translate("MainWindow", "Op\303\251ration:", 0));
        Operation->clear();
        Operation->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Union", 0)
         << QApplication::translate("MainWindow", "Intersection", 0)
         << QApplication::translate("MainWindow", "Diff\303\251rence", 0)
        );
        label->setText(QApplication::translate("MainWindow", "Id fils gauche", 0));
        label_2->setText(QApplication::translate("MainWindow", "Id fils droit:", 0));
        create_oper->setText(QApplication::translate("MainWindow", "Create", 0));
        label_6->setText(QApplication::translate("MainWindow", "Primitive:", 0));
        prim_type->clear();
        prim_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Disk", 0)
         << QApplication::translate("MainWindow", "Polygon", 0)
        );
        create_prim->setText(QApplication::translate("MainWindow", "Create", 0));
        label_3->setText(QApplication::translate("MainWindow", "Translation", 0));
        label_4->setText(QApplication::translate("MainWindow", "Rotation", 0));
        label_5->setText(QApplication::translate("MainWindow", "Scale", 0));
        resetTransfo->setText(QApplication::translate("MainWindow", "Reset", 0));
        applyTransfo->setText(QApplication::translate("MainWindow", "Apply", 0));
        menuCSG->setTitle(QApplication::translate("MainWindow", "CSG", 0));
        menuImage->setTitle(QApplication::translate("MainWindow", "Image", 0));
        menuCurNode->setTitle(QApplication::translate("MainWindow", "CurrentNode", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
