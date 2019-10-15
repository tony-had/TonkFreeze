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
TonkFreezeAudioProcessorEditor::TonkFreezeAudioProcessorEditor (TonkFreezeAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    setSize (windowWidth, windowHeight);
	backgroundImage = ImageCache::getFromMemory(BinaryData::tonk_freeze_bg_png, BinaryData::tonk_freeze_bg_pngSize);
}

TonkFreezeAudioProcessorEditor::~TonkFreezeAudioProcessorEditor()
{
}

//==============================================================================
void TonkFreezeAudioProcessorEditor::paint (Graphics& g)
{
	g.drawImage(backgroundImage, getLocalBounds().toFloat());

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void TonkFreezeAudioProcessorEditor::resized()
{
	// child components position
}
