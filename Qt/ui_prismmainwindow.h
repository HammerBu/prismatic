/********************************************************************************
** Form generated from reading UI file 'prismmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMMAINWINDOW_H
#define UI_PRISMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PRISMMainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_33;
    QSpacerItem *horizontalSpacer_8;
    QTabWidget *tabs;
    QWidget *tab_potential;
    QHBoxLayout *horizontalLayout_29;
    QVBoxLayout *verticalLayout_23;
    QLabel *lbl_image_potential;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_23;
    QLineEdit *lineEdit_slicemin;
    QSlider *slider_slicemin;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *lineEdit_slicemax;
    QSlider *slider_slicemax;
    QCheckBox *checkBox_sqrtIntensity1;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_15;
    QLineEdit *lineEdit_contrastPotMin;
    QLineEdit *lineEdit_contrastPotMax;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_22;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_25;
    QWidget *tab_probe;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_42;
    QLabel *lbl_image_probeInteractive;
    QHBoxLayout *horizontalLayout_41;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_38;
    QLabel *label_37;
    QFrame *line;
    QVBoxLayout *verticalLayout_33;
    QLabel *lbl_R_real;
    QLabel *lbl_R_k;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_34;
    QLabel *lbl_pears_real;
    QLabel *lbl_pears_k;
    QFrame *line_3;
    QPushButton *btn_calculateProbe;
    QLabel *label_Xprobe;
    QLineEdit *lineEdit_probeX;
    QLabel *label_Yprobe;
    QLineEdit *lineEdit_probeY;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_18;
    QLabel *lbl_image_probe_pr;
    QLabel *lbl_image_probe_pk;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_19;
    QLabel *lbl_image_probe_mr;
    QLabel *lbl_image_probe_mk;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_41;
    QLabel *lbl_image_probeDifferenceR;
    QLabel *lbl_image_probeDifferenceK;
    QHBoxLayout *horizontalLayout_43;
    QCheckBox *checkBox_sqrtIntensity2;
    QCheckBox *checkBox_log;
    QCheckBox *checkBox_zoomProbe;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_output;
    QHBoxLayout *horizontalLayout_32;
    QVBoxLayout *verticalLayout_27;
    QLabel *lbl_image_output;
    QHBoxLayout *horizontalLayout_30;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_25;
    QLineEdit *lineEdit_angmin;
    QSlider *slider_angmin;
    QHBoxLayout *horizontalLayout_31;
    QLineEdit *lineEdit_angmax;
    QSlider *slider_angmax;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_27;
    QLineEdit *lineEdit_contrast_outputMin;
    QLineEdit *lineEdit_contrast_outputMax;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QHBoxLayout *horizontalLayout_24;
    QLineEdit *lineEdit_saveOutputImage;
    QPushButton *btn_saveOutputImage;
    QSpacerItem *horizontalSpacer_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *box_sampleSettings;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_atomsfile_browse;
    QPushButton *btn_saveCoordinates;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_8;
    QLabel *label_cellDim;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_cellDimX;
    QLineEdit *lineEdit_tileX;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_cellDimY;
    QLineEdit *lineEdit_tileY;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_cellDimZ;
    QLineEdit *lineEdit_tileZ;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *lbl_angstrom;
    QLabel *label_7;
    QGroupBox *box_simulationSettings;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_38;
    QLabel *label_47;
    QLabel *lbl_pixelSize;
    QVBoxLayout *verticalLayout_39;
    QLabel *label_48;
    QLineEdit *lineEdit_pixelSizeX;
    QVBoxLayout *verticalLayout_41;
    QLabel *label_49;
    QLineEdit *lineEdit_pixelSizeY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_E0;
    QLineEdit *lineEdit_E0;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_potBound;
    QLineEdit *lineEdit_potbound;
    QHBoxLayout *horizontalLayout;
    QLabel *label_alphaBeamMax;
    QLineEdit *lineEdit_probeSemiangle;
    QHBoxLayout *horizontalLayout_35;
    QHBoxLayout *horizontalLayout_34;
    QVBoxLayout *verticalLayout_29;
    QLabel *lbl_defocus;
    QLabel *label_45;
    QLabel *label_43;
    QVBoxLayout *verticalLayout_31;
    QLineEdit *lineEdit_probeDefocus;
    QLineEdit *lineEdit_C3;
    QLineEdit *lineEdit_C5;
    QVBoxLayout *verticalLayout_6;
    QLabel *lbl_lambda;
    QLabel *lbl_alphaMax;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_10;
    QLineEdit *lineEdit_randomSeed;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_numfp;
    QSpinBox *spinBox_numFP;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbl_sliceThickness;
    QLineEdit *lineEdit_sliceThickness;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_11;
    QLineEdit *lineEdit_detectorAngle;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QLabel *lbl_probeStep;
    QLabel *label_5;
    QLabel *label_28;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLineEdit *lineEdit_interpFactor_x;
    QLineEdit *lineEdit_probeStepX;
    QLineEdit *lineEdit_probeTiltX;
    QHBoxLayout *horizontalLayout_36;
    QLineEdit *lineEdit_scanWindowXMin;
    QLineEdit *lineEdit_scanWindowXMax;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_33;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_14;
    QLineEdit *lineEdit_interpFactor_y;
    QLineEdit *lineEdit_probeStepY;
    QLineEdit *lineEdit_probeTiltY;
    QHBoxLayout *horizontalLayout_37;
    QLineEdit *lineEdit_scanWindowYMin;
    QLineEdit *lineEdit_scanWindowYMax;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_36;
    QLabel *label_34;
    QGroupBox *box_calculationSettings;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lbl_outputfile;
    QLineEdit *lineEdit_outputfile;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *checkBox_saveProjectedPotential;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *checkBox_3D;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkBox_4D;
    QCheckBox *checkBox_thermalEffects;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lbl_numthreads;
    QSpinBox *spinBox_numThreads;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lbl_numgpus;
    QSpinBox *spinBox_numGPUs;
    QLabel *label_50;
    QSpinBox *spinBox_numStreams;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_46;
    QVBoxLayout *verticalLayout_37;
    QLabel *label_44;
    QLabel *label_39;
    QVBoxLayout *verticalLayout_35;
    QLabel *label_40;
    QLineEdit *lineEdit_batchCPU;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_42;
    QLineEdit *lineEdit_batchGPU;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_46;
    QComboBox *comboBox_streamMode;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_21;
    QLabel *lbl_algo;
    QRadioButton *radBtn_PRISM;
    QRadioButton *radBtn_Multislice;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_15;
    QPushButton *btn_reset;
    QPushButton *btn_calcPotential;
    QPushButton *btn_go;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PRISMMainWindow)
    {
        if (PRISMMainWindow->objectName().isEmpty())
            PRISMMainWindow->setObjectName(QStringLiteral("PRISMMainWindow"));
        PRISMMainWindow->resize(1429, 1202);
        centralWidget = new QWidget(PRISMMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_33 = new QHBoxLayout(centralWidget);
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_8);

        tabs = new QTabWidget(centralWidget);
        tabs->setObjectName(QStringLiteral("tabs"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy);
        tab_potential = new QWidget();
        tab_potential->setObjectName(QStringLiteral("tab_potential"));
        horizontalLayout_29 = new QHBoxLayout(tab_potential);
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        lbl_image_potential = new QLabel(tab_potential);
        lbl_image_potential->setObjectName(QStringLiteral("lbl_image_potential"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_image_potential->sizePolicy().hasHeightForWidth());
        lbl_image_potential->setSizePolicy(sizePolicy1);
        lbl_image_potential->setMinimumSize(QSize(1, 1));
        lbl_image_potential->setAlignment(Qt::AlignCenter);

        verticalLayout_23->addWidget(lbl_image_potential);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_23 = new QLabel(tab_potential);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_17->addWidget(label_23);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        lineEdit_slicemin = new QLineEdit(tab_potential);
        lineEdit_slicemin->setObjectName(QStringLiteral("lineEdit_slicemin"));
        lineEdit_slicemin->setEnabled(true);
        lineEdit_slicemin->setMaximumSize(QSize(30, 16777215));
        lineEdit_slicemin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_23->addWidget(lineEdit_slicemin);

        slider_slicemin = new QSlider(tab_potential);
        slider_slicemin->setObjectName(QStringLiteral("slider_slicemin"));
        slider_slicemin->setEnabled(true);
        slider_slicemin->setOrientation(Qt::Horizontal);

        horizontalLayout_23->addWidget(slider_slicemin);


        verticalLayout_17->addLayout(horizontalLayout_23);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        lineEdit_slicemax = new QLineEdit(tab_potential);
        lineEdit_slicemax->setObjectName(QStringLiteral("lineEdit_slicemax"));
        lineEdit_slicemax->setEnabled(true);
        lineEdit_slicemax->setMaximumSize(QSize(30, 16777215));
        lineEdit_slicemax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_27->addWidget(lineEdit_slicemax);

        slider_slicemax = new QSlider(tab_potential);
        slider_slicemax->setObjectName(QStringLiteral("slider_slicemax"));
        slider_slicemax->setEnabled(true);
        slider_slicemax->setOrientation(Qt::Horizontal);

        horizontalLayout_27->addWidget(slider_slicemax);


        verticalLayout_17->addLayout(horizontalLayout_27);

        checkBox_sqrtIntensity1 = new QCheckBox(tab_potential);
        checkBox_sqrtIntensity1->setObjectName(QStringLiteral("checkBox_sqrtIntensity1"));
        checkBox_sqrtIntensity1->setEnabled(false);

        verticalLayout_17->addWidget(checkBox_sqrtIntensity1);


        horizontalLayout_28->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        label_15 = new QLabel(tab_potential);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_18->addWidget(label_15);

        lineEdit_contrastPotMin = new QLineEdit(tab_potential);
        lineEdit_contrastPotMin->setObjectName(QStringLiteral("lineEdit_contrastPotMin"));
        lineEdit_contrastPotMin->setEnabled(true);
        lineEdit_contrastPotMin->setMaximumSize(QSize(60, 16777215));

        verticalLayout_18->addWidget(lineEdit_contrastPotMin);

        lineEdit_contrastPotMax = new QLineEdit(tab_potential);
        lineEdit_contrastPotMax->setObjectName(QStringLiteral("lineEdit_contrastPotMax"));
        lineEdit_contrastPotMax->setEnabled(true);
        lineEdit_contrastPotMax->setMaximumSize(QSize(60, 16777215));

        verticalLayout_18->addWidget(lineEdit_contrastPotMax);

        label_24 = new QLabel(tab_potential);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_18->addWidget(label_24);


        horizontalLayout_28->addLayout(verticalLayout_18);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_22 = new QLabel(tab_potential);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_11->addWidget(label_22);

        label_16 = new QLabel(tab_potential);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_11->addWidget(label_16);

        label_17 = new QLabel(tab_potential);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_11->addWidget(label_17);

        label_25 = new QLabel(tab_potential);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_11->addWidget(label_25);


        horizontalLayout_28->addLayout(verticalLayout_11);


        verticalLayout_23->addLayout(horizontalLayout_28);


        horizontalLayout_29->addLayout(verticalLayout_23);

        tabs->addTab(tab_potential, QString());
        tab_probe = new QWidget();
        tab_probe->setObjectName(QStringLiteral("tab_probe"));
        verticalLayout_22 = new QVBoxLayout(tab_probe);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        lbl_image_probeInteractive = new QLabel(tab_probe);
        lbl_image_probeInteractive->setObjectName(QStringLiteral("lbl_image_probeInteractive"));
        sizePolicy1.setHeightForWidth(lbl_image_probeInteractive->sizePolicy().hasHeightForWidth());
        lbl_image_probeInteractive->setSizePolicy(sizePolicy1);
        lbl_image_probeInteractive->setMinimumSize(QSize(1, 1));
        lbl_image_probeInteractive->setMaximumSize(QSize(16777215, 16777215));
        lbl_image_probeInteractive->setAlignment(Qt::AlignCenter);

        horizontalLayout_42->addWidget(lbl_image_probeInteractive);


        verticalLayout_22->addLayout(horizontalLayout_42);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_3);

        line_4 = new QFrame(tab_probe);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::VLine);

        horizontalLayout_41->addWidget(line_4);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        label_38 = new QLabel(tab_probe);
        label_38->setObjectName(QStringLiteral("label_38"));

        verticalLayout_32->addWidget(label_38);

        label_37 = new QLabel(tab_probe);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_32->addWidget(label_37);


        horizontalLayout_41->addLayout(verticalLayout_32);

        line = new QFrame(tab_probe);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_41->addWidget(line);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        lbl_R_real = new QLabel(tab_probe);
        lbl_R_real->setObjectName(QStringLiteral("lbl_R_real"));

        verticalLayout_33->addWidget(lbl_R_real);

        lbl_R_k = new QLabel(tab_probe);
        lbl_R_k->setObjectName(QStringLiteral("lbl_R_k"));

        verticalLayout_33->addWidget(lbl_R_k);


        horizontalLayout_41->addLayout(verticalLayout_33);

        line_2 = new QFrame(tab_probe);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout_41->addWidget(line_2);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        lbl_pears_real = new QLabel(tab_probe);
        lbl_pears_real->setObjectName(QStringLiteral("lbl_pears_real"));
        lbl_pears_real->setWordWrap(false);

        verticalLayout_34->addWidget(lbl_pears_real);

        lbl_pears_k = new QLabel(tab_probe);
        lbl_pears_k->setObjectName(QStringLiteral("lbl_pears_k"));

        verticalLayout_34->addWidget(lbl_pears_k);


        horizontalLayout_41->addLayout(verticalLayout_34);

        line_3 = new QFrame(tab_probe);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::VLine);

        horizontalLayout_41->addWidget(line_3);

        btn_calculateProbe = new QPushButton(tab_probe);
        btn_calculateProbe->setObjectName(QStringLiteral("btn_calculateProbe"));

        horizontalLayout_41->addWidget(btn_calculateProbe);

        label_Xprobe = new QLabel(tab_probe);
        label_Xprobe->setObjectName(QStringLiteral("label_Xprobe"));
        label_Xprobe->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_41->addWidget(label_Xprobe);

        lineEdit_probeX = new QLineEdit(tab_probe);
        lineEdit_probeX->setObjectName(QStringLiteral("lineEdit_probeX"));
        lineEdit_probeX->setMaximumSize(QSize(50, 16777215));
        lineEdit_probeX->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_41->addWidget(lineEdit_probeX);

        label_Yprobe = new QLabel(tab_probe);
        label_Yprobe->setObjectName(QStringLiteral("label_Yprobe"));
        label_Yprobe->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_41->addWidget(label_Yprobe);

        lineEdit_probeY = new QLineEdit(tab_probe);
        lineEdit_probeY->setObjectName(QStringLiteral("lineEdit_probeY"));
        lineEdit_probeY->setMaximumSize(QSize(50, 16777215));
        lineEdit_probeY->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_41->addWidget(lineEdit_probeY);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_6);


        verticalLayout_22->addLayout(horizontalLayout_41);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(2);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        label_20 = new QLabel(tab_probe);
        label_20->setObjectName(QStringLiteral("label_20"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);
        label_20->setMaximumSize(QSize(100, 16777215));

        verticalLayout_21->addWidget(label_20);

        label_21 = new QLabel(tab_probe);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy2.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy2);
        label_21->setMaximumSize(QSize(100, 16777215));

        verticalLayout_21->addWidget(label_21);


        horizontalLayout_26->addLayout(verticalLayout_21);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(2);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_18 = new QLabel(tab_probe);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(label_18);

        lbl_image_probe_pr = new QLabel(tab_probe);
        lbl_image_probe_pr->setObjectName(QStringLiteral("lbl_image_probe_pr"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbl_image_probe_pr->sizePolicy().hasHeightForWidth());
        lbl_image_probe_pr->setSizePolicy(sizePolicy3);
        lbl_image_probe_pr->setMinimumSize(QSize(150, 150));
        lbl_image_probe_pr->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(lbl_image_probe_pr);

        lbl_image_probe_pk = new QLabel(tab_probe);
        lbl_image_probe_pk->setObjectName(QStringLiteral("lbl_image_probe_pk"));
        sizePolicy3.setHeightForWidth(lbl_image_probe_pk->sizePolicy().hasHeightForWidth());
        lbl_image_probe_pk->setSizePolicy(sizePolicy3);
        lbl_image_probe_pk->setMinimumSize(QSize(150, 150));
        lbl_image_probe_pk->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(lbl_image_probe_pk);


        horizontalLayout_26->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(2);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_19 = new QLabel(tab_probe);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy2.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy2);
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(label_19);

        lbl_image_probe_mr = new QLabel(tab_probe);
        lbl_image_probe_mr->setObjectName(QStringLiteral("lbl_image_probe_mr"));
        sizePolicy3.setHeightForWidth(lbl_image_probe_mr->sizePolicy().hasHeightForWidth());
        lbl_image_probe_mr->setSizePolicy(sizePolicy3);
        lbl_image_probe_mr->setMinimumSize(QSize(150, 150));
        lbl_image_probe_mr->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(lbl_image_probe_mr);

        lbl_image_probe_mk = new QLabel(tab_probe);
        lbl_image_probe_mk->setObjectName(QStringLiteral("lbl_image_probe_mk"));
        sizePolicy3.setHeightForWidth(lbl_image_probe_mk->sizePolicy().hasHeightForWidth());
        lbl_image_probe_mk->setSizePolicy(sizePolicy3);
        lbl_image_probe_mk->setMinimumSize(QSize(150, 150));
        lbl_image_probe_mk->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(lbl_image_probe_mk);


        horizontalLayout_26->addLayout(verticalLayout_20);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(2);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        label_41 = new QLabel(tab_probe);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setAlignment(Qt::AlignCenter);

        verticalLayout_28->addWidget(label_41);

        lbl_image_probeDifferenceR = new QLabel(tab_probe);
        lbl_image_probeDifferenceR->setObjectName(QStringLiteral("lbl_image_probeDifferenceR"));
        lbl_image_probeDifferenceR->setMinimumSize(QSize(150, 150));

        verticalLayout_28->addWidget(lbl_image_probeDifferenceR);

        lbl_image_probeDifferenceK = new QLabel(tab_probe);
        lbl_image_probeDifferenceK->setObjectName(QStringLiteral("lbl_image_probeDifferenceK"));
        lbl_image_probeDifferenceK->setMinimumSize(QSize(150, 150));

        verticalLayout_28->addWidget(lbl_image_probeDifferenceK);


        horizontalLayout_26->addLayout(verticalLayout_28);


        verticalLayout_22->addLayout(horizontalLayout_26);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        checkBox_sqrtIntensity2 = new QCheckBox(tab_probe);
        checkBox_sqrtIntensity2->setObjectName(QStringLiteral("checkBox_sqrtIntensity2"));
        checkBox_sqrtIntensity2->setEnabled(false);

        horizontalLayout_43->addWidget(checkBox_sqrtIntensity2);

        checkBox_log = new QCheckBox(tab_probe);
        checkBox_log->setObjectName(QStringLiteral("checkBox_log"));

        horizontalLayout_43->addWidget(checkBox_log);

        checkBox_zoomProbe = new QCheckBox(tab_probe);
        checkBox_zoomProbe->setObjectName(QStringLiteral("checkBox_zoomProbe"));
        checkBox_zoomProbe->setEnabled(false);

        horizontalLayout_43->addWidget(checkBox_zoomProbe);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_5);


        verticalLayout_22->addLayout(horizontalLayout_43);

        tabs->addTab(tab_probe, QString());
        tab_output = new QWidget();
        tab_output->setObjectName(QStringLiteral("tab_output"));
        horizontalLayout_32 = new QHBoxLayout(tab_output);
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        lbl_image_output = new QLabel(tab_output);
        lbl_image_output->setObjectName(QStringLiteral("lbl_image_output"));
        sizePolicy1.setHeightForWidth(lbl_image_output->sizePolicy().hasHeightForWidth());
        lbl_image_output->setSizePolicy(sizePolicy1);
        lbl_image_output->setMinimumSize(QSize(1, 1));
        lbl_image_output->setPixmap(QPixmap(QString::fromUtf8(":/images/output.png")));
        lbl_image_output->setAlignment(Qt::AlignCenter);

        verticalLayout_27->addWidget(lbl_image_output);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        label_26 = new QLabel(tab_output);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_24->addWidget(label_26);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        lineEdit_angmin = new QLineEdit(tab_output);
        lineEdit_angmin->setObjectName(QStringLiteral("lineEdit_angmin"));
        lineEdit_angmin->setEnabled(false);
        lineEdit_angmin->setMaximumSize(QSize(60, 16777215));
        lineEdit_angmin->setMaxLength(6);
        lineEdit_angmin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_25->addWidget(lineEdit_angmin);

        slider_angmin = new QSlider(tab_output);
        slider_angmin->setObjectName(QStringLiteral("slider_angmin"));
        slider_angmin->setEnabled(false);
        slider_angmin->setOrientation(Qt::Horizontal);

        horizontalLayout_25->addWidget(slider_angmin);


        verticalLayout_24->addLayout(horizontalLayout_25);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        lineEdit_angmax = new QLineEdit(tab_output);
        lineEdit_angmax->setObjectName(QStringLiteral("lineEdit_angmax"));
        lineEdit_angmax->setEnabled(false);
        lineEdit_angmax->setMaximumSize(QSize(60, 16777215));
        lineEdit_angmax->setMaxLength(6);
        lineEdit_angmax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_31->addWidget(lineEdit_angmax);

        slider_angmax = new QSlider(tab_output);
        slider_angmax->setObjectName(QStringLiteral("slider_angmax"));
        slider_angmax->setEnabled(false);
        slider_angmax->setOrientation(Qt::Horizontal);

        horizontalLayout_31->addWidget(slider_angmax);


        verticalLayout_24->addLayout(horizontalLayout_31);


        horizontalLayout_30->addLayout(verticalLayout_24);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        label_27 = new QLabel(tab_output);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_25->addWidget(label_27);

        lineEdit_contrast_outputMin = new QLineEdit(tab_output);
        lineEdit_contrast_outputMin->setObjectName(QStringLiteral("lineEdit_contrast_outputMin"));
        lineEdit_contrast_outputMin->setEnabled(false);
        lineEdit_contrast_outputMin->setMaximumSize(QSize(75, 16777215));
        lineEdit_contrast_outputMin->setMaxLength(16);

        verticalLayout_25->addWidget(lineEdit_contrast_outputMin);

        lineEdit_contrast_outputMax = new QLineEdit(tab_output);
        lineEdit_contrast_outputMax->setObjectName(QStringLiteral("lineEdit_contrast_outputMax"));
        lineEdit_contrast_outputMax->setEnabled(false);
        lineEdit_contrast_outputMax->setMaximumSize(QSize(75, 16777215));
        lineEdit_contrast_outputMax->setMaxLength(16);

        verticalLayout_25->addWidget(lineEdit_contrast_outputMax);


        horizontalLayout_30->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        label_29 = new QLabel(tab_output);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_26->addWidget(label_29);

        label_30 = new QLabel(tab_output);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_26->addWidget(label_30);

        label_31 = new QLabel(tab_output);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_26->addWidget(label_31);


        horizontalLayout_30->addLayout(verticalLayout_26);


        verticalLayout_27->addLayout(horizontalLayout_30);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        lineEdit_saveOutputImage = new QLineEdit(tab_output);
        lineEdit_saveOutputImage->setObjectName(QStringLiteral("lineEdit_saveOutputImage"));

        horizontalLayout_24->addWidget(lineEdit_saveOutputImage);

        btn_saveOutputImage = new QPushButton(tab_output);
        btn_saveOutputImage->setObjectName(QStringLiteral("btn_saveOutputImage"));

        horizontalLayout_24->addWidget(btn_saveOutputImage);


        verticalLayout_27->addLayout(horizontalLayout_24);


        horizontalLayout_32->addLayout(verticalLayout_27);

        tabs->addTab(tab_output, QString());

        horizontalLayout_33->addWidget(tabs);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_7);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 326, 1120));
        verticalLayout_30 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(-1, -1, -1, 0);
        box_sampleSettings = new QGroupBox(scrollAreaWidgetContents);
        box_sampleSettings->setObjectName(QStringLiteral("box_sampleSettings"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(box_sampleSettings->sizePolicy().hasHeightForWidth());
        box_sampleSettings->setSizePolicy(sizePolicy4);
        box_sampleSettings->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_13 = new QHBoxLayout(box_sampleSettings);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(2, 10, 2, 2);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_atomsfile_browse = new QPushButton(box_sampleSettings);
        btn_atomsfile_browse->setObjectName(QStringLiteral("btn_atomsfile_browse"));

        horizontalLayout_2->addWidget(btn_atomsfile_browse);

        btn_saveCoordinates = new QPushButton(box_sampleSettings);
        btn_saveCoordinates->setObjectName(QStringLiteral("btn_saveCoordinates"));
        btn_saveCoordinates->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btn_saveCoordinates->sizePolicy().hasHeightForWidth());
        btn_saveCoordinates->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(btn_saveCoordinates);


        verticalLayout_13->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_8 = new QLabel(box_sampleSettings);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_12->addWidget(label_8);

        label_cellDim = new QLabel(box_sampleSettings);
        label_cellDim->setObjectName(QStringLiteral("label_cellDim"));
        QFont font;
        font.setPointSize(11);
        label_cellDim->setFont(font);
        label_cellDim->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_cellDim);

        label_6 = new QLabel(box_sampleSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_6);


        horizontalLayout_12->addLayout(verticalLayout_12);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(box_sampleSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit_cellDimX = new QLineEdit(box_sampleSettings);
        lineEdit_cellDimX->setObjectName(QStringLiteral("lineEdit_cellDimX"));
        sizePolicy5.setHeightForWidth(lineEdit_cellDimX->sizePolicy().hasHeightForWidth());
        lineEdit_cellDimX->setSizePolicy(sizePolicy5);
        lineEdit_cellDimX->setMaximumSize(QSize(40, 16777215));
        lineEdit_cellDimX->setLayoutDirection(Qt::LeftToRight);
        lineEdit_cellDimX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_cellDimX);

        lineEdit_tileX = new QLineEdit(box_sampleSettings);
        lineEdit_tileX->setObjectName(QStringLiteral("lineEdit_tileX"));
        lineEdit_tileX->setEnabled(true);
        lineEdit_tileX->setMaximumSize(QSize(40, 16777215));
        lineEdit_tileX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_tileX);


        horizontalLayout_12->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(box_sampleSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        lineEdit_cellDimY = new QLineEdit(box_sampleSettings);
        lineEdit_cellDimY->setObjectName(QStringLiteral("lineEdit_cellDimY"));
        sizePolicy5.setHeightForWidth(lineEdit_cellDimY->sizePolicy().hasHeightForWidth());
        lineEdit_cellDimY->setSizePolicy(sizePolicy5);
        lineEdit_cellDimY->setMaximumSize(QSize(40, 16777215));
        lineEdit_cellDimY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_cellDimY);

        lineEdit_tileY = new QLineEdit(box_sampleSettings);
        lineEdit_tileY->setObjectName(QStringLiteral("lineEdit_tileY"));
        lineEdit_tileY->setEnabled(true);
        lineEdit_tileY->setMaximumSize(QSize(40, 16777215));
        lineEdit_tileY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_tileY);


        horizontalLayout_12->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(box_sampleSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        lineEdit_cellDimZ = new QLineEdit(box_sampleSettings);
        lineEdit_cellDimZ->setObjectName(QStringLiteral("lineEdit_cellDimZ"));
        sizePolicy5.setHeightForWidth(lineEdit_cellDimZ->sizePolicy().hasHeightForWidth());
        lineEdit_cellDimZ->setSizePolicy(sizePolicy5);
        lineEdit_cellDimZ->setMaximumSize(QSize(40, 16777215));
        lineEdit_cellDimZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(lineEdit_cellDimZ);

        lineEdit_tileZ = new QLineEdit(box_sampleSettings);
        lineEdit_tileZ->setObjectName(QStringLiteral("lineEdit_tileZ"));
        lineEdit_tileZ->setEnabled(true);
        lineEdit_tileZ->setMaximumSize(QSize(40, 16777215));
        lineEdit_tileZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(lineEdit_tileZ);


        horizontalLayout_12->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(box_sampleSettings);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        lbl_angstrom = new QLabel(box_sampleSettings);
        lbl_angstrom->setObjectName(QStringLiteral("lbl_angstrom"));
        lbl_angstrom->setFont(font);
        lbl_angstrom->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbl_angstrom);

        label_7 = new QLabel(box_sampleSettings);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);


        horizontalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_13->addLayout(horizontalLayout_12);


        horizontalLayout_13->addLayout(verticalLayout_13);


        verticalLayout_16->addWidget(box_sampleSettings);

        box_simulationSettings = new QGroupBox(scrollAreaWidgetContents);
        box_simulationSettings->setObjectName(QStringLiteral("box_simulationSettings"));
        sizePolicy4.setHeightForWidth(box_simulationSettings->sizePolicy().hasHeightForWidth());
        box_simulationSettings->setSizePolicy(sizePolicy4);
        box_simulationSettings->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_11 = new QHBoxLayout(box_simulationSettings);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 10, 2, 2);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        label_47 = new QLabel(box_simulationSettings);
        label_47->setObjectName(QStringLiteral("label_47"));

        verticalLayout_38->addWidget(label_47);

        lbl_pixelSize = new QLabel(box_simulationSettings);
        lbl_pixelSize->setObjectName(QStringLiteral("lbl_pixelSize"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lbl_pixelSize->sizePolicy().hasHeightForWidth());
        lbl_pixelSize->setSizePolicy(sizePolicy6);
        QFont font1;
        font1.setPointSize(10);
        lbl_pixelSize->setFont(font1);

        verticalLayout_38->addWidget(lbl_pixelSize);


        horizontalLayout_5->addLayout(verticalLayout_38);

        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        label_48 = new QLabel(box_simulationSettings);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setAlignment(Qt::AlignCenter);

        verticalLayout_39->addWidget(label_48);

        lineEdit_pixelSizeX = new QLineEdit(box_simulationSettings);
        lineEdit_pixelSizeX->setObjectName(QStringLiteral("lineEdit_pixelSizeX"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lineEdit_pixelSizeX->sizePolicy().hasHeightForWidth());
        lineEdit_pixelSizeX->setSizePolicy(sizePolicy7);
        lineEdit_pixelSizeX->setMinimumSize(QSize(40, 20));
        lineEdit_pixelSizeX->setMaximumSize(QSize(30, 20));
        lineEdit_pixelSizeX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_39->addWidget(lineEdit_pixelSizeX);


        horizontalLayout_5->addLayout(verticalLayout_39);

        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        label_49 = new QLabel(box_simulationSettings);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setAlignment(Qt::AlignCenter);

        verticalLayout_41->addWidget(label_49);

        lineEdit_pixelSizeY = new QLineEdit(box_simulationSettings);
        lineEdit_pixelSizeY->setObjectName(QStringLiteral("lineEdit_pixelSizeY"));
        sizePolicy7.setHeightForWidth(lineEdit_pixelSizeY->sizePolicy().hasHeightForWidth());
        lineEdit_pixelSizeY->setSizePolicy(sizePolicy7);
        lineEdit_pixelSizeY->setMinimumSize(QSize(40, 20));
        lineEdit_pixelSizeY->setMaximumSize(QSize(30, 20));
        lineEdit_pixelSizeY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_41->addWidget(lineEdit_pixelSizeY);


        horizontalLayout_5->addLayout(verticalLayout_41);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbl_E0 = new QLabel(box_simulationSettings);
        lbl_E0->setObjectName(QStringLiteral("lbl_E0"));
        sizePolicy6.setHeightForWidth(lbl_E0->sizePolicy().hasHeightForWidth());
        lbl_E0->setSizePolicy(sizePolicy6);
        lbl_E0->setFont(font1);

        horizontalLayout_3->addWidget(lbl_E0);

        lineEdit_E0 = new QLineEdit(box_simulationSettings);
        lineEdit_E0->setObjectName(QStringLiteral("lineEdit_E0"));
        sizePolicy7.setHeightForWidth(lineEdit_E0->sizePolicy().hasHeightForWidth());
        lineEdit_E0->setSizePolicy(sizePolicy7);
        lineEdit_E0->setMinimumSize(QSize(40, 20));
        lineEdit_E0->setMaximumSize(QSize(30, 20));
        lineEdit_E0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_E0);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lbl_potBound = new QLabel(box_simulationSettings);
        lbl_potBound->setObjectName(QStringLiteral("lbl_potBound"));
        sizePolicy6.setHeightForWidth(lbl_potBound->sizePolicy().hasHeightForWidth());
        lbl_potBound->setSizePolicy(sizePolicy6);
        lbl_potBound->setFont(font1);

        horizontalLayout_7->addWidget(lbl_potBound);

        lineEdit_potbound = new QLineEdit(box_simulationSettings);
        lineEdit_potbound->setObjectName(QStringLiteral("lineEdit_potbound"));
        sizePolicy7.setHeightForWidth(lineEdit_potbound->sizePolicy().hasHeightForWidth());
        lineEdit_potbound->setSizePolicy(sizePolicy7);
        lineEdit_potbound->setMinimumSize(QSize(40, 20));
        lineEdit_potbound->setMaximumSize(QSize(20, 20));
        lineEdit_potbound->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lineEdit_potbound);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_alphaBeamMax = new QLabel(box_simulationSettings);
        label_alphaBeamMax->setObjectName(QStringLiteral("label_alphaBeamMax"));
        sizePolicy6.setHeightForWidth(label_alphaBeamMax->sizePolicy().hasHeightForWidth());
        label_alphaBeamMax->setSizePolicy(sizePolicy6);
        label_alphaBeamMax->setMinimumSize(QSize(100, 60));
        label_alphaBeamMax->setFont(font1);
        label_alphaBeamMax->setWordWrap(true);

        horizontalLayout->addWidget(label_alphaBeamMax);

        lineEdit_probeSemiangle = new QLineEdit(box_simulationSettings);
        lineEdit_probeSemiangle->setObjectName(QStringLiteral("lineEdit_probeSemiangle"));
        sizePolicy7.setHeightForWidth(lineEdit_probeSemiangle->sizePolicy().hasHeightForWidth());
        lineEdit_probeSemiangle->setSizePolicy(sizePolicy7);
        lineEdit_probeSemiangle->setMinimumSize(QSize(40, 20));
        lineEdit_probeSemiangle->setMaximumSize(QSize(40, 20));
        lineEdit_probeSemiangle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit_probeSemiangle);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));

        verticalLayout_5->addLayout(horizontalLayout_35);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(0);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        lbl_defocus = new QLabel(box_simulationSettings);
        lbl_defocus->setObjectName(QStringLiteral("lbl_defocus"));
        lbl_defocus->setFont(font1);

        verticalLayout_29->addWidget(lbl_defocus);

        label_45 = new QLabel(box_simulationSettings);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setFont(font1);

        verticalLayout_29->addWidget(label_45);

        label_43 = new QLabel(box_simulationSettings);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setFont(font1);

        verticalLayout_29->addWidget(label_43);


        horizontalLayout_34->addLayout(verticalLayout_29);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        lineEdit_probeDefocus = new QLineEdit(box_simulationSettings);
        lineEdit_probeDefocus->setObjectName(QStringLiteral("lineEdit_probeDefocus"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lineEdit_probeDefocus->sizePolicy().hasHeightForWidth());
        lineEdit_probeDefocus->setSizePolicy(sizePolicy8);
        lineEdit_probeDefocus->setMinimumSize(QSize(40, 20));
        lineEdit_probeDefocus->setMaximumSize(QSize(40, 20));
        lineEdit_probeDefocus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_31->addWidget(lineEdit_probeDefocus);

        lineEdit_C3 = new QLineEdit(box_simulationSettings);
        lineEdit_C3->setObjectName(QStringLiteral("lineEdit_C3"));
        sizePolicy8.setHeightForWidth(lineEdit_C3->sizePolicy().hasHeightForWidth());
        lineEdit_C3->setSizePolicy(sizePolicy8);
        lineEdit_C3->setMinimumSize(QSize(0, 20));
        lineEdit_C3->setMaximumSize(QSize(40, 20));
        lineEdit_C3->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_31->addWidget(lineEdit_C3);

        lineEdit_C5 = new QLineEdit(box_simulationSettings);
        lineEdit_C5->setObjectName(QStringLiteral("lineEdit_C5"));
        sizePolicy8.setHeightForWidth(lineEdit_C5->sizePolicy().hasHeightForWidth());
        lineEdit_C5->setSizePolicy(sizePolicy8);
        lineEdit_C5->setMinimumSize(QSize(0, 20));
        lineEdit_C5->setMaximumSize(QSize(40, 20));
        lineEdit_C5->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_31->addWidget(lineEdit_C5);


        horizontalLayout_34->addLayout(verticalLayout_31);


        verticalLayout_5->addLayout(horizontalLayout_34);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lbl_lambda = new QLabel(box_simulationSettings);
        lbl_lambda->setObjectName(QStringLiteral("lbl_lambda"));
        sizePolicy6.setHeightForWidth(lbl_lambda->sizePolicy().hasHeightForWidth());
        lbl_lambda->setSizePolicy(sizePolicy6);
        lbl_lambda->setFont(font1);
        lbl_lambda->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(lbl_lambda);

        lbl_alphaMax = new QLabel(box_simulationSettings);
        lbl_alphaMax->setObjectName(QStringLiteral("lbl_alphaMax"));
        sizePolicy6.setHeightForWidth(lbl_alphaMax->sizePolicy().hasHeightForWidth());
        lbl_alphaMax->setSizePolicy(sizePolicy6);
        lbl_alphaMax->setFont(font1);
        lbl_alphaMax->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_6->addWidget(lbl_alphaMax);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        label_10 = new QLabel(box_simulationSettings);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_45->addWidget(label_10);

        lineEdit_randomSeed = new QLineEdit(box_simulationSettings);
        lineEdit_randomSeed->setObjectName(QStringLiteral("lineEdit_randomSeed"));
        lineEdit_randomSeed->setMinimumSize(QSize(0, 20));
        lineEdit_randomSeed->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_45->addWidget(lineEdit_randomSeed);


        verticalLayout_6->addLayout(horizontalLayout_45);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbl_numfp = new QLabel(box_simulationSettings);
        lbl_numfp->setObjectName(QStringLiteral("lbl_numfp"));
        sizePolicy6.setHeightForWidth(lbl_numfp->sizePolicy().hasHeightForWidth());
        lbl_numfp->setSizePolicy(sizePolicy6);
        lbl_numfp->setFont(font1);
        lbl_numfp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl_numfp->setWordWrap(true);

        horizontalLayout_6->addWidget(lbl_numfp);

        spinBox_numFP = new QSpinBox(box_simulationSettings);
        spinBox_numFP->setObjectName(QStringLiteral("spinBox_numFP"));
        spinBox_numFP->setEnabled(true);
        sizePolicy7.setHeightForWidth(spinBox_numFP->sizePolicy().hasHeightForWidth());
        spinBox_numFP->setSizePolicy(sizePolicy7);
        spinBox_numFP->setMaximumSize(QSize(40, 20));
        spinBox_numFP->setBaseSize(QSize(0, 0));
        spinBox_numFP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_numFP->setMinimum(1);
        spinBox_numFP->setMaximum(999999);

        horizontalLayout_6->addWidget(spinBox_numFP);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lbl_sliceThickness = new QLabel(box_simulationSettings);
        lbl_sliceThickness->setObjectName(QStringLiteral("lbl_sliceThickness"));
        sizePolicy3.setHeightForWidth(lbl_sliceThickness->sizePolicy().hasHeightForWidth());
        lbl_sliceThickness->setSizePolicy(sizePolicy3);
        lbl_sliceThickness->setMinimumSize(QSize(85, 30));
        lbl_sliceThickness->setFont(font1);
        lbl_sliceThickness->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl_sliceThickness->setWordWrap(false);

        horizontalLayout_9->addWidget(lbl_sliceThickness);

        lineEdit_sliceThickness = new QLineEdit(box_simulationSettings);
        lineEdit_sliceThickness->setObjectName(QStringLiteral("lineEdit_sliceThickness"));
        sizePolicy7.setHeightForWidth(lineEdit_sliceThickness->sizePolicy().hasHeightForWidth());
        lineEdit_sliceThickness->setSizePolicy(sizePolicy7);
        lineEdit_sliceThickness->setMinimumSize(QSize(40, 20));
        lineEdit_sliceThickness->setMaximumSize(QSize(30, 20));
        lineEdit_sliceThickness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(lineEdit_sliceThickness);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        label_11 = new QLabel(box_simulationSettings);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);
        label_11->setWordWrap(true);

        horizontalLayout_38->addWidget(label_11);

        lineEdit_detectorAngle = new QLineEdit(box_simulationSettings);
        lineEdit_detectorAngle->setObjectName(QStringLiteral("lineEdit_detectorAngle"));
        sizePolicy8.setHeightForWidth(lineEdit_detectorAngle->sizePolicy().hasHeightForWidth());
        lineEdit_detectorAngle->setSizePolicy(sizePolicy8);
        lineEdit_detectorAngle->setMinimumSize(QSize(20, 20));
        lineEdit_detectorAngle->setMaximumSize(QSize(75, 20));
        lineEdit_detectorAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_38->addWidget(lineEdit_detectorAngle);


        verticalLayout_6->addLayout(horizontalLayout_38);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_10->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 30, -1, -1);
        label = new QLabel(box_simulationSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        label->setFont(font1);
        label->setWordWrap(true);

        verticalLayout_9->addWidget(label);

        lbl_probeStep = new QLabel(box_simulationSettings);
        lbl_probeStep->setObjectName(QStringLiteral("lbl_probeStep"));
        lbl_probeStep->setMinimumSize(QSize(50, 40));
        lbl_probeStep->setFont(font1);
        lbl_probeStep->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl_probeStep->setWordWrap(false);

        verticalLayout_9->addWidget(lbl_probeStep);

        label_5 = new QLabel(box_simulationSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_9->addWidget(label_5);

        label_28 = new QLabel(box_simulationSettings);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font1);

        verticalLayout_9->addWidget(label_28);

        label_32 = new QLabel(box_simulationSettings);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_9->addWidget(label_32);


        horizontalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 10, -1, -1);
        label_13 = new QLabel(box_simulationSettings);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);

        lineEdit_interpFactor_x = new QLineEdit(box_simulationSettings);
        lineEdit_interpFactor_x->setObjectName(QStringLiteral("lineEdit_interpFactor_x"));
        lineEdit_interpFactor_x->setMaximumSize(QSize(40, 16777215));
        lineEdit_interpFactor_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(lineEdit_interpFactor_x);

        lineEdit_probeStepX = new QLineEdit(box_simulationSettings);
        lineEdit_probeStepX->setObjectName(QStringLiteral("lineEdit_probeStepX"));
        sizePolicy7.setHeightForWidth(lineEdit_probeStepX->sizePolicy().hasHeightForWidth());
        lineEdit_probeStepX->setSizePolicy(sizePolicy7);
        lineEdit_probeStepX->setMaximumSize(QSize(40, 16777215));
        lineEdit_probeStepX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(lineEdit_probeStepX);

        lineEdit_probeTiltX = new QLineEdit(box_simulationSettings);
        lineEdit_probeTiltX->setObjectName(QStringLiteral("lineEdit_probeTiltX"));
        lineEdit_probeTiltX->setMaximumSize(QSize(40, 16777215));
        lineEdit_probeTiltX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(lineEdit_probeTiltX);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        lineEdit_scanWindowXMin = new QLineEdit(box_simulationSettings);
        lineEdit_scanWindowXMin->setObjectName(QStringLiteral("lineEdit_scanWindowXMin"));
        lineEdit_scanWindowXMin->setMaximumSize(QSize(40, 16777215));
        lineEdit_scanWindowXMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_36->addWidget(lineEdit_scanWindowXMin);

        lineEdit_scanWindowXMax = new QLineEdit(box_simulationSettings);
        lineEdit_scanWindowXMax->setObjectName(QStringLiteral("lineEdit_scanWindowXMax"));
        lineEdit_scanWindowXMax->setMaximumSize(QSize(40, 16777215));
        lineEdit_scanWindowXMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_36->addWidget(lineEdit_scanWindowXMax);


        verticalLayout_7->addLayout(horizontalLayout_36);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_33 = new QLabel(box_simulationSettings);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font1);

        horizontalLayout_39->addWidget(label_33);

        label_35 = new QLabel(box_simulationSettings);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font1);

        horizontalLayout_39->addWidget(label_35);


        verticalLayout_7->addLayout(horizontalLayout_39);


        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 10, -1, -1);
        label_14 = new QLabel(box_simulationSettings);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_14);

        lineEdit_interpFactor_y = new QLineEdit(box_simulationSettings);
        lineEdit_interpFactor_y->setObjectName(QStringLiteral("lineEdit_interpFactor_y"));
        lineEdit_interpFactor_y->setEnabled(true);
        lineEdit_interpFactor_y->setMaximumSize(QSize(40, 16777215));
        lineEdit_interpFactor_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lineEdit_interpFactor_y);

        lineEdit_probeStepY = new QLineEdit(box_simulationSettings);
        lineEdit_probeStepY->setObjectName(QStringLiteral("lineEdit_probeStepY"));
        lineEdit_probeStepY->setMaximumSize(QSize(40, 16777215));
        lineEdit_probeStepY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lineEdit_probeStepY);

        lineEdit_probeTiltY = new QLineEdit(box_simulationSettings);
        lineEdit_probeTiltY->setObjectName(QStringLiteral("lineEdit_probeTiltY"));
        lineEdit_probeTiltY->setMinimumSize(QSize(0, 0));
        lineEdit_probeTiltY->setMaximumSize(QSize(40, 16777215));
        lineEdit_probeTiltY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(lineEdit_probeTiltY);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        lineEdit_scanWindowYMin = new QLineEdit(box_simulationSettings);
        lineEdit_scanWindowYMin->setObjectName(QStringLiteral("lineEdit_scanWindowYMin"));
        lineEdit_scanWindowYMin->setMaximumSize(QSize(40, 16777215));
        lineEdit_scanWindowYMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_37->addWidget(lineEdit_scanWindowYMin);

        lineEdit_scanWindowYMax = new QLineEdit(box_simulationSettings);
        lineEdit_scanWindowYMax->setObjectName(QStringLiteral("lineEdit_scanWindowYMax"));
        lineEdit_scanWindowYMax->setMaximumSize(QSize(40, 16777215));
        lineEdit_scanWindowYMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_37->addWidget(lineEdit_scanWindowYMax);


        verticalLayout_8->addLayout(horizontalLayout_37);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_36 = new QLabel(box_simulationSettings);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setFont(font1);

        horizontalLayout_40->addWidget(label_36);

        label_34 = new QLabel(box_simulationSettings);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setFont(font1);

        horizontalLayout_40->addWidget(label_34);


        verticalLayout_8->addLayout(horizontalLayout_40);


        horizontalLayout_8->addLayout(verticalLayout_8);


        horizontalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_10);


        verticalLayout_16->addWidget(box_simulationSettings);

        box_calculationSettings = new QGroupBox(scrollAreaWidgetContents);
        box_calculationSettings->setObjectName(QStringLiteral("box_calculationSettings"));
        sizePolicy4.setHeightForWidth(box_calculationSettings->sizePolicy().hasHeightForWidth());
        box_calculationSettings->setSizePolicy(sizePolicy4);
        box_calculationSettings->setMinimumSize(QSize(0, 0));
        box_calculationSettings->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_20 = new QHBoxLayout(box_calculationSettings);
        horizontalLayout_20->setSpacing(0);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(2, 10, 2, 2);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lbl_outputfile = new QLabel(box_calculationSettings);
        lbl_outputfile->setObjectName(QStringLiteral("lbl_outputfile"));

        horizontalLayout_14->addWidget(lbl_outputfile);

        lineEdit_outputfile = new QLineEdit(box_calculationSettings);
        lineEdit_outputfile->setObjectName(QStringLiteral("lineEdit_outputfile"));

        horizontalLayout_14->addWidget(lineEdit_outputfile);


        verticalLayout_14->addLayout(horizontalLayout_14);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        checkBox_saveProjectedPotential = new QCheckBox(box_calculationSettings);
        checkBox_saveProjectedPotential->setObjectName(QStringLiteral("checkBox_saveProjectedPotential"));

        horizontalLayout_19->addWidget(checkBox_saveProjectedPotential);

        label_12 = new QLabel(box_calculationSettings);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_19->addWidget(label_12);


        verticalLayout_14->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        checkBox_3D = new QCheckBox(box_calculationSettings);
        checkBox_3D->setObjectName(QStringLiteral("checkBox_3D"));

        horizontalLayout_18->addWidget(checkBox_3D);


        verticalLayout_14->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        checkBox_4D = new QCheckBox(box_calculationSettings);
        checkBox_4D->setObjectName(QStringLiteral("checkBox_4D"));

        horizontalLayout_17->addWidget(checkBox_4D);


        verticalLayout_14->addLayout(horizontalLayout_17);

        checkBox_thermalEffects = new QCheckBox(box_calculationSettings);
        checkBox_thermalEffects->setObjectName(QStringLiteral("checkBox_thermalEffects"));

        verticalLayout_14->addWidget(checkBox_thermalEffects);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lbl_numthreads = new QLabel(box_calculationSettings);
        lbl_numthreads->setObjectName(QStringLiteral("lbl_numthreads"));
        lbl_numthreads->setFont(font1);
        lbl_numthreads->setWordWrap(true);

        horizontalLayout_16->addWidget(lbl_numthreads);

        spinBox_numThreads = new QSpinBox(box_calculationSettings);
        spinBox_numThreads->setObjectName(QStringLiteral("spinBox_numThreads"));
        spinBox_numThreads->setMaximumSize(QSize(40, 16777215));
        spinBox_numThreads->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(spinBox_numThreads);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        lbl_numgpus = new QLabel(box_calculationSettings);
        lbl_numgpus->setObjectName(QStringLiteral("lbl_numgpus"));
        lbl_numgpus->setFont(font1);
        lbl_numgpus->setWordWrap(true);

        horizontalLayout_15->addWidget(lbl_numgpus);

        spinBox_numGPUs = new QSpinBox(box_calculationSettings);
        spinBox_numGPUs->setObjectName(QStringLiteral("spinBox_numGPUs"));
        spinBox_numGPUs->setMaximumSize(QSize(40, 16777215));
        spinBox_numGPUs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(spinBox_numGPUs);

        label_50 = new QLabel(box_calculationSettings);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setFont(font1);
        label_50->setWordWrap(true);

        horizontalLayout_15->addWidget(label_50);

        spinBox_numStreams = new QSpinBox(box_calculationSettings);
        spinBox_numStreams->setObjectName(QStringLiteral("spinBox_numStreams"));
        spinBox_numStreams->setMinimum(1);
        spinBox_numStreams->setMaximum(999);

        horizontalLayout_15->addWidget(spinBox_numStreams);


        horizontalLayout_16->addLayout(horizontalLayout_15);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_11);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_2);


        verticalLayout_14->addLayout(horizontalLayout_16);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        label_44 = new QLabel(box_calculationSettings);
        label_44->setObjectName(QStringLiteral("label_44"));

        verticalLayout_37->addWidget(label_44);

        label_39 = new QLabel(box_calculationSettings);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_37->addWidget(label_39);


        horizontalLayout_46->addLayout(verticalLayout_37);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        label_40 = new QLabel(box_calculationSettings);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_35->addWidget(label_40);

        lineEdit_batchCPU = new QLineEdit(box_calculationSettings);
        lineEdit_batchCPU->setObjectName(QStringLiteral("lineEdit_batchCPU"));
        lineEdit_batchCPU->setMaximumSize(QSize(40, 16777215));
        lineEdit_batchCPU->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_35->addWidget(lineEdit_batchCPU);


        horizontalLayout_46->addLayout(verticalLayout_35);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        label_42 = new QLabel(box_calculationSettings);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_36->addWidget(label_42);

        lineEdit_batchGPU = new QLineEdit(box_calculationSettings);
        lineEdit_batchGPU->setObjectName(QStringLiteral("lineEdit_batchGPU"));
        lineEdit_batchGPU->setMaximumSize(QSize(40, 16777215));
        lineEdit_batchGPU->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_36->addWidget(lineEdit_batchGPU);


        horizontalLayout_46->addLayout(verticalLayout_36);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_9);


        verticalLayout_14->addLayout(horizontalLayout_46);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        label_46 = new QLabel(box_calculationSettings);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_44->addWidget(label_46);

        comboBox_streamMode = new QComboBox(box_calculationSettings);
        comboBox_streamMode->setObjectName(QStringLiteral("comboBox_streamMode"));
        comboBox_streamMode->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_44->addWidget(comboBox_streamMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer);


        verticalLayout_14->addLayout(horizontalLayout_44);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        lbl_algo = new QLabel(box_calculationSettings);
        lbl_algo->setObjectName(QStringLiteral("lbl_algo"));
        lbl_algo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(lbl_algo);

        radBtn_PRISM = new QRadioButton(box_calculationSettings);
        radBtn_PRISM->setObjectName(QStringLiteral("radBtn_PRISM"));
        radBtn_PRISM->setChecked(true);
        radBtn_PRISM->setAutoExclusive(true);

        horizontalLayout_21->addWidget(radBtn_PRISM);

        radBtn_Multislice = new QRadioButton(box_calculationSettings);
        radBtn_Multislice->setObjectName(QStringLiteral("radBtn_Multislice"));
        radBtn_Multislice->setAutoExclusive(true);

        horizontalLayout_21->addWidget(radBtn_Multislice);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_4);


        horizontalLayout_22->addLayout(horizontalLayout_21);


        verticalLayout_14->addLayout(horizontalLayout_22);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        btn_reset = new QPushButton(box_calculationSettings);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));
        btn_reset->setEnabled(true);
        btn_reset->setMinimumSize(QSize(0, 50));
        btn_reset->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(14);
        btn_reset->setFont(font2);
        btn_reset->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_15->addWidget(btn_reset);

        btn_calcPotential = new QPushButton(box_calculationSettings);
        btn_calcPotential->setObjectName(QStringLiteral("btn_calcPotential"));
        btn_calcPotential->setEnabled(false);
        btn_calcPotential->setMinimumSize(QSize(0, 50));
        btn_calcPotential->setFont(font2);

        verticalLayout_15->addWidget(btn_calcPotential);

        btn_go = new QPushButton(box_calculationSettings);
        btn_go->setObjectName(QStringLiteral("btn_go"));
        btn_go->setEnabled(false);
        btn_go->setMinimumSize(QSize(0, 50));
        btn_go->setFont(font2);

        verticalLayout_15->addWidget(btn_go);


        verticalLayout_14->addLayout(verticalLayout_15);


        horizontalLayout_20->addLayout(verticalLayout_14);


        verticalLayout_16->addWidget(box_calculationSettings);


        verticalLayout_30->addLayout(verticalLayout_16);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_33->addWidget(scrollArea);

        PRISMMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PRISMMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1429, 22));
        PRISMMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PRISMMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PRISMMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PRISMMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PRISMMainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_slicemin, slider_slicemin);
        QWidget::setTabOrder(slider_slicemin, lineEdit_contrastPotMin);
        QWidget::setTabOrder(lineEdit_contrastPotMin, lineEdit_slicemax);
        QWidget::setTabOrder(lineEdit_slicemax, slider_slicemax);
        QWidget::setTabOrder(slider_slicemax, btn_calculateProbe);
        QWidget::setTabOrder(btn_calculateProbe, lineEdit_probeX);
        QWidget::setTabOrder(lineEdit_probeX, lineEdit_probeY);
        QWidget::setTabOrder(lineEdit_probeY, checkBox_sqrtIntensity2);
        QWidget::setTabOrder(checkBox_sqrtIntensity2, checkBox_log);
        QWidget::setTabOrder(checkBox_log, checkBox_zoomProbe);
        QWidget::setTabOrder(checkBox_zoomProbe, lineEdit_angmin);
        QWidget::setTabOrder(lineEdit_angmin, slider_angmin);
        QWidget::setTabOrder(slider_angmin, lineEdit_contrast_outputMin);
        QWidget::setTabOrder(lineEdit_contrast_outputMin, lineEdit_angmax);
        QWidget::setTabOrder(lineEdit_angmax, slider_angmax);
        QWidget::setTabOrder(slider_angmax, lineEdit_contrast_outputMax);
        QWidget::setTabOrder(lineEdit_contrast_outputMax, lineEdit_saveOutputImage);
        QWidget::setTabOrder(lineEdit_saveOutputImage, btn_saveOutputImage);
        QWidget::setTabOrder(btn_saveOutputImage, btn_saveCoordinates);
        QWidget::setTabOrder(btn_saveCoordinates, scrollArea);
        QWidget::setTabOrder(scrollArea, btn_atomsfile_browse);
        QWidget::setTabOrder(btn_atomsfile_browse, btn_go);
        QWidget::setTabOrder(btn_go, checkBox_sqrtIntensity1);
        QWidget::setTabOrder(checkBox_sqrtIntensity1, lineEdit_contrastPotMax);
        QWidget::setTabOrder(lineEdit_contrastPotMax, tabs);
        QWidget::setTabOrder(tabs, lineEdit_cellDimX);
        QWidget::setTabOrder(lineEdit_cellDimX, lineEdit_cellDimY);
        QWidget::setTabOrder(lineEdit_cellDimY, lineEdit_cellDimZ);
        QWidget::setTabOrder(lineEdit_cellDimZ, lineEdit_tileX);
        QWidget::setTabOrder(lineEdit_tileX, lineEdit_tileY);
        QWidget::setTabOrder(lineEdit_tileY, lineEdit_tileZ);
        QWidget::setTabOrder(lineEdit_tileZ, lineEdit_pixelSizeX);
        QWidget::setTabOrder(lineEdit_pixelSizeX, lineEdit_pixelSizeY);
        QWidget::setTabOrder(lineEdit_pixelSizeY, lineEdit_E0);
        QWidget::setTabOrder(lineEdit_E0, lineEdit_potbound);
        QWidget::setTabOrder(lineEdit_potbound, lineEdit_probeSemiangle);
        QWidget::setTabOrder(lineEdit_probeSemiangle, lineEdit_probeDefocus);
        QWidget::setTabOrder(lineEdit_probeDefocus, lineEdit_C3);
        QWidget::setTabOrder(lineEdit_C3, lineEdit_C5);
        QWidget::setTabOrder(lineEdit_C5, lineEdit_randomSeed);
        QWidget::setTabOrder(lineEdit_randomSeed, spinBox_numFP);
        QWidget::setTabOrder(spinBox_numFP, lineEdit_sliceThickness);
        QWidget::setTabOrder(lineEdit_sliceThickness, lineEdit_detectorAngle);
        QWidget::setTabOrder(lineEdit_detectorAngle, lineEdit_interpFactor_x);
        QWidget::setTabOrder(lineEdit_interpFactor_x, lineEdit_interpFactor_y);
        QWidget::setTabOrder(lineEdit_interpFactor_y, lineEdit_probeStepX);
        QWidget::setTabOrder(lineEdit_probeStepX, lineEdit_probeStepY);
        QWidget::setTabOrder(lineEdit_probeStepY, lineEdit_probeTiltX);
        QWidget::setTabOrder(lineEdit_probeTiltX, lineEdit_probeTiltY);
        QWidget::setTabOrder(lineEdit_probeTiltY, lineEdit_scanWindowXMin);
        QWidget::setTabOrder(lineEdit_scanWindowXMin, lineEdit_scanWindowXMax);
        QWidget::setTabOrder(lineEdit_scanWindowXMax, lineEdit_scanWindowYMin);
        QWidget::setTabOrder(lineEdit_scanWindowYMin, lineEdit_scanWindowYMax);
        QWidget::setTabOrder(lineEdit_scanWindowYMax, lineEdit_outputfile);
        QWidget::setTabOrder(lineEdit_outputfile, checkBox_saveProjectedPotential);
        QWidget::setTabOrder(checkBox_saveProjectedPotential, checkBox_3D);
        QWidget::setTabOrder(checkBox_3D, checkBox_4D);
        QWidget::setTabOrder(checkBox_4D, checkBox_thermalEffects);
        QWidget::setTabOrder(checkBox_thermalEffects, spinBox_numThreads);
        QWidget::setTabOrder(spinBox_numThreads, spinBox_numGPUs);
        QWidget::setTabOrder(spinBox_numGPUs, spinBox_numStreams);
        QWidget::setTabOrder(spinBox_numStreams, lineEdit_batchCPU);
        QWidget::setTabOrder(lineEdit_batchCPU, lineEdit_batchGPU);
        QWidget::setTabOrder(lineEdit_batchGPU, comboBox_streamMode);
        QWidget::setTabOrder(comboBox_streamMode, radBtn_PRISM);
        QWidget::setTabOrder(radBtn_PRISM, radBtn_Multislice);
        QWidget::setTabOrder(radBtn_Multislice, btn_reset);
        QWidget::setTabOrder(btn_reset, btn_calcPotential);

        retranslateUi(PRISMMainWindow);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PRISMMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PRISMMainWindow)
    {
        PRISMMainWindow->setWindowTitle(QApplication::translate("PRISMMainWindow", "PRISMMainWindow", Q_NULLPTR));
        lbl_image_potential->setText(QString());
        label_23->setText(QApplication::translate("PRISMMainWindow", "Slice min/max", Q_NULLPTR));
        lineEdit_slicemin->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        lineEdit_slicemax->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        checkBox_sqrtIntensity1->setText(QApplication::translate("PRISMMainWindow", "Square Root Intensity", Q_NULLPTR));
        label_15->setText(QApplication::translate("PRISMMainWindow", "Contrast", Q_NULLPTR));
        label_24->setText(QString());
        label_22->setText(QString());
        label_16->setText(QApplication::translate("PRISMMainWindow", "Min", Q_NULLPTR));
        label_17->setText(QApplication::translate("PRISMMainWindow", "Max", Q_NULLPTR));
        label_25->setText(QString());
        tabs->setTabText(tabs->indexOf(tab_potential), QApplication::translate("PRISMMainWindow", "Potential", Q_NULLPTR));
        lbl_image_probeInteractive->setText(QString());
        label_38->setText(QApplication::translate("PRISMMainWindow", "Real Space", Q_NULLPTR));
        label_37->setText(QApplication::translate("PRISMMainWindow", "K Space", Q_NULLPTR));
        lbl_R_real->setText(QApplication::translate("PRISMMainWindow", "R = 0", Q_NULLPTR));
        lbl_R_k->setText(QApplication::translate("PRISMMainWindow", "R = 0", Q_NULLPTR));
        lbl_pears_real->setText(QApplication::translate("PRISMMainWindow", "Pearson Correlation = n/a", Q_NULLPTR));
        lbl_pears_k->setText(QApplication::translate("PRISMMainWindow", "Pearson Correlation = n/a", Q_NULLPTR));
        btn_calculateProbe->setText(QApplication::translate("PRISMMainWindow", "Calculate", Q_NULLPTR));
        label_Xprobe->setText(QApplication::translate("PRISMMainWindow", "X", Q_NULLPTR));
        lineEdit_probeX->setText(QApplication::translate("PRISMMainWindow", "0.0", Q_NULLPTR));
        label_Yprobe->setText(QApplication::translate("PRISMMainWindow", "Y", Q_NULLPTR));
        lineEdit_probeY->setText(QApplication::translate("PRISMMainWindow", "0.0", Q_NULLPTR));
        label_20->setText(QApplication::translate("PRISMMainWindow", "Real Space", Q_NULLPTR));
        label_21->setText(QApplication::translate("PRISMMainWindow", "Fourier Space", Q_NULLPTR));
        label_18->setText(QApplication::translate("PRISMMainWindow", "PRISM", Q_NULLPTR));
        lbl_image_probe_pr->setText(QString());
        lbl_image_probe_pk->setText(QString());
        label_19->setText(QApplication::translate("PRISMMainWindow", "Multislice", Q_NULLPTR));
        lbl_image_probe_mr->setText(QString());
        lbl_image_probe_mk->setText(QString());
        label_41->setText(QApplication::translate("PRISMMainWindow", "Difference", Q_NULLPTR));
        lbl_image_probeDifferenceR->setText(QString());
        lbl_image_probeDifferenceK->setText(QString());
        checkBox_sqrtIntensity2->setText(QApplication::translate("PRISMMainWindow", "Square Root Intensity", Q_NULLPTR));
        checkBox_log->setText(QApplication::translate("PRISMMainWindow", "Log Scale", Q_NULLPTR));
        checkBox_zoomProbe->setText(QApplication::translate("PRISMMainWindow", "Zoom Probe Display", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tab_probe), QApplication::translate("PRISMMainWindow", "Probe", Q_NULLPTR));
        lbl_image_output->setText(QString());
        label_26->setText(QApplication::translate("PRISMMainWindow", "Angle min/max (mrads)", Q_NULLPTR));
        label_27->setText(QApplication::translate("PRISMMainWindow", "Contrast", Q_NULLPTR));
        label_29->setText(QString());
        label_30->setText(QApplication::translate("PRISMMainWindow", "Min", Q_NULLPTR));
        label_31->setText(QApplication::translate("PRISMMainWindow", "Max", Q_NULLPTR));
        lineEdit_saveOutputImage->setText(QApplication::translate("PRISMMainWindow", "/path/to/output/file.mrc", Q_NULLPTR));
        btn_saveOutputImage->setText(QApplication::translate("PRISMMainWindow", "Save Current Image", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tab_output), QApplication::translate("PRISMMainWindow", "Output", Q_NULLPTR));
        box_sampleSettings->setTitle(QApplication::translate("PRISMMainWindow", "Sample Settings", Q_NULLPTR));
        btn_atomsfile_browse->setText(QApplication::translate("PRISMMainWindow", "Load Coords", Q_NULLPTR));
        btn_saveCoordinates->setText(QApplication::translate("PRISMMainWindow", "Save Coords", Q_NULLPTR));
        label_8->setText(QString());
        label_cellDim->setText(QApplication::translate("PRISMMainWindow", "Cell Dim.", Q_NULLPTR));
        label_6->setText(QApplication::translate("PRISMMainWindow", "Tile Cells", Q_NULLPTR));
        label_2->setText(QApplication::translate("PRISMMainWindow", "X", Q_NULLPTR));
        lineEdit_cellDimX->setText(QApplication::translate("PRISMMainWindow", "100", Q_NULLPTR));
        label_3->setText(QApplication::translate("PRISMMainWindow", "Y", Q_NULLPTR));
        lineEdit_cellDimY->setText(QApplication::translate("PRISMMainWindow", "100", Q_NULLPTR));
        label_4->setText(QApplication::translate("PRISMMainWindow", "Z", Q_NULLPTR));
        lineEdit_cellDimZ->setText(QApplication::translate("PRISMMainWindow", "80", Q_NULLPTR));
        label_9->setText(QString());
        lbl_angstrom->setText(QApplication::translate("PRISMMainWindow", "A", Q_NULLPTR));
        label_7->setText(QApplication::translate("PRISMMainWindow", "UCs", Q_NULLPTR));
        box_simulationSettings->setTitle(QApplication::translate("PRISMMainWindow", "Simulation Settings", Q_NULLPTR));
        label_47->setText(QString());
        lbl_pixelSize->setText(QApplication::translate("PRISMMainWindow", "Pixel Size (A)", Q_NULLPTR));
        label_48->setText(QApplication::translate("PRISMMainWindow", "X", Q_NULLPTR));
        lineEdit_pixelSizeX->setText(QApplication::translate("PRISMMainWindow", "0.1", Q_NULLPTR));
        label_49->setText(QApplication::translate("PRISMMainWindow", "Y", Q_NULLPTR));
        lineEdit_pixelSizeY->setText(QApplication::translate("PRISMMainWindow", "0.1", Q_NULLPTR));
        lbl_E0->setText(QApplication::translate("PRISMMainWindow", "Energy (keV)", Q_NULLPTR));
        lineEdit_E0->setText(QApplication::translate("PRISMMainWindow", "80", Q_NULLPTR));
        lbl_potBound->setText(QApplication::translate("PRISMMainWindow", "Potential Bound (A)", Q_NULLPTR));
        lineEdit_potbound->setText(QApplication::translate("PRISMMainWindow", "1", Q_NULLPTR));
        label_alphaBeamMax->setText(QApplication::translate("PRISMMainWindow", "Probe Semiangle (mrads)", Q_NULLPTR));
        lineEdit_probeSemiangle->setText(QApplication::translate("PRISMMainWindow", "20", Q_NULLPTR));
        lbl_defocus->setText(QApplication::translate("PRISMMainWindow", "C1 (defocus)", Q_NULLPTR));
        label_45->setText(QApplication::translate("PRISMMainWindow", "C3", Q_NULLPTR));
        label_43->setText(QApplication::translate("PRISMMainWindow", "C5", Q_NULLPTR));
        lineEdit_probeDefocus->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        lineEdit_C3->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        lineEdit_C5->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        lbl_lambda->setText(QApplication::translate("PRISMMainWindow", "l = 0.1 A", Q_NULLPTR));
        lbl_alphaMax->setText(QApplication::translate("PRISMMainWindow", "a_max = 24", Q_NULLPTR));
        label_10->setText(QApplication::translate("PRISMMainWindow", "Random Seed", Q_NULLPTR));
        lbl_numfp->setText(QApplication::translate("PRISMMainWindow", "# of FP", Q_NULLPTR));
        lbl_sliceThickness->setText(QApplication::translate("PRISMMainWindow", "Slice\n"
"Thickness (A)", Q_NULLPTR));
        lineEdit_sliceThickness->setText(QApplication::translate("PRISMMainWindow", "2", Q_NULLPTR));
        label_11->setText(QApplication::translate("PRISMMainWindow", "Detector Angle Step (mrads)", Q_NULLPTR));
        lineEdit_detectorAngle->setText(QApplication::translate("PRISMMainWindow", "2.5", Q_NULLPTR));
        label->setText(QApplication::translate("PRISMMainWindow", "PRISM Interpolation factors", Q_NULLPTR));
        lbl_probeStep->setText(QApplication::translate("PRISMMainWindow", "Probe\n"
"Step (A)", Q_NULLPTR));
        label_5->setText(QApplication::translate("PRISMMainWindow", "Probe Tilt", Q_NULLPTR));
        label_28->setText(QApplication::translate("PRISMMainWindow", "Scan Window", Q_NULLPTR));
        label_32->setText(QString());
        label_13->setText(QApplication::translate("PRISMMainWindow", "X", Q_NULLPTR));
        lineEdit_interpFactor_x->setText(QApplication::translate("PRISMMainWindow", "5", Q_NULLPTR));
        lineEdit_probeStepX->setText(QApplication::translate("PRISMMainWindow", "0.25", Q_NULLPTR));
        lineEdit_probeTiltX->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        lineEdit_scanWindowXMin->setText(QApplication::translate("PRISMMainWindow", "0.1", Q_NULLPTR));
        lineEdit_scanWindowXMax->setText(QApplication::translate("PRISMMainWindow", "0.9", Q_NULLPTR));
        label_33->setText(QApplication::translate("PRISMMainWindow", "Min", Q_NULLPTR));
        label_35->setText(QApplication::translate("PRISMMainWindow", "Max", Q_NULLPTR));
        label_14->setText(QApplication::translate("PRISMMainWindow", "Y", Q_NULLPTR));
        lineEdit_interpFactor_y->setText(QApplication::translate("PRISMMainWindow", "5", Q_NULLPTR));
        lineEdit_probeStepY->setText(QApplication::translate("PRISMMainWindow", "0.25", Q_NULLPTR));
        lineEdit_probeTiltY->setText(QApplication::translate("PRISMMainWindow", "0", Q_NULLPTR));
        lineEdit_scanWindowYMin->setText(QApplication::translate("PRISMMainWindow", "0.1", Q_NULLPTR));
        lineEdit_scanWindowYMax->setText(QApplication::translate("PRISMMainWindow", "0.9", Q_NULLPTR));
        label_36->setText(QApplication::translate("PRISMMainWindow", "Min", Q_NULLPTR));
        label_34->setText(QApplication::translate("PRISMMainWindow", "Max", Q_NULLPTR));
        box_calculationSettings->setTitle(QApplication::translate("PRISMMainWindow", "Calculation Settings", Q_NULLPTR));
        lbl_outputfile->setText(QApplication::translate("PRISMMainWindow", "Output File", Q_NULLPTR));
        checkBox_saveProjectedPotential->setText(QApplication::translate("PRISMMainWindow", "Save projected potentials", Q_NULLPTR));
        label_12->setText(QString());
        checkBox_3D->setText(QApplication::translate("PRISMMainWindow", "Save 3D Output", Q_NULLPTR));
        checkBox_4D->setText(QApplication::translate("PRISMMainWindow", "Save 4D Output", Q_NULLPTR));
        checkBox_thermalEffects->setText(QApplication::translate("PRISMMainWindow", "Thermal Effects", Q_NULLPTR));
        lbl_numthreads->setText(QApplication::translate("PRISMMainWindow", "Num Threads", Q_NULLPTR));
        lbl_numgpus->setText(QApplication::translate("PRISMMainWindow", "Num GPUs", Q_NULLPTR));
        label_50->setText(QApplication::translate("PRISMMainWindow", "Num Streams", Q_NULLPTR));
        label_44->setText(QString());
        label_39->setText(QApplication::translate("PRISMMainWindow", "Batch Size", Q_NULLPTR));
        label_40->setText(QApplication::translate("PRISMMainWindow", "CPU", Q_NULLPTR));
        label_42->setText(QApplication::translate("PRISMMainWindow", "GPU", Q_NULLPTR));
        label_46->setText(QApplication::translate("PRISMMainWindow", "Streaming Mode", Q_NULLPTR));
        comboBox_streamMode->clear();
        comboBox_streamMode->insertItems(0, QStringList()
         << QApplication::translate("PRISMMainWindow", "Auto", Q_NULLPTR)
         << QApplication::translate("PRISMMainWindow", "Single Transfer", Q_NULLPTR)
         << QApplication::translate("PRISMMainWindow", "Streaming", Q_NULLPTR)
        );
        lbl_algo->setText(QApplication::translate("PRISMMainWindow", "Algorithm", Q_NULLPTR));
        radBtn_PRISM->setText(QApplication::translate("PRISMMainWindow", "PRISM", Q_NULLPTR));
        radBtn_Multislice->setText(QApplication::translate("PRISMMainWindow", "Multislice", Q_NULLPTR));
        btn_reset->setText(QApplication::translate("PRISMMainWindow", "Reset Calculation", Q_NULLPTR));
        btn_calcPotential->setText(QApplication::translate("PRISMMainWindow", "Calculate Potentials", Q_NULLPTR));
        btn_go->setText(QApplication::translate("PRISMMainWindow", "Full Calculation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PRISMMainWindow: public Ui_PRISMMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMMAINWINDOW_H