/*
  ==============================================================================

	TFInterfaceDefines.h
	Created: 15 Oct 2019 5:04:08pm
	Author:  tonyh

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

constexpr int windowWidth = 240;
constexpr int windowHeight = 340;

constexpr int centerPanelWidth = windowWidth;
constexpr int centerPanelHeight = windowWidth;

constexpr int settingsPanelWidth = windowWidth;
constexpr int settingsPanelHeight = windowHeight - centerPanelHeight;

// Images
// TODO: Move the images and drawing to the TFLookAndFeel class

//const Image backgroundImage = ImageCache::getFromMemory(BinaryData::tonk_freeze_bg_png, BinaryData::tonk_freeze_bg_pngSize);
//
//const Image freezeOnImage = ImageCache::getFromMemory(BinaryData::freeze_on_png, BinaryData::freeze_on_pngSize);
//const Image freezeOffImage = ImageCache::getFromMemory(BinaryData::freeze_off_png, BinaryData::freeze_off_pngSize);
//
//const Image frameImage = ImageCache::getFromMemory(BinaryData::frame_png, BinaryData::frame_pngSize);
//const Image rooImage = ImageCache::getFromMemory(BinaryData::roo_png, BinaryData::roo_pngSize);
//
//const Image closedUmbrellaImage = ImageCache::getFromMemory(BinaryData::dry_png, BinaryData::dry_pngSize);
//const Image rainyUmbrellaImage = ImageCache::getFromMemory(BinaryData::wet_png, BinaryData::wet_pngSize);
