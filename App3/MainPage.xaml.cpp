//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App3;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void App3::MainPage::Btnpick_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	int i, j, k, seq[60];
	srand((int) time(0));
	for (i = 1; i < 60; i++) seq[i] = i;
	for (i = 0; i < 60; i++) {
		j = ((int)rand() % 59) + 1;
		k = seq[i]; seq[i] = seq[j]; seq[j] = k;
	}
	Textblock1->Text = seq[1].ToString();
	Textblock2->Text = seq[2].ToString();
	Textblock3->Text = seq[3].ToString();
	Textblock4->Text = seq[4].ToString();
	Textblock5->Text = seq[5].ToString();
	Textblock6->Text = seq[6].ToString();
	Btnpick->IsEnabled = false;
	Btnreset->IsEnabled = true;
}


void App3::MainPage::Btnreset_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Textblock1->Text = "..";
	Textblock2->Text = "..";
	Textblock3->Text = "..";
	Textblock4->Text = "..";
	Textblock5->Text = "..";
	Textblock6->Text = "..";
	Btnpick->IsEnabled = true;
	Btnreset->IsEnabled = false;
}
