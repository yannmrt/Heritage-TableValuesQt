#include "QLineEdit_Histo.h"

QLineEdit_Histo::QLineEdit_Histo(int tableSize, QObject *parent)
	: QLineEdit((QWidget * )parent)
{
	this->tableSize = tableSize;

	QObject::connect(this, SIGNAL(returnPressed()), this, SLOT(createTableHisto()));
}

void QLineEdit_Histo::createTableHisto()
{
	// On r�cup�re la valeur entr�e 
	value = this->text();
	qDebug() << value;

	if (valueNumber >= tableSize) {
		// On retire une case
	}
	else {
		
	}
}

void QLineEdit_Histo::resetTableHisto()
{
	qDebug() << "Signal reset clicked 1";

}