#pragma once
#include <cstdlib>
#include <ctime>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace PasswordGenerator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lenght;
	private: System::Windows::Forms::Label^ Symbols;
	private: System::Windows::Forms::Label^ Numbers;
	private: System::Windows::Forms::Label^ Lowercase;
	private: System::Windows::Forms::Label^ Uppercase;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ LenghtA;
	private: System::Windows::Forms::CheckBox^ BoxSymbols;
	private: System::Windows::Forms::CheckBox^ BoxNumbers;
	private: System::Windows::Forms::CheckBox^ BoxLowercase;
	private: System::Windows::Forms::CheckBox^ BoxUppercase;
	private: System::Windows::Forms::TextBox^ Password1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ phrase;
	private: System::Windows::Forms::CheckBox^ BoxPhrase;
	private: System::Windows::Forms::TextBox^ TextPhrase;
	private: System::Windows::Forms::TextBox^ Replacement;
	private: System::Windows::Forms::CheckBox^ BoxReplacement;
	private: System::Windows::Forms::CheckBox^ UEnter;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Lenght = (gcnew System::Windows::Forms::Label());
			this->Symbols = (gcnew System::Windows::Forms::Label());
			this->Numbers = (gcnew System::Windows::Forms::Label());
			this->Lowercase = (gcnew System::Windows::Forms::Label());
			this->Uppercase = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->LenghtA = (gcnew System::Windows::Forms::TextBox());
			this->BoxSymbols = (gcnew System::Windows::Forms::CheckBox());
			this->BoxNumbers = (gcnew System::Windows::Forms::CheckBox());
			this->BoxLowercase = (gcnew System::Windows::Forms::CheckBox());
			this->BoxUppercase = (gcnew System::Windows::Forms::CheckBox());
			this->Password1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->phrase = (gcnew System::Windows::Forms::Label());
			this->BoxPhrase = (gcnew System::Windows::Forms::CheckBox());
			this->TextPhrase = (gcnew System::Windows::Forms::TextBox());
			this->Replacement = (gcnew System::Windows::Forms::TextBox());
			this->BoxReplacement = (gcnew System::Windows::Forms::CheckBox());
			this->UEnter = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// Lenght
			// 
			this->Lenght->AutoSize = true;
			this->Lenght->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Lenght->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lenght->ForeColor = System::Drawing::Color::White;
			this->Lenght->Location = System::Drawing::Point(13, 13);
			this->Lenght->Name = L"Lenght";
			this->Lenght->Size = System::Drawing::Size(183, 29);
			this->Lenght->TabIndex = 0;
			this->Lenght->Text = L"Password Lenght:";
			// 
			// Symbols
			// 
			this->Symbols->AutoSize = true;
			this->Symbols->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Symbols->ForeColor = System::Drawing::Color::White;
			this->Symbols->Location = System::Drawing::Point(13, 52);
			this->Symbols->Name = L"Symbols";
			this->Symbols->Size = System::Drawing::Size(179, 29);
			this->Symbols->TabIndex = 1;
			this->Symbols->Text = L"Include Symbols:";
			// 
			// Numbers
			// 
			this->Numbers->AutoSize = true;
			this->Numbers->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Numbers->ForeColor = System::Drawing::Color::White;
			this->Numbers->Location = System::Drawing::Point(13, 91);
			this->Numbers->Name = L"Numbers";
			this->Numbers->Size = System::Drawing::Size(187, 29);
			this->Numbers->TabIndex = 2;
			this->Numbers->Text = L"Include Numbers:";
			// 
			// Lowercase
			// 
			this->Lowercase->AutoSize = true;
			this->Lowercase->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lowercase->ForeColor = System::Drawing::Color::White;
			this->Lowercase->Location = System::Drawing::Point(13, 130);
			this->Lowercase->Name = L"Lowercase";
			this->Lowercase->Size = System::Drawing::Size(200, 29);
			this->Lowercase->TabIndex = 3;
			this->Lowercase->Text = L"Include Lowercase:";
			// 
			// Uppercase
			// 
			this->Uppercase->AutoSize = true;
			this->Uppercase->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Uppercase->ForeColor = System::Drawing::Color::White;
			this->Uppercase->Location = System::Drawing::Point(13, 169);
			this->Uppercase->Name = L"Uppercase";
			this->Uppercase->Size = System::Drawing::Size(201, 29);
			this->Uppercase->TabIndex = 4;
			this->Uppercase->Text = L"Include Uppercase:";
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Location = System::Drawing::Point(19, 332);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(118, 29);
			this->Password->TabIndex = 5;
			this->Password->Text = L"Password:";
			// 
			// LenghtA
			// 
			this->LenghtA->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->LenghtA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LenghtA->Location = System::Drawing::Point(257, 20);
			this->LenghtA->Name = L"LenghtA";
			this->LenghtA->Size = System::Drawing::Size(150, 19);
			this->LenghtA->TabIndex = 6;
			// 
			// BoxSymbols
			// 
			this->BoxSymbols->AutoSize = true;
			this->BoxSymbols->Checked = true;
			this->BoxSymbols->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BoxSymbols->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->BoxSymbols->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxSymbols->ForeColor = System::Drawing::Color::White;
			this->BoxSymbols->Location = System::Drawing::Point(257, 57);
			this->BoxSymbols->Name = L"BoxSymbols";
			this->BoxSymbols->Size = System::Drawing::Size(100, 28);
			this->BoxSymbols->TabIndex = 7;
			this->BoxSymbols->Text = L"(@#$%)";
			this->BoxSymbols->UseVisualStyleBackColor = true;
			// 
			// BoxNumbers
			// 
			this->BoxNumbers->AutoSize = true;
			this->BoxNumbers->Checked = true;
			this->BoxNumbers->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BoxNumbers->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxNumbers->ForeColor = System::Drawing::Color::White;
			this->BoxNumbers->Location = System::Drawing::Point(257, 97);
			this->BoxNumbers->Name = L"BoxNumbers";
			this->BoxNumbers->Size = System::Drawing::Size(138, 28);
			this->BoxNumbers->TabIndex = 8;
			this->BoxNumbers->Text = L"(123456789)";
			this->BoxNumbers->UseVisualStyleBackColor = true;
			// 
			// BoxLowercase
			// 
			this->BoxLowercase->AutoSize = true;
			this->BoxLowercase->Checked = true;
			this->BoxLowercase->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BoxLowercase->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxLowercase->ForeColor = System::Drawing::Color::White;
			this->BoxLowercase->Location = System::Drawing::Point(257, 133);
			this->BoxLowercase->Name = L"BoxLowercase";
			this->BoxLowercase->Size = System::Drawing::Size(112, 28);
			this->BoxLowercase->TabIndex = 9;
			this->BoxLowercase->Text = L"(abcdefg)";
			this->BoxLowercase->UseVisualStyleBackColor = true;
			// 
			// BoxUppercase
			// 
			this->BoxUppercase->AutoSize = true;
			this->BoxUppercase->Checked = true;
			this->BoxUppercase->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BoxUppercase->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxUppercase->ForeColor = System::Drawing::Color::White;
			this->BoxUppercase->Location = System::Drawing::Point(257, 172);
			this->BoxUppercase->Name = L"BoxUppercase";
			this->BoxUppercase->Size = System::Drawing::Size(126, 28);
			this->BoxUppercase->TabIndex = 10;
			this->BoxUppercase->Text = L"(ABCDEFG)";
			this->BoxUppercase->UseVisualStyleBackColor = true;
			// 
			// Password1
			// 
			this->Password1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Password1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password1->Location = System::Drawing::Point(257, 334);
			this->Password1->Name = L"Password1";
			this->Password1->Size = System::Drawing::Size(250, 25);
			this->Password1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageKey = L"(none)";
			this->button1->Location = System::Drawing::Point(28, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 40);
			this->button1->TabIndex = 13;
			this->button1->Text = L"🔐Generate";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// phrase
			// 
			this->phrase->AutoSize = true;
			this->phrase->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->phrase->ForeColor = System::Drawing::Color::White;
			this->phrase->Location = System::Drawing::Point(13, 208);
			this->phrase->Name = L"phrase";
			this->phrase->Size = System::Drawing::Size(149, 29);
			this->phrase->TabIndex = 14;
			this->phrase->Text = L"Phrase based:";
			// 
			// BoxPhrase
			// 
			this->BoxPhrase->AutoSize = true;
			this->BoxPhrase->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->BoxPhrase->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxPhrase->Location = System::Drawing::Point(257, 211);
			this->BoxPhrase->Name = L"BoxPhrase";
			this->BoxPhrase->Size = System::Drawing::Size(22, 21);
			this->BoxPhrase->TabIndex = 15;
			this->BoxPhrase->UseVisualStyleBackColor = true;
			this->BoxPhrase->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BoxPhrase_CheckedChanged);
			// 
			// TextPhrase
			// 
			this->TextPhrase->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->TextPhrase->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextPhrase->Location = System::Drawing::Point(190, 137);
			this->TextPhrase->Name = L"TextPhrase";
			this->TextPhrase->Size = System::Drawing::Size(149, 19);
			this->TextPhrase->TabIndex = 16;
			// 
			// Replacement
			// 
			this->Replacement->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Replacement->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Replacement->Font = (gcnew System::Drawing::Font(L"Calibri", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Replacement->Location = System::Drawing::Point(350, 12);
			this->Replacement->Multiline = true;
			this->Replacement->Name = L"Replacement";
			this->Replacement->Size = System::Drawing::Size(80, 222);
			this->Replacement->TabIndex = 17;
			// 
			// BoxReplacement
			// 
			this->BoxReplacement->AutoSize = true;
			this->BoxReplacement->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BoxReplacement->ForeColor = System::Drawing::Color::White;
			this->BoxReplacement->Location = System::Drawing::Point(171, 165);
			this->BoxReplacement->Name = L"BoxReplacement";
			this->BoxReplacement->Size = System::Drawing::Size(199, 28);
			this->BoxReplacement->TabIndex = 17;
			this->BoxReplacement->Text = L"Show replacements";
			this->BoxReplacement->UseVisualStyleBackColor = true;
			this->BoxReplacement->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BoxReplacement_CheckedChanged);
			// 
			// UEnter
			// 
			this->UEnter->AutoSize = true;
			this->UEnter->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UEnter->ForeColor = System::Drawing::Color::White;
			this->UEnter->Location = System::Drawing::Point(171, 190);
			this->UEnter->Name = L"UEnter";
			this->UEnter->Size = System::Drawing::Size(104, 24);
			this->UEnter->TabIndex = 16;
			this->UEnter->Text = L"Enter the replacements";
			this->UEnter->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(675, 392);
			this->Controls->Add(this->BoxPhrase);
			this->Controls->Add(this->phrase);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Password1);
			this->Controls->Add(this->BoxUppercase);
			this->Controls->Add(this->BoxLowercase);
			this->Controls->Add(this->BoxNumbers);
			this->Controls->Add(this->BoxSymbols);
			this->Controls->Add(this->LenghtA);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Uppercase);
			this->Controls->Add(this->Lowercase);
			this->Controls->Add(this->Numbers);
			this->Controls->Add(this->Symbols);
			this->Controls->Add(this->Lenght);
			this->MinimumSize = System::Drawing::Size(662, 430);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Password Generator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = "";
		std::string ph;
		std::string password;

		if (BoxSymbols->Checked)
		{
			str += "@#$%^&*[]{}-+=;,.<>~";
		}
		if (BoxNumbers->Checked)
		{
			str += "0123456789";
		}
		if (BoxLowercase->Checked)
		{
			str += "abcdefghijklmnopqrstuvwxyz";
		}
		if (BoxUppercase->Checked)
		{
			str += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		}

		srand(time(0));
		if (BoxPhrase->Checked == 0)
		{
			int pos;
			while (password.size() != Convert::ToInt32(LenghtA->Text))
			{
				pos = ((rand() % (str.size() - 1)));
				password += str.substr(pos, 1);
			}

			this->Password1->Text = gcnew String(password.c_str());
		}
		else
		{
			if (UEnter->Checked == 0) {
				ph = msclr::interop::marshal_as<std::string>(TextPhrase->Text);

				int pos;
				std::string a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;

				a = randy(a);
				b = randy(b);
				c = randy(c);
				d = randy(d);
				e = randy(e);
				f = randy(f);
				g = randy(g);
				h = randy(h);
				i = randy(i);
				j = randy(j);
				k = randy(k);
				l = randy(l);
				m = randy(m);
				n = randy(n);
				o = randy(o);
				p = randy(p);
				q = randy(q);
				r = randy(r);
				s = randy(s);
				t = randy(t);
				u = randy(u);
				v = randy(v);
				w = randy(w);
				x = randy(x);
				y = randy(y);
				z = randy(z);

				for (int bruh = 0; bruh < ph.length(); bruh++)
				{
					switch (ph.at(bruh))
					{
					case ' ':
						break;
					case 'a':
						password += a;
						break;
					case 'b':
						password += b;
						break;
					case 'c':
						password += c;
						break;
					case 'd':
						password += d;
						break;
					case 'e':
						password += e;
						break;
					case 'f':
						password += f;
						break;
					case 'g':
						password += g;
						break;
					case 'h':
						password += h;
						break;
					case 'i':
						password += i;
						break;
					case 'j':
						password += j;
						break;
					case 'k':
						password += k;
						break;
					case 'l':
						password += l;
						break;
					case 'm':
						password += m;
						break;
					case 'n':
						password += n;
						break;
					case 'o':
						password += o;
						break;
					case 'p':
						password += p;
						break;
					case 'q':
						password += q;
						break;
					case 'r':
						password += r;
						break;
					case 's':
						password += s;
						break;
					case 't':
						password += t;
						break;
					case 'u':
						password += u;
						break;
					case 'v':
						password += v;
						break;
					case 'w':
						password += w;
						break;
					case 'x':
						password += x;
						break;
					case 'y':
						password += y;
						break;
					case 'z':
						password += z;
						break;
					default:
						password += ph.at(bruh);
						break;
					}
				}

				System::String^ repl;
				repl += "a - ";
				repl += gcnew String(a.c_str());
				repl += "\r\nb - ";
				repl += gcnew String(b.c_str());
				repl += "\r\nc - ";
				repl += gcnew String(c.c_str());
				repl += "\r\nd - ";
				repl += gcnew String(d.c_str());
				repl += "\r\ne - ";
				repl += gcnew String(e.c_str());
				repl += "\r\nf - ";
				repl += gcnew String(f.c_str());
				repl += "\r\ng - ";
				repl += gcnew String(g.c_str());
				repl += "\r\nh - ";
				repl += gcnew String(h.c_str());
				repl += "\r\ni - ";
				repl += gcnew String(i.c_str());
				repl += "\r\nj - ";
				repl += gcnew String(j.c_str());
				repl += "\r\nk - ";
				repl += gcnew String(k.c_str());
				repl += "\r\nl - ";
				repl += gcnew String(l.c_str());
				repl += "\r\nm - ";
				repl += gcnew String(m.c_str());
				repl += "\r\nn - ";
				repl += gcnew String(n.c_str());
				repl += "\r\no - ";
				repl += gcnew String(o.c_str());
				repl += "\r\np - ";
				repl += gcnew String(p.c_str());
				repl += "\r\nq - ";
				repl += gcnew String(q.c_str());
				repl += "\r\nr - ";
				repl += gcnew String(r.c_str());
				repl += "\r\ns - ";
				repl += gcnew String(s.c_str());
				repl += "\r\nt - ";
				repl += gcnew String(t.c_str());
				repl += "\r\nu - ";
				repl += gcnew String(u.c_str());
				repl += "\r\nv - ";
				repl += gcnew String(v.c_str());
				repl += "\r\nw - ";
				repl += gcnew String(w.c_str());
				repl += "\r\nx - ";
				repl += gcnew String(x.c_str());
				repl += "\r\ny - ";
				repl += gcnew String(y.c_str());
				repl += "\r\nz - ";
				repl += gcnew String(z.c_str());

				this->Replacement->Text = repl;

				this->Password1->Text = gcnew String(password.c_str());
			}
			else
			{
				ph = msclr::interop::marshal_as<std::string>(TextPhrase->Text);

				std::string a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;

				std::string bab = msclr::interop::marshal_as<std::string>(Replacement->Text);

				a = bab.substr((bab.find("a - ") + 4), (bab.find("\r\nb - ") - bab.find("a - ") - 4));
				b = bab.substr((bab.find("b - ") + 4), (bab.find("\r\nc - ") - bab.find("b - ") - 4));
				c = bab.substr((bab.find("c - ") + 4), (bab.find("\r\nd - ") - bab.find("c - ") - 4));
				d = bab.substr((bab.find("d - ") + 4), (bab.find("\r\ne - ") - bab.find("d - ") - 4));
				e = bab.substr((bab.find("e - ") + 4), (bab.find("\r\nf - ") - bab.find("e - ") - 4));
				f = bab.substr((bab.find("f - ") + 4), (bab.find("\r\ng - ") - bab.find("f - ") - 4));
				g = bab.substr((bab.find("g - ") + 4), (bab.find("\r\nh - ") - bab.find("g - ") - 4));
				h = bab.substr((bab.find("h - ") + 4), (bab.find("\r\ni - ") - bab.find("h - ") - 4));
				i = bab.substr((bab.find("i - ") + 4), (bab.find("\r\nj - ") - bab.find("i - ") - 4));
				j = bab.substr((bab.find("j - ") + 4), (bab.find("\r\nk - ") - bab.find("j - ") - 4));
				k = bab.substr((bab.find("k - ") + 4), (bab.find("\r\nl - ") - bab.find("k - ") - 4));
				l = bab.substr((bab.find("l - ") + 4), (bab.find("\r\nm - ") - bab.find("l - ") - 4));
				m = bab.substr((bab.find("m - ") + 4), (bab.find("\r\nn - ") - bab.find("m - ") - 4));
				n = bab.substr((bab.find("n - ") + 4), (bab.find("\r\no - ") - bab.find("n - ") - 4));
				o = bab.substr((bab.find("o - ") + 4), (bab.find("\r\np - ") - bab.find("o - ") - 4));
				p = bab.substr((bab.find("p - ") + 4), (bab.find("\r\nq - ") - bab.find("p - ") - 4));
				q = bab.substr((bab.find("q - ") + 4), (bab.find("\r\nr - ") - bab.find("q - ") - 4));
				r = bab.substr((bab.find("r - ") + 4), (bab.find("\r\ns - ") - bab.find("r - ") - 4));
				s = bab.substr((bab.find("s - ") + 4), (bab.find("\r\nt - ") - bab.find("s - ") - 4));
				t = bab.substr((bab.find("t - ") + 4), (bab.find("\r\nu - ") - bab.find("t - ") - 4));
				u = bab.substr((bab.find("u - ") + 4), (bab.find("\r\nv - ") - bab.find("u - ") - 4));
				v = bab.substr((bab.find("v - ") + 4), (bab.find("\r\nw - ") - bab.find("v - ") - 4));
				w = bab.substr((bab.find("w - ") + 4), (bab.find("\r\nx - ") - bab.find("w - ") - 4));
				x = bab.substr((bab.find("x - ") + 4), (bab.find("\r\ny - ") - bab.find("x - ") - 4));
				y = bab.substr((bab.find("y - ") + 4), (bab.find("\r\nz - ") - bab.find("y - ") - 4));
				z = bab.substr((bab.find("z - ") + 4), 3);

				this->Password1->Text = gcnew String(b.c_str());

				for (int bruh = 0; bruh < ph.length(); bruh++)
				{
					switch (ph.at(bruh))
					{
					case ' ':
						break;
					case 'a':
						password += a;
						break;
					case 'b':
						password += b;
						break;
					case 'c':
						password += c;
						break;
					case 'd':
						password += d;
						break;
					case 'e':
						password += e;
						break;
					case 'f':
						password += f;
						break;
					case 'g':
						password += g;
						break;
					case 'h':
						password += h;
						break;
					case 'i':
						password += i;
						break;
					case 'j':
						password += j;
						break;
					case 'k':
						password += k;
						break;
					case 'l':
						password += l;
						break;
					case 'm':
						password += m;
						break;
					case 'n':
						password += n;
						break;
					case 'o':
						password += o;
						break;
					case 'p':
						password += p;
						break;
					case 'q':
						password += q;
						break;
					case 'r':
						password += r;
						break;
					case 's':
						password += s;
						break;
					case 't':
						password += t;
						break;
					case 'u':
						password += u;
						break;
					case 'v':
						password += v;
						break;
					case 'w':
						password += w;
						break;
					case 'x':
						password += x;
						break;
					case 'y':
						password += y;
						break;
					case 'z':
						password += z;
						break;
					default:
						password += ph.at(bruh);
						break;
					}
				}

				this->Password1->Text = gcnew String(password.c_str());
			}
		}
	}

	public: std::string randy(std::string a)
	{
		std::string str = "";
		int pos;

		if (BoxSymbols->Checked)
		{
			str += "@#$%^&*[]{}-+=;,.<>~";
		}
		if (BoxNumbers->Checked)
		{
			str += "0123456789";
		}
		if (BoxLowercase->Checked)
		{
			str += "abcdefghijklmnopqrstuvwxyz";
		}
		if (BoxUppercase->Checked)
		{
			str += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		}

		for (int i = 0; i < (1 + (rand() % 3)); i++)
		{
			pos = ((rand() % (str.size() - 1)));
			a += str.substr(pos, 1);
		}

		return a;
	}

	private: System::Void BoxPhrase_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (BoxPhrase->Checked == 0)
		{
			this->Controls->Remove(this->TextPhrase);
			this->Controls->Remove(this->BoxReplacement);
			this->Controls->Remove(this->Replacement);
			this->Controls->Remove(this->UEnter);
		}
		else
		{
			this->Controls->Add(this->TextPhrase);
			this->Controls->Add(this->BoxReplacement);
		}
	}
	private: System::Void BoxReplacement_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (BoxReplacement->Checked == 0)
		{
			this->Controls->Remove(this->Replacement);
			this->Controls->Remove(this->UEnter);
		}
		else
		{
			this->Controls->Add(this->Replacement);
			this->Controls->Add(this->UEnter);
		}
	}
	};
}