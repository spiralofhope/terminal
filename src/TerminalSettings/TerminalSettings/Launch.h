﻿#pragma once

#include "Launch.g.h"

namespace winrt::SettingsControl::implementation
{
    struct Launch : LaunchT<Launch>
    {
        Launch();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::SettingsControl::factory_implementation
{
    struct Launch : LaunchT<Launch, implementation::Launch>
    {
    };
}
