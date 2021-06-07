#include "MyForm.h"
#include "quickSort.h"
#include "sort_main.h"
#include "system_process.h"
#include "mergeSort.h"
#include "treeSort.h"
#include "InFILE.h"
#include <string>
#include "FormVizualize.h"

system_process mainsys;
quickSort quickmain;
mergeSort mergemain;
treeSort treemain;
sort_main* mainsort;
InFILE writeinf;

using namespace System;
using namespace System::Windows::Forms;

std::string StringTostring(String^ datainfo);

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    KursovayaRobota::MyForm form;
    Application::Run(% form);
}

System::Void KursovayaRobota::MyForm::button_generate_Click(System::Object^ sender, System::EventArgs^ e)
{
    label_process->Visible = false;
    std::string check;
    bool flag = false;
    check = StringTostring(gen_text->Text);
    if (check.length() < 8)
    {
        for (int i = 0; i < check.length(); i++)
        {
            if (isdigit(check[i]) == 0)
            {
            gen_text->Text = "";
            flag = true;
            break;
            }
        }   

        if (flag == false)
        {
            if (Convert::ToInt32(gen_text->Text) > 0)
            {
                mainsys.Gen_Array(Convert::ToInt32(gen_text->Text));
                label_size->Visible = true;
                label_size->Text = Convert::ToString(mainsys.Get_Count());
                button_sort->Enabled = true;
            }
        }
        else
        {
            label_process->Visible = true;
            label_process->Text = "Введіть розмір масиву натуральними числами у цифровому форматі.";
        }

    }
    else
    {
        gen_text->Text = "";
        label_process->Visible = true;
        label_process->Text = "Максимальний розмір - 9999999.";
    }
}

System::Void KursovayaRobota::MyForm::button_sort_Click(System::Object^ sender, System::EventArgs^ e)
{
    label_process->Visible = false;
    if (comboBox_sort->Text == Convert::ToString(comboBox_sort->Items[0]))
    {
        mainsort = &quickmain;
        mainsys.Set_Sort_Type("quick");
    }
    else if (comboBox_sort->Text == Convert::ToString(comboBox_sort->Items[1]))
    {
        mainsort = &mergemain;
        mainsys.Set_Sort_Type("merge");
    }
    else if (comboBox_sort->Text == Convert::ToString(comboBox_sort->Items[2]))
    {
        mainsort = &treemain;
        mainsys.Set_Sort_Type("tree");
    }
    else
    {
        comboBox_sort->Text = "";
        label_process->Visible = true;
        label_process->Text = "Оберіть метод сортування.";
        return;
    }
    

    mainsort->SET(mainsys.Get_Array(), mainsys.Get_Count());
    mainsort->init_sort(radioButton_inc->Checked ? true : false);
    mainsys.Set_Sorted(mainsort->get_arr(), mainsort->get_count());
    label_time->Text = Convert::ToString(mainsort->get_sort_time());
    label_compare->Text = Convert::ToString(mainsort->get_compare());
    label_swap->Text = Convert::ToString(mainsort->get_swap());

    button_vizualize_gen->Enabled = false;

    button_file->Enabled = true;
    if (comboBox_sort->Text != Convert::ToString(comboBox_sort->Items[2]))
    {
        button_vizualize_gen->Enabled = true;
    }
    label_sorted->Visible = true;
    label_method->Visible = true;
    label_method->Text = comboBox_sort->Text;
}

System::Void KursovayaRobota::MyForm::button_file_Click(System::Object^ sender, System::EventArgs^ e)
{
    writeinf.setInFILE(mainsys.Get_Sorted(), mainsys.Get_Count(), mainsort->get_sort_time(), mainsort->get_compare(), mainsort->get_swap());
    writeinf.getInFILE();
}

System::Void KursovayaRobota::MyForm::button_vizualize_gen_Click(System::Object^ sender, System::EventArgs^ e)
{
    FormVizualize^ form = gcnew FormVizualize();
    form->Owner = this;
    form->ShowDialog();
}

System::Void KursovayaRobota::MyForm::button_vizualize_sort_Click(System::Object^ sender, System::EventArgs^ e)
{
}

System::Void KursovayaRobota::MyForm::MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    Application::Exit();
}

std::string StringTostring(String^ datainfo)
{
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(datainfo)).ToPointer();

    std::string temp = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));

    return chars;
}

