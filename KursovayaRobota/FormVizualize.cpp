#include "FormVizualize.h"
#include "MyForm.h"
#include "vizualize_sort.h"
#include "system_process.h"
#include "quickSort.h"
#include "mergeSort.h"

sort_main* sortm;
quickSort quickm;
mergeSort mergem;
vizualize_sort vizmain;
extern system_process mainsys;

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main_viz(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    KursovayaRobota::FormVizualize form;
    Application::Run(% form);
}

System::Void KursovayaRobota::FormVizualize::button_vizualize_Click(System::Object^ sender, System::EventArgs^ e)
{
    pictureBox_graph->Enabled = false;
    pictureBox_graph->Enabled = true;
    Graphics^ g = pictureBox_graph->CreateGraphics();
    Pen^ p = gcnew Pen(Color::White, 1.0f);
    vizmain.SET(mainsys.Get_Array(), mainsys.Get_Count());
    vizmain.scale();
    Point p1, p2;
    for (int i = 0; i < 1000; i++)
    {
        p1.X = 5 + i;
        p2.X = 5 + i;
        p1.Y = 900;
        p2.Y = 900 - vizmain.get_Scaled()[i];
        g->DrawLine(p, p1, p2);
    }
}

System::Void KursovayaRobota::FormVizualize::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    pictureBox_graph->Enabled = false;
    pictureBox_graph->Enabled = true;
    Graphics^ g = pictureBox_graph->CreateGraphics();
    Pen^ p = gcnew Pen(Color::White, 1.0f);
    vizmain.SET(mainsys.Get_Sorted(), mainsys.Get_Count());
    vizmain.scale();
    Point p1, p2;
    for (int i = 0; i < 1000; i++)
    {
        p1.X = 5 + i;
        p2.X = 5 + i;
        p1.Y = 900;
        p2.Y = 900 - vizmain.get_Scaled()[i];
        g->DrawLine(p, p1, p2);
    }
}

//System::Void KursovayaRobota::FormVizualize::button2_Click(System::Object^ sender, System::EventArgs^ e) //кнопка этого процесса, не рабочая на данный момент
//{
//    pictureBox_graph->Enabled = false;
//    pictureBox_graph->Enabled = true;
//    if (mainsys.Get_Sort_Type() == "quick")
//    {
//        sortm = &quickm;
//    }
//    else if (mainsys.Get_Sort_Type() == "merge")
//    {
//        sortm = &mergem;
//    }
//    Graphics^ g = pictureBox_graph->CreateGraphics();
//    Pen^ p = gcnew Pen(Color::White, 1.0f);
//    Point p1, p2;
//    for (int i = 0; i < 1000; i++)
//    {
//        p1.X = 5 + i;
//        p2.X = 5 + i;
//        p1.Y = 900;
//        p2.Y = 900 - vizmain.get_Scaled()[i];
//        g->DrawLine(p, p1, p2);
//    }
//    vizmain.SET(mainsys.Get_Array(), mainsys.Get_Count());
//    vizmain.scale();
//    sortm->SET(vizmain.get_Scaled(), 1000);
//    sortm->toggle_viz();
//    timer1->Enabled = true;
//    sortm->init_sort(true);
//    timer1->Enabled = false;
//}

//System::Void KursovayaRobota::FormVizualize::timer1_Tick(System::Object^ sender, System::EventArgs^ e)                            тоже попытка визуализовать сортировку
//{
//    if (sortm->get_flag_wait())
//    {
//        Graphics^ g = pictureBox_graph->CreateGraphics();
//        Pen^ BLACK = gcnew Pen(Color::Black, 1.0f);
//        Point p_firstswap_1 = Point(5 + (sortm->get_swap_indexes()[0]), 900);
//        Point p_firstswap_2 = Point(5 + (sortm->get_swap_indexes()[0]), 900 - vizmain.get_Scaled()[sortm->get_swap_indexes()[0]]);
//        Point p_secondswap_1 = Point(5 + (sortm->get_swap_indexes()[1]), 900);
//        Point p_secondswap_2 = Point(5 + (sortm->get_swap_indexes()[1]), 900 - vizmain.get_Scaled()[sortm->get_swap_indexes()[1]]);
//        g->DrawLine(BLACK, p_firstswap_1, p_firstswap_2);
//        g->DrawLine(BLACK, p_secondswap_1, p_secondswap_2);
//        Pen^ WHITE = gcnew Pen(Color::White, 1.0f);
//        g->DrawLine(WHITE, p_firstswap_1, p_firstswap_2);
//        g->DrawLine(WHITE, p_secondswap_1, p_secondswap_2);
//    }
//
//}


