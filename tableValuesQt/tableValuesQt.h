#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tableValuesQt.h"

#include "QLineEdit_Histo.h"
#include <QLabel>
#include <QTableWidget>
#include <QPushButton>
#include <QStandardItemModel>


class tableValuesQt : public QMainWindow
{
    Q_OBJECT

public:
    tableValuesQt(QWidget *parent = Q_NULLPTR);

private:
    Ui::tableValuesQtClass ui;

	// On instancie les QLineEdit
	QLineEdit_Histo *setValue;
	QLabel *label_histo;
	QStandardItemModel *histoModel;

public slots:
	void onHistoUpdated(QVector<QString>tab);
};
