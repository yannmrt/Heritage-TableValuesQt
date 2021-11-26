#include "QLineEdit_Histo.h"

QLineEdit_Histo::QLineEdit_Histo(int tableSize, QWidget *parent)
	: QLineEdit((QWidget * )parent)
{
	this->tableSize = tableSize;

	QObject::connect(this, SIGNAL(returnPressed()), this, SLOT(insertHisto()));
}

void QLineEdit_Histo::insertHisto()
{
	// On récupère la valeur entrée 
	value = this->text();

	if (value.size() > 0) {
		if (tab.size() <= this->tableSize) {

			tab.push_back(value);
			emit HistoUpdated(tab);
		}
		else {
			tab.pop_front();
			tab.push_back(value);
			emit HistoUpdated(tab);
		}
	}
}