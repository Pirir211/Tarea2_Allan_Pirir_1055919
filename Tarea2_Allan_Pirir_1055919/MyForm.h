#pragma once
#include "cstdlib"
#include "string"
#include "ctime"
namespace Tarea2AllanPirir1055919 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGVPista;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnEmpezar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ lblMostrar;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DGVPista = (gcnew System::Windows::Forms::DataGridView());
			this->btnEmpezar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblMostrar = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPista))->BeginInit();
			this->SuspendLayout();
			// 
			// DGVPista
			// 
			this->DGVPista->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->DGVPista->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DGVPista->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->DGVPista->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->DGVPista->ColumnHeadersHeight = 5;
			this->DGVPista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->DGVPista->Location = System::Drawing::Point(12, 153);
			this->DGVPista->Name = L"DGVPista";
			this->DGVPista->RowHeadersWidth = 51;
			this->DGVPista->RowTemplate->Height = 24;
			this->DGVPista->Size = System::Drawing::Size(1919, 390);
			this->DGVPista->TabIndex = 0;
			this->DGVPista->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DGVPista_CellContentClick);
			// 
			// btnEmpezar
			// 
			this->btnEmpezar->Location = System::Drawing::Point(39, 12);
			this->btnEmpezar->Name = L"btnEmpezar";
			this->btnEmpezar->Size = System::Drawing::Size(229, 56);
			this->btnEmpezar->TabIndex = 3;
			this->btnEmpezar->Text = L"Empezar Carrera";
			this->btnEmpezar->UseVisualStyleBackColor = true;
			this->btnEmpezar->Click += gcnew System::EventHandler(this, &MyForm::btnEmpezar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(537, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(524, 70);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Tortuga VS Liebre ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->Location = System::Drawing::Point(59, 88);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(51, 17);
			this->lblMostrar->TabIndex = 5;
			this->lblMostrar->TabStop = true;
			this->lblMostrar->Text = L"Vamos";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1979, 602);
			this->Controls->Add(this->lblMostrar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEmpezar);
			this->Controls->Add(this->DGVPista);
			this->Name = L"MyForm";
			this->Text = L"Carrera";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVPista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		DGVPista->ColumnCount = 70;
		DGVPista->RowCount = 2;
		DGVPista->Rows[0]->Cells[0]->Value = "T-L";
		
		
	}
	private: System::Void DGVPista_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnEmpezar_Click(System::Object^ sender, System::EventArgs^ e) {
	lblMostrar->Text = "¡BANG!" +
		"¡Y ARRANCAN!";

	_sleep(1500);
	// se crear el arreglo para poder posicionar en las diferentes posiciones 
	int mapa[70];
	// se crean los vectores 
	// se lleno el arreglo con los movimientos posibles, es su respectiva posicion
	int probabilidadTortuga[10] = { 3,3,3,3,3,-6,-6,1,1,1 };
	int probabilidadLiebre[10] = { 0,0,9,9,-12,1,1,1,-2,-2 };

	//Punteros definicion

	int	*tortuga, *liebre;
	//Ubicacion de liebre y conejo es la posicion 0 de mi vector
	liebre = &mapa[0];
	tortuga = &mapa[0];


	//Creo variables y asigno valores al vector mapa
	//para poder moverme con los punteros 
	for (int i = 0; i < 70; i++)
	{
		mapa[i] = i + 1;
	}

	bool fin = false;
	// se crea un contador para agregar las filas
	int a = 0;
	int ganador = 0;
	while (!fin)
	{
		// cambia el paso de cada corredor cada vez que se repita el ciclo 
		CambiarPos(mapa, probabilidadTortuga, &tortuga);
		CambiarPos(mapa, probabilidadLiebre, &liebre);

		// El ciclo muestra la posicion de los corredores
		for (int i = 0; i < 70; i++)
		{
			if (tortuga == liebre && tortuga != &mapa[0] && tortuga != &mapa[69])
			{
				DGVPista->Rows[a]->Cells[i]->Value = "¡OUCH! ";
			}

			else if (tortuga == &mapa[i])
			{
				DGVPista->Rows[a]->Cells[i]->Value = "T";
			}
			else if (liebre == &mapa[i])
			{
				DGVPista->Rows[a]->Cells[i]->Value = "L ";
			}
			else 
			{
				DGVPista->Rows[a]->Cells[i]->Value = "";
			}
			
		}
		if (tortuga == &mapa[69])
		{
			
			ganador = 1;
			fin = true;
		}
		
		else if (liebre == &mapa[69])
		{
			ganador = 2;
			fin = true;
		}
		a++;
		//Agrega otra fila para poder mostrar la posion, segun el ciclo de carrera
		DGVPista->Rows->Add();
		
	}
	if (ganador==1)
	{
		MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO! ");

	}
	else if (ganador==2)
	{
		MessageBox::Show("La liebre gana. Ni hablar");
	}

   }
	   void CambiarPos(int map[70], int probabilidad[10], int** Gamer)
	   {
		   // se escoje un numero randon 
		   int value = rand() % 10;

		   // se le asigna una nueva posiocion al corredor 
		   int NuevaPos = **Gamer + probabilidad[value];

		   
		   NuevaPos = NuevaPos >= 70 ? 69 : (NuevaPos < 0 ? 0 : NuevaPos);

		   // la posion  del corredor en el mapa
		   *Gamer = &map[NuevaPos];

	   }
};
}
