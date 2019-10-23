/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

#include "../Helpers/TFLookAndFeel.h"
#include "../Panels/CenterPanel.h"
#include "../Panels/SettingsPanel.h"

//==============================================================================
/**
*/
class TonkFreezeAudioProcessorEditor : public AudioProcessorEditor
{
public:
	TonkFreezeAudioProcessorEditor(TonkFreezeAudioProcessor&);
	~TonkFreezeAudioProcessorEditor();

	//==============================================================================
	void paint(Graphics&) override;
	void resized() override;

private:
	TonkFreezeAudioProcessor& processor;

	TFLookAndFeel lookAndFeel;

	std::unique_ptr<CenterPanel> centerPanel;
	std::unique_ptr<SettingsPanel> settingsPanel;

	Image backgroundImage;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TonkFreezeAudioProcessorEditor)
};
