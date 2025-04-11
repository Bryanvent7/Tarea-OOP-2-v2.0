#pragma once

#include "Empleado.h"
#include "Gerente.h"
#include "Desarrollador.h"

#include "CuadroGerente.h"
#include "CuadroDesarrollador.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ TAPELLIDO;

	private: System::Windows::Forms::TextBox^ CMPONAME;
	private: System::Windows::Forms::Label^ TNAME;
	private: System::Windows::Forms::TextBox^ CMPOID;
	private: System::Windows::Forms::Label^ TID;
	private: System::Windows::Forms::TextBox^ CMPOAPELLI;
	private: System::Windows::Forms::Button^ BTONAGREGAR;

	private: System::Windows::Forms::Label^ TROL;
	private: System::Windows::Forms::TextBox^ CMPOSALARIO;
	private: System::Windows::Forms::Label^ TSALARIO;
	private: System::Windows::Forms::DataGridView^ Personal;





	private: System::Windows::Forms::RadioButton^ CHKGERENTE;
	private: System::Windows::Forms::RadioButton^ CHKDEVELOPER;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZNAME;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZAPELLI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZROL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZSALARIO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZBONO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZLINE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CABEZLINEPRICE;
	private: System::Windows::Forms::RadioButton^ CHKEMPLOYE;






















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CHKDEVELOPER = (gcnew System::Windows::Forms::RadioButton());
			this->CHKGERENTE = (gcnew System::Windows::Forms::RadioButton());
			this->BTONAGREGAR = (gcnew System::Windows::Forms::Button());
			this->TROL = (gcnew System::Windows::Forms::Label());
			this->CMPOSALARIO = (gcnew System::Windows::Forms::TextBox());
			this->TSALARIO = (gcnew System::Windows::Forms::Label());
			this->CMPOAPELLI = (gcnew System::Windows::Forms::TextBox());
			this->TAPELLIDO = (gcnew System::Windows::Forms::Label());
			this->CMPONAME = (gcnew System::Windows::Forms::TextBox());
			this->TNAME = (gcnew System::Windows::Forms::Label());
			this->CMPOID = (gcnew System::Windows::Forms::TextBox());
			this->TID = (gcnew System::Windows::Forms::Label());
			this->Personal = (gcnew System::Windows::Forms::DataGridView());
			this->CABEZID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZNAME = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZAPELLI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZROL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZSALARIO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZBONO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZLINE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CABEZLINEPRICE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CHKEMPLOYE = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Personal))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->CHKEMPLOYE);
			this->groupBox1->Controls->Add(this->CHKDEVELOPER);
			this->groupBox1->Controls->Add(this->CHKGERENTE);
			this->groupBox1->Controls->Add(this->BTONAGREGAR);
			this->groupBox1->Controls->Add(this->TROL);
			this->groupBox1->Controls->Add(this->CMPOSALARIO);
			this->groupBox1->Controls->Add(this->TSALARIO);
			this->groupBox1->Controls->Add(this->CMPOAPELLI);
			this->groupBox1->Controls->Add(this->TAPELLIDO);
			this->groupBox1->Controls->Add(this->CMPONAME);
			this->groupBox1->Controls->Add(this->TNAME);
			this->groupBox1->Controls->Add(this->CMPOID);
			this->groupBox1->Controls->Add(this->TID);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(364, 266);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar";
			// 
			// CHKDEVELOPER
			// 
			this->CHKDEVELOPER->AutoSize = true;
			this->CHKDEVELOPER->Location = System::Drawing::Point(159, 229);
			this->CHKDEVELOPER->Name = L"CHKDEVELOPER";
			this->CHKDEVELOPER->Size = System::Drawing::Size(145, 24);
			this->CHKDEVELOPER->TabIndex = 12;
			this->CHKDEVELOPER->TabStop = true;
			this->CHKDEVELOPER->Text = L"Desarrollador";
			this->CHKDEVELOPER->UseVisualStyleBackColor = true;
			// 
			// CHKGERENTE
			// 
			this->CHKGERENTE->AutoSize = true;
			this->CHKGERENTE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CHKGERENTE->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->CHKGERENTE->Location = System::Drawing::Point(159, 199);
			this->CHKGERENTE->Name = L"CHKGERENTE";
			this->CHKGERENTE->Size = System::Drawing::Size(97, 24);
			this->CHKGERENTE->TabIndex = 11;
			this->CHKGERENTE->Text = L"Gerente";
			this->CHKGERENTE->UseVisualStyleBackColor = true;
			// 
			// BTONAGREGAR
			// 
			this->BTONAGREGAR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTONAGREGAR->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->BTONAGREGAR->FlatAppearance->BorderSize = 15;
			this->BTONAGREGAR->Location = System::Drawing::Point(13, 220);
			this->BTONAGREGAR->Name = L"BTONAGREGAR";
			this->BTONAGREGAR->Size = System::Drawing::Size(119, 33);
			this->BTONAGREGAR->TabIndex = 10;
			this->BTONAGREGAR->Text = L"Agregar";
			this->BTONAGREGAR->UseVisualStyleBackColor = true;
			this->BTONAGREGAR->Click += gcnew System::EventHandler(this, &Form1::BTONAGREGAR_Click);
			// 
			// TROL
			// 
			this->TROL->AutoSize = true;
			this->TROL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TROL->Location = System::Drawing::Point(12, 173);
			this->TROL->Name = L"TROL";
			this->TROL->Size = System::Drawing::Size(111, 22);
			this->TROL->TabIndex = 8;
			this->TROL->Text = L"Rol            ";
			// 
			// CMPOSALARIO
			// 
			this->CMPOSALARIO->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->CMPOSALARIO->Location = System::Drawing::Point(159, 136);
			this->CMPOSALARIO->Name = L"CMPOSALARIO";
			this->CMPOSALARIO->Size = System::Drawing::Size(191, 26);
			this->CMPOSALARIO->TabIndex = 7;
			// 
			// TSALARIO
			// 
			this->TSALARIO->AutoSize = true;
			this->TSALARIO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TSALARIO->Location = System::Drawing::Point(12, 137);
			this->TSALARIO->Name = L"TSALARIO";
			this->TSALARIO->Size = System::Drawing::Size(112, 22);
			this->TSALARIO->TabIndex = 6;
			this->TSALARIO->Text = L"Salario       ";
			// 
			// CMPOAPELLI
			// 
			this->CMPOAPELLI->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->CMPOAPELLI->Location = System::Drawing::Point(159, 101);
			this->CMPOAPELLI->Name = L"CMPOAPELLI";
			this->CMPOAPELLI->Size = System::Drawing::Size(191, 26);
			this->CMPOAPELLI->TabIndex = 5;
			// 
			// TAPELLIDO
			// 
			this->TAPELLIDO->AutoSize = true;
			this->TAPELLIDO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TAPELLIDO->Location = System::Drawing::Point(12, 102);
			this->TAPELLIDO->Name = L"TAPELLIDO";
			this->TAPELLIDO->Size = System::Drawing::Size(114, 22);
			this->TAPELLIDO->TabIndex = 4;
			this->TAPELLIDO->Text = L"Apellido      ";
			// 
			// CMPONAME
			// 
			this->CMPONAME->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->CMPONAME->Location = System::Drawing::Point(159, 67);
			this->CMPONAME->Name = L"CMPONAME";
			this->CMPONAME->Size = System::Drawing::Size(191, 26);
			this->CMPONAME->TabIndex = 3;
			// 
			// TNAME
			// 
			this->TNAME->AutoSize = true;
			this->TNAME->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TNAME->Location = System::Drawing::Point(12, 67);
			this->TNAME->Name = L"TNAME";
			this->TNAME->Size = System::Drawing::Size(118, 22);
			this->TNAME->TabIndex = 2;
			this->TNAME->Text = L"Nombre       ";
			// 
			// CMPOID
			// 
			this->CMPOID->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->CMPOID->Location = System::Drawing::Point(159, 30);
			this->CMPOID->Name = L"CMPOID";
			this->CMPOID->Size = System::Drawing::Size(191, 26);
			this->CMPOID->TabIndex = 1;
			// 
			// TID
			// 
			this->TID->AutoSize = true;
			this->TID->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TID->Location = System::Drawing::Point(12, 31);
			this->TID->Name = L"TID";
			this->TID->Size = System::Drawing::Size(120, 22);
			this->TID->TabIndex = 0;
			this->TID->Text = L"ID               ";
			// 
			// Personal
			// 
			this->Personal->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->Personal->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->Personal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Personal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->CABEZID, this->CABEZNAME,
					this->CABEZAPELLI, this->CABEZROL, this->CABEZSALARIO, this->CABEZBONO, this->CABEZLINE, this->CABEZLINEPRICE
			});
			this->Personal->Cursor = System::Windows::Forms::Cursors::Default;
			this->Personal->EnableHeadersVisualStyles = false;
			this->Personal->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Personal->Location = System::Drawing::Point(392, 24);
			this->Personal->Name = L"Personal";
			this->Personal->RowHeadersVisible = false;
			this->Personal->RowHeadersWidth = 51;
			this->Personal->RowTemplate->Height = 24;
			this->Personal->Size = System::Drawing::Size(423, 254);
			this->Personal->TabIndex = 1;
			// 
			// CABEZID
			// 
			this->CABEZID->HeaderText = L"ID";
			this->CABEZID->MinimumWidth = 6;
			this->CABEZID->Name = L"CABEZID";
			this->CABEZID->ReadOnly = true;
			this->CABEZID->Width = 35;
			// 
			// CABEZNAME
			// 
			this->CABEZNAME->HeaderText = L"Nombre";
			this->CABEZNAME->MinimumWidth = 6;
			this->CABEZNAME->Name = L"CABEZNAME";
			this->CABEZNAME->ReadOnly = true;
			this->CABEZNAME->Width = 125;
			// 
			// CABEZAPELLI
			// 
			this->CABEZAPELLI->HeaderText = L"Apellido";
			this->CABEZAPELLI->MinimumWidth = 6;
			this->CABEZAPELLI->Name = L"CABEZAPELLI";
			this->CABEZAPELLI->ReadOnly = true;
			this->CABEZAPELLI->Width = 125;
			// 
			// CABEZROL
			// 
			this->CABEZROL->HeaderText = L"Rol";
			this->CABEZROL->MinimumWidth = 6;
			this->CABEZROL->Name = L"CABEZROL";
			this->CABEZROL->ReadOnly = true;
			this->CABEZROL->Width = 80;
			// 
			// CABEZSALARIO
			// 
			this->CABEZSALARIO->HeaderText = L"Salario";
			this->CABEZSALARIO->MinimumWidth = 6;
			this->CABEZSALARIO->Name = L"CABEZSALARIO";
			this->CABEZSALARIO->ReadOnly = true;
			this->CABEZSALARIO->Width = 70;
			// 
			// CABEZBONO
			// 
			this->CABEZBONO->HeaderText = L"Bono";
			this->CABEZBONO->MinimumWidth = 6;
			this->CABEZBONO->Name = L"CABEZBONO";
			this->CABEZBONO->Width = 70;
			// 
			// CABEZLINE
			// 
			this->CABEZLINE->HeaderText = L"Lineas Hechas";
			this->CABEZLINE->MinimumWidth = 6;
			this->CABEZLINE->Name = L"CABEZLINE";
			this->CABEZLINE->Width = 70;
			// 
			// CABEZLINEPRICE
			// 
			this->CABEZLINEPRICE->HeaderText = L"Precio x Linea";
			this->CABEZLINEPRICE->MinimumWidth = 6;
			this->CABEZLINEPRICE->Name = L"CABEZLINEPRICE";
			this->CABEZLINEPRICE->Width = 70;
			// 
			// CHKEMPLOYE
			// 
			this->CHKEMPLOYE->AutoSize = true;
			this->CHKEMPLOYE->Location = System::Drawing::Point(159, 172);
			this->CHKEMPLOYE->Name = L"CHKEMPLOYE";
			this->CHKEMPLOYE->Size = System::Drawing::Size(137, 24);
			this->CHKEMPLOYE->TabIndex = 13;
			this->CHKEMPLOYE->TabStop = true;
			this->CHKEMPLOYE->Text = L"Empleado";
			this->CHKEMPLOYE->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(832, 302);
			this->Controls->Add(this->Personal);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Test";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Personal))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BTONAGREGAR_Click(System::Object^ sender, System::EventArgs^ e) {
		// Validación básica de campos vacíos
		if (CMPOID->Text->Length == 0 || CMPONAME->Text->Length == 0 ||
			CMPOAPELLI->Text->Length == 0 || CMPOSALARIO->Text->Length == 0) {
			MessageBox::Show("Todos los campos son obligatorios");
			return;
		}

		 if (CMPOID->Text == "Blood" && 
        CMPONAME->Text == "Interactive" && 
        CMPOAPELLI->Text == "Ultra" && 
        CMPOSALARIO->Text == "Kill")
    {

			 // Cambiar colores
			 this->BackColor = Color::Red;  // Fondo del formulario rojo

			 // GroupBox rojo oscuro
			 groupBox1->BackColor = Color::DarkRed;
			 groupBox1->ForeColor = Color::White;

			 // DataGridView rojo oscuro
			 Personal->BackgroundColor = Color::DarkRed;
			 Personal->ForeColor = Color::White;
			 Personal->GridColor = Color::Firebrick;

            if (CHKGERENTE->Checked) 
            {
                auto player = gcnew System::Media::SoundPlayer("Tenebre Rosso Sangue(cover).wav");
                player->Play();
            }
            else if (CHKDEVELOPER->Checked) 
            {
                auto player = gcnew System::Media::SoundPlayer("Tenebre Rosso Sangue(Og).wav");
                player->Play();
            }
        return;
    }

		// Convertir salario
		double salario;
		if (!Double::TryParse(CMPOSALARIO->Text, salario)) {
			MessageBox::Show("El salario debe ser un número válido");
			return;
		}

		// Verificar ID único
		for each (DataGridViewRow ^ row in Personal->Rows) {
			if (row->Cells[0]->Value != nullptr && row->Cells[0]->Value->ToString() == CMPOID->Text) {
				MessageBox::Show("El ID ya existe");
				return;
			}
		}

		// Procesar según el tipo de empleado
		String^ rol;
		String^ bono;
		String^ lineas;
		String^ precioLinea;


		if (CHKEMPLOYE->Checked) {
			rol = "Empleado";
			bono = "0";
			lineas = "0";
			precioLinea = "0";
		}
		if (CHKGERENTE->Checked) {
			rol = "Gerente";
			lineas = "0";
			precioLinea = "0";
			CuadroGerente^ formGerente = gcnew CuadroGerente();
			if (formGerente->ShowDialog() == Windows::Forms::DialogResult::OK) {
				bono = formGerente->Bono->ToString();  // Usando -> aquí
			}
			else {
				return;
			}
		}
		else if (CHKDEVELOPER->Checked) {
			rol = "Desarrollador";
			bono = "0";
			CuadroDesarrollador^ formDev = gcnew CuadroDesarrollador();
			if (formDev->ShowDialog() == Windows::Forms::DialogResult::OK) {
				lineas = formDev->LineasHechas.ToString();  // Para tipos de valor (int) se usa .
				precioLinea = formDev->PrecioPorLinea.ToString("F2");  // Para tipos de valor (double) se usa .
			}
			else {
				return;
			}
		}

		// Agregar a DataGridView - Nota cómo se usa -> para métodos de String^
		Personal->Rows->Add(
			CMPOID->Text,
			CMPONAME->Text,
			CMPOAPELLI->Text,
			rol,
			salario.ToString("F2"),  // double es tipo de valor, usa .
			bono,                   // Ya es String^
			lineas,                 // Ya es String^
			precioLinea            // Ya es String^
		);

		// Limpiar formulario
		CMPOID->Clear();
		CMPONAME->Clear();
		CMPOAPELLI->Clear();
		CMPOSALARIO->Clear();
		CHKGERENTE->Checked = false;
		CHKDEVELOPER->Checked = false;
		CMPOID->Focus();
	}
};
}
