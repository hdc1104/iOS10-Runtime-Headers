/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoOverlayDelegate>, _UIBackdropView, MPAudioAndSubtitlesController, UILabel, MPAVItem, UIActivityIndicatorView, UIButton, UIStatusBar, MPAVController, <MPVideoControllerProtocol>, MPAudioVideoRoutingPopoverController, UINavigationBar, MPVolumeSlider, MPDetailSlider;

@interface MPVideoPlaybackOverlayView : UIView <MPAudioAndSubtitlesControllerDelegate, UIPopoverControllerDelegate, MPVideoOverlay, MPDetailSliderDelegate> {
    int _style;
    <MPVideoOverlayDelegate> *_delegate;
    MPAVController *_player;
    MPAVItem *_item;
    MPAudioVideoRoutingPopoverController *_airplayPopover;
    MPDetailSlider *_scrubber;
    _UIBackdropView *_bottomBarBackdropView;
    UIButton *_playPauseButton;
    float _auxButtonsLeftEdge;
    UIButton *_airplayButton;
    BOOL _allowsWirelessPlayback;
    BOOL _automaticallyHandleTransportControls;
    BOOL _ticking;
    _UIBackdropView *_topBarBackdropView;
    UIStatusBar *_statusBar;
    UIButton *_doneButton;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
    UIButton *_scaleButton;
    UILabel *_scrubInstructions1;
    UILabel *_scrubInstructions2;
    MPVolumeSlider *_volumeSlider;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_audioAndSubtitlesButton;
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;
    BOOL _ignoreTouchUp;
    BOOL _isAnimatingScrubInstructions;
    BOOL _isShowingScrubInstructions;
    BOOL _shouldResumePlayback;
    int _seekDirection;
    UIButton *_fullscreenButton;
    <MPVideoControllerProtocol> *_videoViewController;
    BOOL _navigationBarHidden;
    MPAVItem *_unimplementedItem;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
}

@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentAreaInsets;
@property BOOL automaticallyHandleTransportControls;
@property BOOL allowsDetailScrubbing;
@property <MPVideoControllerProtocol> * videoViewController;
@property BOOL allowsWirelessPlayback;
@property BOOL navigationBarHidden;
@property(retain) MPAVController * player;
@property(readonly) UINavigationBar * navigationBar;
@property <MPVideoOverlayDelegate> * delegate;
@property(retain) MPAVItem * item;
@property unsigned long long desiredParts;
@property unsigned long long visibleParts;
@property unsigned long long disabledParts;


- (BOOL)automaticallyHandleTransportControls;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentAreaInsets;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (id)videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)audioAndSubtitleControllerRequestsDismissal:(id)arg1;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_setAuxiliaryButton:(id)arg1 hidden:(BOOL)arg2 atX:(float*)arg3 animated:(BOOL)arg4;
- (void)_updateLoadingIndicator;
- (void)_registerForItemNotifications:(id)arg1;
- (void)_startSeeking;
- (void)_notifyDelegateOfUserEvent:(int)arg1;
- (void)_notifyDelegateOfUserEventCancel:(int)arg1;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_notifyDelegateOfUserEventBegin:(int)arg1;
- (void)_showScrubInstructions;
- (void)_notifyDelegateOfUserEventEnd:(int)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_updateVolumeSlider;
- (void)_itemChanged:(id)arg1;
- (BOOL)updateTimeBasedValues;
- (void)_configureAuxiliaryButtons:(BOOL)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_configureTransportControls;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_updateAirplayButton;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_updateScaleButton;
- (id)_imageNamed:(id)arg1;
- (void)observeControl:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (BOOL)allowsDetailScrubbing;
- (unsigned long long)disabledParts;
- (void)startTicking;
- (void)stopTicking;
- (void)_itemReadyToPlay:(id)arg1;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setAutomaticallyHandleTransportControls:(BOOL)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (unsigned long long)desiredParts;
- (unsigned long long)visibleParts;
- (BOOL)navigationBarHidden;
- (void)setItem:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setHidden:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (id)item;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)navigationBar;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
