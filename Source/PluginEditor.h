/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class TonkFreezeAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    TonkFreezeAudioProcessorEditor (TonkFreezeAudioProcessor&);
    ~TonkFreezeAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    TonkFreezeAudioProcessor& processor;

	Image backgroundImage;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TonkFreezeAudioProcessorEditor)
};
