#pragma once
namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class CuadroDesarrollador : public System::Windows::Forms::Form
    {
    public:
        property int LineasHechas {
            int get() { return lineasValue; }
        }

        property double PrecioPorLinea {
            double get() { return precioLineaValue; }
        }

        CuadroDesarrollador(void) {
            InitializeComponent();
            lineasValue = 0;
            precioLineaValue = 0.0;
        }

    protected:
        ~CuadroDesarrollador() {
            if (components) {
                delete components;
            }
        }

    private:
        int lineasValue;
        double precioLineaValue;
    private: System::Windows::Forms::Label^ ADVERDEV;
    private: System::Windows::Forms::Label^ DISCLINES;
    private: System::Windows::Forms::Label^ DISCLINEPRICE;
    private: System::Windows::Forms::TextBox^ CMPOLINEAS;
    private: System::Windows::Forms::TextBox^ CMPOPRECLINES;






        System::Windows::Forms::Button^ btnAceptar;

        System::ComponentModel::Container^ components;

        void InitializeComponent(void) {
            this->ADVERDEV = (gcnew System::Windows::Forms::Label());
            this->DISCLINES = (gcnew System::Windows::Forms::Label());
            this->DISCLINEPRICE = (gcnew System::Windows::Forms::Label());
            this->CMPOLINEAS = (gcnew System::Windows::Forms::TextBox());
            this->CMPOPRECLINES = (gcnew System::Windows::Forms::TextBox());
            this->btnAceptar = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // ADVERDEV
            // 
            this->ADVERDEV->AutoSize = true;
            this->ADVERDEV->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->ADVERDEV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ADVERDEV->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ADVERDEV->Location = System::Drawing::Point(13, 13);
            this->ADVERDEV->Name = L"ADVERDEV";
            this->ADVERDEV->Size = System::Drawing::Size(371, 25);
            this->ADVERDEV->TabIndex = 0;
            this->ADVERDEV->Text = L"!!!Usted ha Seleccionado Desarrollador!!!";
            // 
            // DISCLINES
            // 
            this->DISCLINES->AutoSize = true;
            this->DISCLINES->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DISCLINES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DISCLINES->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DISCLINES->Location = System::Drawing::Point(12, 63);
            this->DISCLINES->Name = L"DISCLINES";
            this->DISCLINES->Size = System::Drawing::Size(123, 20);
            this->DISCLINES->TabIndex = 1;
            this->DISCLINES->Text = L"Líneas hechas:";
            // 
            // DISCLINEPRICE
            // 
            this->DISCLINEPRICE->AutoSize = true;
            this->DISCLINEPRICE->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->DISCLINEPRICE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DISCLINEPRICE->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->DISCLINEPRICE->Location = System::Drawing::Point(12, 103);
            this->DISCLINEPRICE->Name = L"DISCLINEPRICE";
            this->DISCLINEPRICE->Size = System::Drawing::Size(131, 20);
            this->DISCLINEPRICE->TabIndex = 2;
            this->DISCLINEPRICE->Text = L"Precio por línea:";
            // 
            // CMPOLINEAS
            // 
            this->CMPOLINEAS->Location = System::Drawing::Point(170, 63);
            this->CMPOLINEAS->Name = L"CMPOLINEAS";
            this->CMPOLINEAS->Size = System::Drawing::Size(150, 22);
            this->CMPOLINEAS->TabIndex = 3;
            // 
            // CMPOPRECLINES
            // 
            this->CMPOPRECLINES->Location = System::Drawing::Point(170, 103);
            this->CMPOPRECLINES->Name = L"CMPOPRECLINES";
            this->CMPOPRECLINES->Size = System::Drawing::Size(150, 22);
            this->CMPOPRECLINES->TabIndex = 4;
            // 
            // btnAceptar
            // 
            this->btnAceptar->Location = System::Drawing::Point(170, 150);
            this->btnAceptar->Name = L"btnAceptar";
            this->btnAceptar->Size = System::Drawing::Size(150, 30);
            this->btnAceptar->TabIndex = 5;
            this->btnAceptar->Text = L"Aceptar";
            this->btnAceptar->UseVisualStyleBackColor = true;
            this->btnAceptar->Click += gcnew System::EventHandler(this, &CuadroDesarrollador::btnAceptar_Click);
            // 
            // CuadroDesarrollador
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::WindowText;
            this->ClientSize = System::Drawing::Size(400, 200);
            this->Controls->Add(this->btnAceptar);
            this->Controls->Add(this->CMPOPRECLINES);
            this->Controls->Add(this->CMPOLINEAS);
            this->Controls->Add(this->DISCLINEPRICE);
            this->Controls->Add(this->DISCLINES);
            this->Controls->Add(this->ADVERDEV);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Name = L"CuadroDesarrollador";
            this->Text = L"Advertencia";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
            // Validar líneas hechas
            if (String::IsNullOrWhiteSpace(CMPOLINEAS->Text)) {
                MessageBox::Show("Por favor, ingrese las líneas de código.");
                return;
            }

            // Validar precio por línea
            if (String::IsNullOrWhiteSpace(CMPOPRECLINES->Text)) {
                MessageBox::Show("Por favor, ingrese el precio por línea.");
                return;
            }

            // Convertir y validar valores numéricos
            try {
                lineasValue = Int32::Parse(CMPOLINEAS->Text);
                precioLineaValue = Double::Parse(CMPOPRECLINES->Text);

                if (lineasValue < 0 || precioLineaValue < 0) {
                    MessageBox::Show("Los valores no pueden ser negativos.");
                    return;
                }
            }
            catch (FormatException^) {
                MessageBox::Show("Por favor, ingrese valores numéricos válidos.");
                return;
            }

            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }
    };
}