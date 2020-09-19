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
			this->label1->Location = System::Drawing::Point(321, 35);
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
			this->Text = L"MyForm";
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

}
};
}
