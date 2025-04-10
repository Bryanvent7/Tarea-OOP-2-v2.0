#pragma once
namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class CuadroGerente : public System::Windows::Forms::Form
    {
    public:
        property String^ Bono {
            String^ get() { return bonoValue; }
        }

        CuadroGerente(void) {
            InitializeComponent();
            bonoValue = String::Empty;
        }

    protected:
        ~CuadroGerente() {
            if (components) {
                delete components;
            }
        }

    private:
        String^ bonoValue;
        System::Windows::Forms::Label^ ADVERGERENT;
        System::Windows::Forms::Label^ DISCLGERENT1;
        System::Windows::Forms::Label^ DISCLGERENT2;
        System::Windows::Forms::TextBox^ CMPOBONO;
        System::Windows::Forms::Button^ BTONACEPGERENT;

        System::ComponentModel::Container^ components;

        void InitializeComponent(void) {
            this->ADVERGERENT = (gcnew System::Windows::Forms::Label());
            this->DISCLGERENT1 = (gcnew System::Windows::Forms::Label());
            this->DISCLGERENT2 = (gcnew System::Windows::Forms::Label());
            this->CMPOBONO = (gcnew System::Windows::Forms::TextBox());
            this->BTONACEPGERENT = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();

            // ADVERGERENT
            this->ADVERGERENT->AutoSize = true;
            this->ADVERGERENT->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->ADVERGERENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ADVERGERENT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ADVERGERENT->Location = System::Drawing::Point(13, 13);
            this->ADVERGERENT->Name = L"ADVERGERENT";
            this->ADVERGERENT->Size = System::Drawing::Size(325, 25);
            this->ADVERGERENT->TabIndex = 0;
            this->ADVERGERENT->Text = L"!!!Usted ha Seleccionado Gerente!!!";

            // DISCLGERENT1
            this->DISCLGERENT1->AutoSize = true;
            this->DISCLGERENT1->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DISCLGERENT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DISCLGERENT1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DISCLGERENT1->Location = System::Drawing::Point(12, 63);
            this->DISCLGERENT1->Name = L"DISCLGERENT1";
            this->DISCLGERENT1->Size = System::Drawing::Size(244, 20);
            this->DISCLGERENT1->TabIndex = 1;
            this->DISCLGERENT1->Text = L"El Gerente necesita de un bono";

            // DISCLGERENT2
            this->DISCLGERENT2->AutoSize = true;
            this->DISCLGERENT2->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DISCLGERENT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DISCLGERENT2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DISCLGERENT2->Location = System::Drawing::Point(12, 83);
            this->DISCLGERENT2->Name = L"DISCLGERENT2";
            this->DISCLGERENT2->Size = System::Drawing::Size(158, 20);
            this->DISCLGERENT2->TabIndex = 2;
            this->DISCLGERENT2->Text = L"Ingrese un bono:     ";

            // CMPOBONO
            this->CMPOBONO->Location = System::Drawing::Point(13, 139);
            this->CMPOBONO->Name = L"CMPOBONO";
            this->CMPOBONO->Size = System::Drawing::Size(201, 22);
            this->CMPOBONO->TabIndex = 3;

            // BTONACEPGERENT
            this->BTONACEPGERENT->Location = System::Drawing::Point(263, 138);
            this->BTONACEPGERENT->Name = L"BTONACEPGERENT";
            this->BTONACEPGERENT->Size = System::Drawing::Size(75, 23);
            this->BTONACEPGERENT->TabIndex = 4;
            this->BTONACEPGERENT->Text = L"Aceptar";
            this->BTONACEPGERENT->UseVisualStyleBackColor = true;
            this->BTONACEPGERENT->Click += gcnew System::EventHandler(this, &CuadroGerente::BTONACEPGERENT_Click);

            // CuadroGerente
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::WindowText;
            this->ClientSize = System::Drawing::Size(356, 192);
            this->Controls->Add(this->BTONACEPGERENT);
            this->Controls->Add(this->CMPOBONO);
            this->Controls->Add(this->DISCLGERENT2);
            this->Controls->Add(this->DISCLGERENT1);
            this->Controls->Add(this->ADVERGERENT);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Name = L"CuadroGerente";
            this->Text = L"Advertencia";
            this->ResumeLayout(false);
            this->PerformLayout();
        }

    private:
        System::Void BTONACEPGERENT_Click(System::Object^ sender, System::EventArgs^ e) {
            bonoValue = CMPOBONO->Text;

            if (String::IsNullOrWhiteSpace(bonoValue)) {
                MessageBox::Show("Por favor, agregue un bono.");
                return;
            }

            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }
    };
}