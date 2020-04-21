#include "demoqtgui2.h"

demoqtgui2::demoqtgui2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QStringList listData;
	listData << "Start/Exit options"
		<< "JPG/PCD/GIF"
		<< "Extensions"
		<< "Viewing"
		<< "Zoom/Color management"
		<< "Browsing/Editing"
		<< "Full screen/Slideshow"
		<< "Video/Sound"
		<< "File Handing"
		<< "Language"
		<< "Toolbar"
		<< "Plugins"
		<< "Miscellaneous";

	QStringListModel* model = new QStringListModel(this);
	model->setStringList(listData);

	QListView* listView = new QListView(this);
	listView->setGeometry(10, 20, 180, 240);
	listView->setModel(model);

	QLabel* label1 = new QLabel("Miscellaneous", this);
	label1->setGeometry(200, 20, 300, 20);


	QFrame* frame = new QFrame(this);
	frame->setGeometry(200, 50, 450, 180);
	frame->setFrameShape(QFrame::Box);
	
	QCheckBox* checkBox1 = new QCheckBox("Open slideshow dialog in last used slideshow folder( or use the current folder)", frame);
	checkBox1->setGeometry(10, 10, 440, 20);
	QCheckBox* checkBox2 = new QCheckBox("Open Batch dialog in last used batch foler( or use the current folder)", frame);
	checkBox2->setGeometry(10, 30, 440, 20);
	QCheckBox* checkBox3 = new QCheckBox("Show \"Recent files\" in File menu( max: 15 most recently used files)", frame);
	checkBox3->setGeometry(10, 50, 440, 20);
	QCheckBox* checkBox4 = new QCheckBox("Show \"Recent folder\" in Open/Save dialog( max: 20 most recently folder)", frame);
	checkBox4->setGeometry(10, 70, 440, 20);

	QPushButton* pushBtn1 = new QPushButton("Clear", frame);
	pushBtn1->setGeometry(10, 100, 70, 25);
	QLabel* label2 = new QLabel("\"Recent folders\" last in File->Open dialog", frame);
	label2->setGeometry(90, 100, 440, 25);

	QPushButton* pushBtn2 = new QPushButton("Create", frame);
	pushBtn2->setGeometry(10, 130, 70, 25);
	QLabel* label3 = new QLabel("desktop link for Main View( Current user, Hostkey: Ctrl+Shift+I)", frame);
	label3->setGeometry(90, 130, 440, 25);
	

	QVBoxLayout* qvBox = new QVBoxLayout(this);

	QHBoxLayout* qhBox1 = new QHBoxLayout();
	QLabel* qhLabel1 = new QLabel("1");
	QLineEdit* qhEdit1 = new QLineEdit();
	QPushButton* qhPushBtn1 = new QPushButton("Browser");
	qhBox1->addWidget(qhLabel1);
	qhBox1->addWidget(qhEdit1);
	qhBox1->addWidget(qhPushBtn1);

	QHBoxLayout* qhBox2 = new QHBoxLayout();
	QLabel* qhLabel2 = new QLabel("2");
	QLineEdit* qhEdit2 = new QLineEdit();
	QPushButton* qhPushBtn2 = new QPushButton("Browser");
	qhBox2->addWidget(qhLabel2);
	qhBox2->addWidget(qhEdit2);
	qhBox2->addWidget(qhPushBtn2);

	QHBoxLayout* qhBox3 = new QHBoxLayout();
	QLabel* qhLabel3 = new QLabel("3");
	QLineEdit* qhEdit3 = new QLineEdit();
	QPushButton* qhPushBtn3 = new QPushButton("Browser");
	qhBox3->addWidget(qhLabel3);
	qhBox3->addWidget(qhEdit3);
	qhBox3->addWidget(qhPushBtn3);

	QHBoxLayout* qhBox4 = new QHBoxLayout();
	QCheckBox* qhCheckBox1 = new QCheckBox("Send short file name to extenal editor");
	QPushButton* qhPushBtn4 = new QPushButton("Help");
	qhCheckBox1->setFixedWidth(270);
	qhPushBtn4->setFixedWidth(75);
	qhBox4->setAlignment(Qt::AlignLeft);
	qhBox4->addWidget(qhCheckBox1);
	qhBox4->addWidget(qhPushBtn4);

	QCheckBox* checkBox5 = new QCheckBox("If several thumbails selected: Send all filenames in one cell");
	QLabel* label4 = new QLabel("Hint: If you need more editions click the Help bitton for informations");

	qvBox->addLayout(qhBox1);
	qvBox->addLayout(qhBox2);
	qvBox->addLayout(qhBox3);
	qvBox->addLayout(qhBox4);
	qvBox->addWidget(checkBox5);
	qvBox->addWidget(label4);

	QGroupBox* groupBox = new QGroupBox("Set external editons", this);
	groupBox->setGeometry(200, 240, 450, 200);
	groupBox->setLayout(qvBox);

	
	QFrame* frame2 = new QFrame(this);
	frame2->setGeometry(10, 270, 180, 120);
	frame2->setFrameShape(QFrame::Box);

	QPushButton* btnOK = new QPushButton("OK", frame2);
	btnOK->setGeometry(50, 30, 80, 20);
	QPushButton* btnCancel = new QPushButton("Cancel", frame2);
	btnCancel->setGeometry(50, 70, 80, 20);
}
