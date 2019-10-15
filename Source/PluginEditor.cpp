/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "../Helpers/TFInterfaceDefines.h"

//==============================================================================
TonkFreezeAudioProcessorEditor::TonkFreezeAudioProcessorEditor(TonkFreezeAudioProcessor& p)
	: AudioProcessorEditor(&p), processor(p)
{
	setSize(windowWidth, windowHeight);
	backgroundImage = ImageCache::getFromMemory(BinaryData::tonk_freeze_bg_png, BinaryData::tonk_freeze_bg_pngSize);

	centerPanel.reset(new CenterPanel());
	centerPanel->setTopLeftPosition(0, 0);
	addAndMakeVisible(centerPanel.get());

	settingsPanel.reset(new SettingsPanel());
	settingsPanel->setTopLeftPosition(0, centerPanelHeight);
	addAndMakeVisible(settingsPanel.get());
}

TonkFreezeAudioProcessorEditor::~TonkFreezeAudioProcessorEditor()
{
}

//==============================================================================
void TonkFreezeAudioProcessorEditor::paint(Graphics& g)
{
	g.drawImage(backgroundImage, getLocalBounds().toFloat());
}

void TonkFreezeAudioProcessorEditor::resized()
{
	// child components position
}
