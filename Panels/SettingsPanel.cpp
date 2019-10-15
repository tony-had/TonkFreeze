/*
  ==============================================================================

    SettingsPanel.cpp
    Created: 15 Oct 2019 7:15:39pm
    Author:  tonyh

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "SettingsPanel.h"

//==============================================================================
SettingsPanel::SettingsPanel()
{
	setSize(settingsPanelWidth, settingsPanelHeight);
}

SettingsPanel::~SettingsPanel()
{
}

void SettingsPanel::paint (Graphics& g)
{
    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("SettingsPanel", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void SettingsPanel::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
