#include "tableValuesQt.h"

tableValuesQt::tableValuesQt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	int tablenght;

	// On créer le champs lineEdit
	setValue = new QLineEdit(this);
	setValue->move(15, 50);
	setValue->setGeometry(300, 150, 100, 20);

	// On créer le label d'informations
	label_1 = new QLabel("Entrer la taille du tableau :", this);
	label_1->setGeometry(300, 130, 200, 20);

	// On instancie un signal qui renvoi vers la fonction createTable
	QObject::connect(setValue, SIGNAL(returnPressed()), this, SLOT(createTable()));
}

void tableValuesQt::createTable() {
	// On récupère la valeur entrée dans la variable tableSize
	tableSize = this->setValue->text().toInt();

	// On effeace les anciens champs
	setValue->setVisible(false);
	label_1->setVisible(false);

	// On va créer les nouveau champs 
	histo = new QLineEdit_Histo(tableSize, this);
	setValue->move(25, 50);
	histo->setGeometry(30, 80, 100, 20);
	histo->setVisible(true);

	// On créer le label d'informations
	label_histo = new QLabel("Entrer la valeur a entrer dans le tableau :", this);
	label_histo->setGeometry(30, 30, 200, 80);
	label_histo->setVisible(true);

	// On créer le tableau d'historique des valeurs
	table = new QTableWidget(this);
	table->move(100, 100);
	table->setGeometry(300, 50, 300, 350);
	table->setVisible(true);

	QObject::connect(label_histo, SIGNAL(returnPressed()), this, SLOT(createTableHisto()));

	// On affiche le bouton pour remettre à Zéro le tableau
	QPushButton *reset = new QPushButton("Remettre a Zero", this);
	reset->move(150, 100);
	reset->setGeometry(30, 30, 100, 20);
	reset->setVisible(true);

	QObject::connect(reset, SIGNAL(clicked()), this, SLOT(resetTableHisto()));
	QObject::connect(reset, SIGNAL(clicked()), this, SLOT(reset()));

}

void tableValuesQt::reset()
{
	table->clear();
}