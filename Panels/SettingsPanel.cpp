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
	int margin = settingsPanelHeight / 30;

	// TODO: move images to TFLookAndFeel class
	const Image frameImage = ImageCache::getFromMemory(BinaryData::frame_png, BinaryData::frame_pngSize);
	windowSizeCombobox.reset(new TFCombobox(frameImage));
	windowSizeCombobox->setBounds(0, 0, settingsPanelWidth / 2, settingsPanelHeight / 3);
	addAndMakeVisible(windowSizeCombobox.get());

	// TODO: move images to TFLookAndFeel class
	const Image rooImage = ImageCache::getFromMemory(BinaryData::roo_png, BinaryData::roo_pngSize);
	hopSizeCombobox.reset(new TFCombobox(rooImage));
	hopSizeCombobox->setBounds(settingsPanelWidth / 2, 0, settingsPanelWidth / 2, settingsPanelHeight / 3);
	addAndMakeVisible(hopSizeCombobox.get());

	windowTypeCombobox.reset(new ComboBox());
	windowTypeCombobox->setBounds(margin, settingsPanelHeight / 3 + margin, settingsPanelWidth - 2 * margin, settingsPanelHeight / 3 - 2 * margin);
	addAndMakeVisible(windowTypeCombobox.get());

	// TODO: move images to TFLookAndFeel class
	const Image dryImage = ImageCache::getFromMemory(BinaryData::dry_png, BinaryData::dry_pngSize);
	const Image wetImage = ImageCache::getFromMemory(BinaryData::wet_png, BinaryData::wet_pngSize);
	mixSlider.reset(new TFSlider(dryImage, wetImage));
	mixSlider->setBounds(0, 2 * settingsPanelHeight / 3, settingsPanelWidth, settingsPanelHeight / 3);
	addAndMakeVisible(mixSlider.get());
}

SettingsPanel::~SettingsPanel()
{
}

void SettingsPanel::paint(Graphics& g)
{
}

void SettingsPanel::resized()
{
}
