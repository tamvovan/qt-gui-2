#pragma once

#include <QtWidgets/QMainWindow>
#include <QCheckBox>
#include <QLabel>
#include <QPushButton>
#include <QListView>
#include <QLineEdit>
#include <QStringListModel>
#include <QStringList>
#include <QVBoxlayout>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "ui_demoqtgui2.h"

class demoqtgui2 : public QMainWindow
{
	Q_OBJECT

public:
	demoqtgui2(QWidget *parent = Q_NULLPTR);

private:
	Ui::demoqtgui2Class ui;
};
