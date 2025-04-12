#pragma once
namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class CuadroMaestro : public System::Windows::Forms::Form
    {
    public:
        property String^ TituloProf {
            String^ get() { return txtTitulo->Text; }
        }

        property String^ ClaseAsignada {
            String^ get() { return txtClase->Text; }
        }

        property String^ SeccionAsignada {
            String^ get() { return txtSeccion->Text; }
        }

        CuadroMaestro(void) {
            InitializeComponent();
        }

    protected:
        ~CuadroMaestro() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ ADVERMASTER;
        System::Windows::Forms::Label^ DICLTITLE;
        System::Windows::Forms::Label^ DISCLASIGN;
        System::Windows::Forms::TextBox^ txtTitulo;
        System::Windows::Forms::TextBox^ txtClase;
        System::Windows::Forms::Button^ btnAceptar;
        System::Windows::Forms::Label^ DISCLSECSIGN;
        System::Windows::Forms::TextBox^ txtSeccion;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void) {
            this->ADVERMASTER = (gcnew System::Windows::Forms::Label());
            this->DICLTITLE = (gcnew System::Windows::Forms::Label());
            this->DISCLASIGN = (gcnew System::Windows::Forms::Label());
            this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
            this->txtClase = (gcnew System::Windows::Forms::TextBox());
            this->btnAceptar = (gcnew System::Windows::Forms::Button());
            this->DISCLSECSIGN = (gcnew System::Windows::Forms::Label());
            this->txtSeccion = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();

            // Configuración de controles
            this->ADVERMASTER->AutoSize = true;
            this->ADVERMASTER->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->ADVERMASTER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ADVERMASTER->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ADVERMASTER->Location = System::Drawing::Point(13, 13);
            this->ADVERMASTER->Name = L"ADVERMASTER";
            this->ADVERMASTER->Size = System::Drawing::Size(326, 25);
            this->ADVERMASTER->TabIndex = 0;
            this->ADVERMASTER->Text = L"!!!Usted ha Seleccionado Maestro!!!";

            this->DICLTITLE->AutoSize = true;
            this->DICLTITLE->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DICLTITLE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DICLTITLE->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DICLTITLE->Location = System::Drawing::Point(12, 63);
            this->DICLTITLE->Name = L"DICLTITLE";
            this->DICLTITLE->Size = System::Drawing::Size(55, 20);
            this->DICLTITLE->TabIndex = 1;
            this->DICLTITLE->Text = L"Titulo:";

            this->DISCLASIGN->AutoSize = true;
            this->DISCLASIGN->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DISCLASIGN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DISCLASIGN->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DISCLASIGN->Location = System::Drawing::Point(12, 93);
            this->DISCLASIGN->Name = L"DISCLASIGN";
            this->DISCLASIGN->Size = System::Drawing::Size(131, 20);
            this->DISCLASIGN->TabIndex = 2;
            this->DISCLASIGN->Text = L"Clase Asignada:";

            this->txtTitulo->Location = System::Drawing::Point(189, 63);
            this->txtTitulo->Name = L"txtTitulo";
            this->txtTitulo->Size = System::Drawing::Size(150, 22);
            this->txtTitulo->TabIndex = 3;

            this->txtClase->Location = System::Drawing::Point(189, 92);
            this->txtClase->Name = L"txtClase";
            this->txtClase->Size = System::Drawing::Size(150, 22);
            this->txtClase->TabIndex = 4;

            this->btnAceptar->Location = System::Drawing::Point(189, 154);
            this->btnAceptar->Name = L"btnAceptar";
            this->btnAceptar->Size = System::Drawing::Size(150, 30);
            this->btnAceptar->TabIndex = 5;
            this->btnAceptar->Text = L"Aceptar";
            this->btnAceptar->UseVisualStyleBackColor = true;
            this->btnAceptar->Click += gcnew System::EventHandler(this, &CuadroMaestro::btnAceptar_Click);

            this->DISCLSECSIGN->AutoSize = true;
            this->DISCLSECSIGN->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DISCLSECSIGN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DISCLSECSIGN->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DISCLSECSIGN->Location = System::Drawing::Point(12, 123);
            this->DISCLSECSIGN->Name = L"DISCLSECSIGN";
            this->DISCLSECSIGN->Size = System::Drawing::Size(148, 20);
            this->DISCLSECSIGN->TabIndex = 6;
            this->DISCLSECSIGN->Text = L"Seccion Asignada:";

            this->txtSeccion->Location = System::Drawing::Point(189, 121);
            this->txtSeccion->Name = L"txtSeccion";
            this->txtSeccion->Size = System::Drawing::Size(150, 22);
            this->txtSeccion->TabIndex = 7;

            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::WindowText;
            this->ClientSize = System::Drawing::Size(400, 200);
            this->Controls->Add(this->txtSeccion);
            this->Controls->Add(this->DISCLSECSIGN);
            this->Controls->Add(this->btnAceptar);
            this->Controls->Add(this->txtClase);
            this->Controls->Add(this->txtTitulo);
            this->Controls->Add(this->DISCLASIGN);
            this->Controls->Add(this->DICLTITLE);
            this->Controls->Add(this->ADVERMASTER);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Name = L"CuadroMaestro";
            this->Text = L"Advertencia";
            this->ResumeLayout(false);
            this->PerformLayout();
        }

    private:
        System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(txtTitulo->Text) ||
                String::IsNullOrWhiteSpace(txtClase->Text) ||
                String::IsNullOrWhiteSpace(txtSeccion->Text)) {
                MessageBox::Show("Por favor, llene todos los campos.");
                return;
            }

            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }
    };
}