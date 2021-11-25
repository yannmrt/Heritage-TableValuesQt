#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tableValuesQt.h"

#include "QLineEdit_Histo.h"
#include <QLabel>
#include <QTableWidget>
#include <QPushButton>

class tableValuesQt : public QMainWindow
{
    Q_OBJECT

public:
    tableValuesQt(QWidget *parent = Q_NULLPTR);

	int tablenght;
	int tableSize;


private:
    Ui::tableValuesQtClass ui;

	// On instancie les QLineEdit
	QLineEdit *setValue;
	QLineEdit_Histo *histo;

	// On instancie les labels
	QLabel *label_1;
	QLabel *label_histo;

	// On instancie le tableau
	QTableWidget *table; 

public slots:
	void createTable();
	void reset();
};
