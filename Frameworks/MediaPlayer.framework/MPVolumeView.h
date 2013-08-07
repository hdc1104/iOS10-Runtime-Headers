/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAudioDeviceController, UILabel, UIButton, MPVolumeSlider, MPAudioVideoRoutingPopoverController, UIImage, MPAudioVideoRoutingActionSheet;

@interface MPVolumeView : UIView <MPAudioDeviceControllerDelegate, NSCoding> {
    MPAudioVideoRoutingActionSheet *_actionSheet;
    MPAudioDeviceController *_audioDeviceController;
    BOOL _hasNonDefaultRouteButtonImages;
    BOOL _hasNonDefaultMaxVolumeSliderImage;
    BOOL _hasNonDefaultMinVolumeSliderImage;
    BOOL _hidesRouteLabelWhenNoRouteChoice;
    UIButton *_routeButton;
    BOOL _routeButtonShowsTouchWhenHighlighted;
    BOOL _routeDiscoveryEnabled;
    UILabel *_routeLabel;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
    BOOL _showingButton;
    BOOL _showingLabel;
    BOOL _showingSlider;
    BOOL _showsRouteButton;
    BOOL _showsVolumeSlider;
    int _style;
    MPVolumeSlider *_volumeSlider;
    BOOL _volumeSliderShrinksFromBothEnds;
    BOOL _wirelessRouteIsPicked;
    BOOL _wirelessRoutesAvailable;
    unsigned int _routePopoverPermittedArrowDirections;
}

@property BOOL showsVolumeSlider;
@property BOOL showsRouteButton;
@property(getter=areWirelessRoutesAvailable,readonly) BOOL wirelessRoutesAvailable;
@property(getter=isWirelessRouteActive,readonly) BOOL wirelessRouteActive;
@property(retain) UIImage * volumeWarningSliderImage;
@property(readonly) int style;
@property(readonly) MPVolumeSlider * volumeSlider;
@property BOOL volumeSliderShrinksFromBothEnds;
@property BOOL hidesRouteLabelWhenNoRouteChoice;
@property(readonly) BOOL isVisible;
@property(readonly) BOOL isShowingRouteButton;
@property BOOL routeButtonShowsTouchWhenHighlighted;
@property unsigned int routePopoverPermittedArrowDirections;


- (void)setRoutePopoverPermittedArrowDirections:(unsigned int)arg1;
- (unsigned int)routePopoverPermittedArrowDirections;
- (id)_routeButton;
- (void)_setVolumeAudioCategory:(id)arg1;
- (BOOL)isShowingActiveOverlays;
- (void)dismissActiveOverlaysAnimated:(BOOL)arg1;
- (void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1;
- (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1;
- (BOOL)volumeSliderShrinksFromBothEnds;
- (BOOL)hidesRouteLabelWhenNoRouteChoice;
- (id)volumeSlider;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })volumeThumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 volumeSliderRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)volumeThumbImageForState:(unsigned int)arg1;
- (BOOL)showsVolumeSlider;
- (BOOL)showsRouteButton;
- (void)setVolumeThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setShowsRouteButton:(BOOL)arg1;
- (void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)arg1;
- (void)setVolumeWarningSliderImage:(id)arg1;
- (void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned int)arg2;
- (id)routeButtonImageForState:(unsigned int)arg1;
- (id)volumeWarningSliderImage;
- (id)maximumVolumeSliderImageForState:(unsigned int)arg1;
- (id)minimumVolumeSliderImageForState:(unsigned int)arg1;
- (BOOL)isWirelessRouteActive;
- (BOOL)isShowingRouteButton;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })routeButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })volumeSliderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_displayAudioRoutePicker;
- (id)_defaultRouteButtonImageAsSelected:(BOOL)arg1;
- (BOOL)routeButtonShowsTouchWhenHighlighted;
- (void)_getDefaultVolumeSliderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 routeButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_updateWirelessRouteStatus;
- (void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setShowsVolumeSlider:(BOOL)arg1;
- (void)_initWithStyle:(int)arg1;
- (void)_createSubviews;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (BOOL)areWirelessRoutesAvailable;
- (void)setShowsVolumeSlider:(BOOL)arg1;
- (void)setRouteButtonImage:(id)arg1 forState:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isVisible;
- (int)style;
- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
