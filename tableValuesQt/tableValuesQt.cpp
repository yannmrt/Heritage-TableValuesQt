#include "tableValuesQt.h"

tableValuesQt::tableValuesQt(QWidget *parent)
	: QMainWindow(parent)
{
    ui.setupUi(this);

	// On va créer les nouveau champs 
	setValue = new QLineEdit_Histo(10, this);
	setValue->move(25, 120);
	setValue->setGeometry(30, 120, 100, 20);

	// On créer le label d'informations
	label_histo = new QLabel("Entrer la valeur a entrer dans le tableau :", this);
	label_histo->setGeometry(30, 30, 200, 80);

	// On instancie un signal qui renvoi vers la fonction createTable
	//QObject::connect(setValue, SIGNAL(returnPressed()), this, SLOT(createTable()));
	QObject::connect(setValue, &QLineEdit_Histo::HistoUpdated, this, &tableValuesQt::onHistoUpdated);

	histoModel = new QStandardItemModel(this);
}

void tableValuesQt::onHistoUpdated(QVector<QString>tab)
{
	histoModel->clear();

	for (int i = 0; i < tab.size(); i++) {
		histoModel->appendRow(new QStandardItem(tab[i]));
		qDebug() << tab[i];
	}

	ui.histTableView->setModel(histoModel);
}