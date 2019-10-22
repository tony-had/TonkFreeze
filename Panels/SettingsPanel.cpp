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

	windowSizeCombobox.reset(new TFCombobox());
	windowSizeCombobox->setBounds(0, 0, settingsPanelWidth / 2, settingsPanelHeight / 3);
	addAndMakeVisible(windowSizeCombobox.get());

	hopSizeCombobox.reset(new TFCombobox());
	hopSizeCombobox->setBounds(settingsPanelWidth / 2, 0, settingsPanelWidth / 2, settingsPanelHeight / 3);
	addAndMakeVisible(hopSizeCombobox.get());

	windowTypeCombobox.reset(new ComboBox());
	windowTypeCombobox->setBounds(0, settingsPanelHeight / 3, settingsPanelWidth, settingsPanelHeight / 3);
	addAndMakeVisible(windowTypeCombobox.get());

	mixSlider.reset(new TFSlider());
	mixSlider->setBounds(0, 2 * settingsPanelHeight / 3, settingsPanelWidth, settingsPanelHeight / 3);
	addAndMakeVisible(mixSlider.get());
}

SettingsPanel::~SettingsPanel()
{
}

void SettingsPanel::paint (Graphics& g)
{
}

void SettingsPanel::resized()
{
}
