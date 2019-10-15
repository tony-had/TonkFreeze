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

	//test.setBounds(0, 0, 100, 100);
	//test.setImages(true, true, true, ImageCache::getFromMemory(BinaryData::freeze_off_png, BinaryData::freeze_off_pngSize),
	//	1.f, Colour::fromFloatRGBA(1.0f, 0.0f, 0.0f, 0.0f),
	//	ImageCache::getFromMemory(BinaryData::freeze_off_png, BinaryData::freeze_off_pngSize),
	//	1.f, Colour::fromFloatRGBA(1.0f, 0.0f, 0.0f, 0.0f),
	//	ImageCache::getFromMemory(BinaryData::freeze_on_png, BinaryData::freeze_on_pngSize),
	//	1.f, Colour::fromFloatRGBA(1.0f, 0.0f, 0.0f, 0.0f));
	//test.setClickingTogglesState(true);
	//addAndMakeVisible(test);

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
