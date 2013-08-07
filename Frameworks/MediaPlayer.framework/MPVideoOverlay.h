/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, MPDetailSlider, <MPVideoOverlayDelegate>, MPAVItem, <MPVideoControllerProtocol>, MPAVController, NSMutableDictionary;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
    <MPVideoControllerProtocol> *_videoViewController;
    <MPVideoOverlayDelegate> *_delegate;
    MPAVItem *_item;
    MPAVController *_player;
    MPDetailSlider *_scrubControl;
    int _interfaceOrientation;
    BOOL _controlsAutohideDisabled;
    BOOL _wantsTick;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

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


- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (double)_playableDuration;
- (void)_endSliderTracking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (id)videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (BOOL)updateTimeBasedValues;
- (unsigned long long)disabledParts;
- (void)startTicking;
- (void)stopTicking;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)_tickNotification:(id)arg1;
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
- (void)setPlayer:(id)arg1;
- (id)player;
- (double)_duration;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (id)item;
- (void)didMoveToSuperview;
- (id)navigationBar;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
