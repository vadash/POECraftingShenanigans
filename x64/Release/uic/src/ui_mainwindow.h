/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *headerLayout;
    QSpinBox *totalCountBox;
    QComboBox *shaperElderBox;
    QSpinBox *suffixWeightBox;
    QLabel *label_8;
    QLabel *label_4;
    QComboBox *itemBaseBox;
    QLabel *label_7;
    QSpinBox *prefixWeightBox;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_5;
    QSpinBox *levelBox;
    QLabel *label_6;
    QSpinBox *totalWeightBox;
    QSpinBox *suffixCountBox;
    QSpinBox *prefixCountBox;
    QGridLayout *fossilLayout;
    QComboBox *fossilBox_1;
    QLabel *label_14;
    QLabel *label_10;
    QComboBox *fossilBox_2;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *fossilBox_3;
    QComboBox *fossilBox_4;
    QTabWidget *tabWidget;
    QWidget *displayTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *tableLayout;
    QTableWidget *prefixTable;
    QTableWidget *suffixTable;
    QWidget *optimiseFossilTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QGridLayout *includedFossilsLayout;
    QGridLayout *gridLayout;
    QComboBox *optimiseModBox;
    QLabel *label_16;
    QSpinBox *maxFossilsBox;
    QLabel *label_15;
    QPushButton *optimiseButton;
    QTableWidget *fossilTable;
    QWidget *simulateTab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_17;
    QComboBox *simulateModBox_1;
    QLabel *label_19;
    QComboBox *simulateModBox_2;
    QLabel *label_20;
    QSpinBox *simulateNumberBox;
    QLabel *label_23;
    QPushButton *simulateExportButton;
    QPushButton *simulateButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *label_22;
    QSpinBox *simulateResultBox_1;
    QSpinBox *simulateResultBox_2;
    QSpinBox *simulateResultBox_1_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(888, 353);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1920, 1080));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headerLayout = new QGridLayout();
        headerLayout->setSpacing(6);
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        totalCountBox = new QSpinBox(centralWidget);
        totalCountBox->setObjectName(QString::fromUtf8("totalCountBox"));
        totalCountBox->setReadOnly(true);
        totalCountBox->setMaximum(1000);

        headerLayout->addWidget(totalCountBox, 0, 5, 1, 1);

        shaperElderBox = new QComboBox(centralWidget);
        shaperElderBox->addItem(QString());
        shaperElderBox->addItem(QString());
        shaperElderBox->addItem(QString());
        shaperElderBox->setObjectName(QString::fromUtf8("shaperElderBox"));

        headerLayout->addWidget(shaperElderBox, 2, 1, 1, 1);

        suffixWeightBox = new QSpinBox(centralWidget);
        suffixWeightBox->setObjectName(QString::fromUtf8("suffixWeightBox"));
        suffixWeightBox->setReadOnly(true);
        suffixWeightBox->setMaximum(1000000000);

        headerLayout->addWidget(suffixWeightBox, 2, 3, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        headerLayout->addWidget(label_8, 1, 4, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        headerLayout->addWidget(label_4, 0, 2, 1, 1);

        itemBaseBox = new QComboBox(centralWidget);
        itemBaseBox->setObjectName(QString::fromUtf8("itemBaseBox"));

        headerLayout->addWidget(itemBaseBox, 0, 1, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        headerLayout->addWidget(label_7, 2, 2, 1, 1);

        prefixWeightBox = new QSpinBox(centralWidget);
        prefixWeightBox->setObjectName(QString::fromUtf8("prefixWeightBox"));
        prefixWeightBox->setReadOnly(true);
        prefixWeightBox->setMaximum(1000000000);

        headerLayout->addWidget(prefixWeightBox, 1, 3, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        headerLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        headerLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        headerLayout->addWidget(label_3, 2, 0, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        headerLayout->addWidget(label_9, 2, 4, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        headerLayout->addWidget(label_5, 0, 4, 1, 1);

        levelBox = new QSpinBox(centralWidget);
        levelBox->setObjectName(QString::fromUtf8("levelBox"));
        levelBox->setMinimum(1);
        levelBox->setMaximum(100);
        levelBox->setValue(100);

        headerLayout->addWidget(levelBox, 1, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        headerLayout->addWidget(label_6, 1, 2, 1, 1);

        totalWeightBox = new QSpinBox(centralWidget);
        totalWeightBox->setObjectName(QString::fromUtf8("totalWeightBox"));
        totalWeightBox->setReadOnly(true);
        totalWeightBox->setMaximum(1000000000);

        headerLayout->addWidget(totalWeightBox, 0, 3, 1, 1);

        suffixCountBox = new QSpinBox(centralWidget);
        suffixCountBox->setObjectName(QString::fromUtf8("suffixCountBox"));
        suffixCountBox->setReadOnly(true);
        suffixCountBox->setMaximum(1000);

        headerLayout->addWidget(suffixCountBox, 2, 5, 1, 1);

        prefixCountBox = new QSpinBox(centralWidget);
        prefixCountBox->setObjectName(QString::fromUtf8("prefixCountBox"));
        prefixCountBox->setReadOnly(true);
        prefixCountBox->setMaximum(1000);

        headerLayout->addWidget(prefixCountBox, 1, 5, 1, 1);


        verticalLayout->addLayout(headerLayout);

        fossilLayout = new QGridLayout();
        fossilLayout->setSpacing(6);
        fossilLayout->setObjectName(QString::fromUtf8("fossilLayout"));
        fossilLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        fossilBox_1 = new QComboBox(centralWidget);
        fossilBox_1->addItem(QString());
        fossilBox_1->setObjectName(QString::fromUtf8("fossilBox_1"));

        fossilLayout->addWidget(fossilBox_1, 0, 1, 1, 1);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        fossilLayout->addWidget(label_14, 1, 2, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        fossilLayout->addWidget(label_10, 0, 0, 1, 1);

        fossilBox_2 = new QComboBox(centralWidget);
        fossilBox_2->addItem(QString());
        fossilBox_2->setObjectName(QString::fromUtf8("fossilBox_2"));

        fossilLayout->addWidget(fossilBox_2, 1, 1, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        fossilLayout->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        fossilLayout->addWidget(label_13, 0, 2, 1, 1);

        fossilBox_3 = new QComboBox(centralWidget);
        fossilBox_3->addItem(QString());
        fossilBox_3->setObjectName(QString::fromUtf8("fossilBox_3"));

        fossilLayout->addWidget(fossilBox_3, 0, 3, 1, 1);

        fossilBox_4 = new QComboBox(centralWidget);
        fossilBox_4->addItem(QString());
        fossilBox_4->setObjectName(QString::fromUtf8("fossilBox_4"));

        fossilLayout->addWidget(fossilBox_4, 1, 3, 1, 1);


        verticalLayout->addLayout(fossilLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(1920, 1080));
        displayTab = new QWidget();
        displayTab->setObjectName(QString::fromUtf8("displayTab"));
        verticalLayout_2 = new QVBoxLayout(displayTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableLayout = new QHBoxLayout();
        tableLayout->setSpacing(6);
        tableLayout->setObjectName(QString::fromUtf8("tableLayout"));
        tableLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        prefixTable = new QTableWidget(displayTab);
        if (prefixTable->columnCount() < 4)
            prefixTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        prefixTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        prefixTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        prefixTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        prefixTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        prefixTable->setObjectName(QString::fromUtf8("prefixTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(prefixTable->sizePolicy().hasHeightForWidth());
        prefixTable->setSizePolicy(sizePolicy2);
        prefixTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        prefixTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        prefixTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        prefixTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        prefixTable->setSortingEnabled(true);
        prefixTable->horizontalHeader()->setCascadingSectionResizes(false);
        prefixTable->horizontalHeader()->setMinimumSectionSize(26);
        prefixTable->horizontalHeader()->setStretchLastSection(false);

        tableLayout->addWidget(prefixTable);

        suffixTable = new QTableWidget(displayTab);
        if (suffixTable->columnCount() < 4)
            suffixTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        suffixTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        suffixTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        suffixTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        suffixTable->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        suffixTable->setObjectName(QString::fromUtf8("suffixTable"));
        suffixTable->setEnabled(true);
        sizePolicy2.setHeightForWidth(suffixTable->sizePolicy().hasHeightForWidth());
        suffixTable->setSizePolicy(sizePolicy2);
        suffixTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        suffixTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        suffixTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        suffixTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        suffixTable->setSortingEnabled(true);
        suffixTable->horizontalHeader()->setCascadingSectionResizes(false);
        suffixTable->horizontalHeader()->setMinimumSectionSize(26);
        suffixTable->horizontalHeader()->setStretchLastSection(false);

        tableLayout->addWidget(suffixTable);


        verticalLayout_2->addLayout(tableLayout);

        tabWidget->addTab(displayTab, QString());
        optimiseFossilTab = new QWidget();
        optimiseFossilTab->setObjectName(QString::fromUtf8("optimiseFossilTab"));
        verticalLayout_3 = new QVBoxLayout(optimiseFossilTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_11 = new QLabel(optimiseFossilTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_11);

        includedFossilsLayout = new QGridLayout();
        includedFossilsLayout->setSpacing(6);
        includedFossilsLayout->setObjectName(QString::fromUtf8("includedFossilsLayout"));

        horizontalLayout->addLayout(includedFossilsLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        optimiseModBox = new QComboBox(optimiseFossilTab);
        optimiseModBox->setObjectName(QString::fromUtf8("optimiseModBox"));

        gridLayout->addWidget(optimiseModBox, 0, 2, 1, 1);

        label_16 = new QLabel(optimiseFossilTab);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 0, 1, 1, 1);

        maxFossilsBox = new QSpinBox(optimiseFossilTab);
        maxFossilsBox->setObjectName(QString::fromUtf8("maxFossilsBox"));
        maxFossilsBox->setMinimum(1);
        maxFossilsBox->setMaximum(4);
        maxFossilsBox->setValue(4);

        gridLayout->addWidget(maxFossilsBox, 1, 2, 1, 1);

        label_15 = new QLabel(optimiseFossilTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        optimiseButton = new QPushButton(optimiseFossilTab);
        optimiseButton->setObjectName(QString::fromUtf8("optimiseButton"));

        verticalLayout_3->addWidget(optimiseButton);

        fossilTable = new QTableWidget(optimiseFossilTab);
        if (fossilTable->columnCount() < 5)
            fossilTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        fossilTable->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        fossilTable->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        fossilTable->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        fossilTable->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        fossilTable->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        fossilTable->setObjectName(QString::fromUtf8("fossilTable"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fossilTable->sizePolicy().hasHeightForWidth());
        fossilTable->setSizePolicy(sizePolicy4);
        fossilTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        fossilTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fossilTable->setSortingEnabled(true);
        fossilTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        fossilTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(fossilTable);

        tabWidget->addTab(optimiseFossilTab, QString());
        simulateTab = new QWidget();
        simulateTab->setObjectName(QString::fromUtf8("simulateTab"));
        formLayoutWidget = new QWidget(simulateTab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 20, 611, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_17);

        simulateModBox_1 = new QComboBox(formLayoutWidget);
        simulateModBox_1->setObjectName(QString::fromUtf8("simulateModBox_1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, simulateModBox_1);

        label_19 = new QLabel(formLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_19);

        simulateModBox_2 = new QComboBox(formLayoutWidget);
        simulateModBox_2->setObjectName(QString::fromUtf8("simulateModBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, simulateModBox_2);

        label_20 = new QLabel(formLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_20);

        simulateNumberBox = new QSpinBox(formLayoutWidget);
        simulateNumberBox->setObjectName(QString::fromUtf8("simulateNumberBox"));
        simulateNumberBox->setMinimum(1000);
        simulateNumberBox->setMaximum(1000000);
        simulateNumberBox->setSingleStep(1000);
        simulateNumberBox->setValue(100000);

        formLayout->setWidget(2, QFormLayout::FieldRole, simulateNumberBox);

        label_23 = new QLabel(formLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_23);

        simulateExportButton = new QPushButton(formLayoutWidget);
        simulateExportButton->setObjectName(QString::fromUtf8("simulateExportButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, simulateExportButton);

        simulateButton = new QPushButton(simulateTab);
        simulateButton->setObjectName(QString::fromUtf8("simulateButton"));
        simulateButton->setGeometry(QRect(650, 50, 201, 111));
        formLayoutWidget_2 = new QWidget(simulateTab);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(90, 280, 371, 201));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_18);

        label_21 = new QLabel(formLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_22);

        simulateResultBox_1 = new QSpinBox(formLayoutWidget_2);
        simulateResultBox_1->setObjectName(QString::fromUtf8("simulateResultBox_1"));
        simulateResultBox_1->setReadOnly(true);
        simulateResultBox_1->setMaximum(10000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, simulateResultBox_1);

        simulateResultBox_2 = new QSpinBox(formLayoutWidget_2);
        simulateResultBox_2->setObjectName(QString::fromUtf8("simulateResultBox_2"));
        simulateResultBox_2->setReadOnly(true);
        simulateResultBox_2->setMaximum(10000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, simulateResultBox_2);

        simulateResultBox_1_2 = new QSpinBox(formLayoutWidget_2);
        simulateResultBox_1_2->setObjectName(QString::fromUtf8("simulateResultBox_1_2"));
        simulateResultBox_1_2->setReadOnly(true);
        simulateResultBox_1_2->setMaximum(10000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, simulateResultBox_1_2);

        tabWidget->addTab(simulateTab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "POE Crafting Shenanigans", nullptr));
        shaperElderBox->setItemText(0, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        shaperElderBox->setItemText(1, QCoreApplication::translate("MainWindow", "Shaper", nullptr));
        shaperElderBox->setItemText(2, QCoreApplication::translate("MainWindow", "Elder", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "# of possible prefixes", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Total weight", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Suffixes weight", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Item Level", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Item Base", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Elder / Shaper", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "# of possible suffixes", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "# of possible mods", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Prefixes weight", nullptr));
        fossilBox_1->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));

        label_14->setText(QCoreApplication::translate("MainWindow", "Fossil 4", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Fossil 1", nullptr));
        fossilBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Fossil 2", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Fossil 3", nullptr));
        fossilBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));

        fossilBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));

        QTableWidgetItem *___qtablewidgetitem = prefixTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = prefixTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = prefixTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = prefixTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "GroupName", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = suffixTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = suffixTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = suffixTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = suffixTable->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "GroupName", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(displayTab), QCoreApplication::translate("MainWindow", "Display Mods", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Included fossils", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Mod to optimise", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Max number of fossils", nullptr));
        optimiseButton->setText(QCoreApplication::translate("MainWindow", "Start optimising !", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = fossilTable->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Fossil 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = fossilTable->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Fossil 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = fossilTable->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Fossil 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = fossilTable->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Fossil 4", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = fossilTable->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Percentage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(optimiseFossilTab), QCoreApplication::translate("MainWindow", "Optimise with fossils", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Mod 1 to observe", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Mod 2 to observe", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Number of simulated craft", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Optional", nullptr));
        simulateExportButton->setText(QCoreApplication::translate("MainWindow", "Select JSON save destination", nullptr));
        simulateButton->setText(QCoreApplication::translate("MainWindow", "Simulate Craft", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Mod 1 number", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Mod 2 number", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Mod 1 and 2 number", nullptr));
        simulateResultBox_1->setSuffix(QString());
        simulateResultBox_2->setSuffix(QString());
        simulateResultBox_1_2->setSuffix(QString());
        tabWidget->setTabText(tabWidget->indexOf(simulateTab), QCoreApplication::translate("MainWindow", "Simulate crafts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
