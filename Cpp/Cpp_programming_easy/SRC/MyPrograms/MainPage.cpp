#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Lotto::implementation
{
    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}


void winrt::Lotto::implementation::MainPage::SelectButton_Click(
    winrt::Windows::Foundation::IInspectable const& sender, 
    winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
    int i, j, k, arr[60];
    srand((int)time(0));

    for (i = 1; i < 60; i++) arr[i] = i;
    for (i = 1; i < 60; i++)
    {
        j = ((int)rand() % 59) + 1;
        k = arr[i]; arr[i] = arr[j]; arr[j] = k;
    }
    Label1().Text(std::to_wstring(arr[1]));
    Label2().Text(std::to_wstring(arr[2]));
    Label3().Text(std::to_wstring(arr[3]));
    Label4().Text(std::to_wstring(arr[4]));
    Label5().Text(std::to_wstring(arr[5]));
    Label6().Text(std::to_wstring(arr[6]));   
    SelectButton().IsEnabled(false);
    ResetButton().IsEnabled(true);
}

void winrt::Lotto::implementation::MainPage::ResetButton_Click(
    winrt::Windows::Foundation::IInspectable const& sender, 
    winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
    Label1().Text(L"...");
    Label2().Text(L"...");
    Label3().Text(L"...");
    Label4().Text(L"...");
    Label5().Text(L"...");
    Label6().Text(L"...");  
    SelectButton().IsEnabled(true);
    ResetButton().IsEnabled(false);
}


