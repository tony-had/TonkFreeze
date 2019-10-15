/*
  ==============================================================================

    SettingsPanel.h
    Created: 15 Oct 2019 7:15:39pm
    Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SettingsPanel    : public Component
{
public:
    SettingsPanel();
    ~SettingsPanel();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SettingsPanel)
};
