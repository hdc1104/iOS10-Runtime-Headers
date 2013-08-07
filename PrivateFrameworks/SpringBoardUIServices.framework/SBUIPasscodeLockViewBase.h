/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBFLegibilitySettingsProvider>, _UILegibilitySettings, SBUIPasscodeEntryField, NSString, <SBUIPasscodeLockViewDelegate>, <SBUIPasscodeLockViewDelegate_Internal>, UIColor;

@interface SBUIPasscodeLockViewBase : UIView <SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView> {
    <SBUIPasscodeLockViewDelegate_Internal> *_delegate;
    int _style;
    NSString *_passcode;
    BOOL _playsKeypadSounds;
    BOOL _showsEmergencyCallButton;
    BOOL _showsStatusField;
    BOOL _becameVisible;
    float _backgroundAlpha;
    UIColor *_customBackgroundColor;
    SBUIPasscodeEntryField *_entryField;
    <SBFLegibilitySettingsProvider> *_backgroundLegibilitySettingsProvider;
    BOOL _shouldResetForFailedPasscodeAttempt;
    float _luminanceBoost;
    float _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
}

@property int style;
@property(getter=_luminosityBoost,setter=_setLuminosityBoost:) float luminosityBoost;
@property(getter=_entryField,setter=_setEntryField:,retain) SBUIPasscodeEntryField * _entryField;
@property BOOL shouldResetForFailedPasscodeAttempt;
@property <SBUIPasscodeLockViewDelegate> * delegate;
@property(readonly) NSString * passcode;
@property BOOL playsKeypadSounds;
@property BOOL showsStatusField;
@property BOOL showsEmergencyCallButton;
@property float backgroundAlpha;
@property(retain) UIColor * customBackgroundColor;
@property(retain) <SBFLegibilitySettingsProvider> * backgroundLegibilitySettingsProvider;


- (void)_setEntryField:(id)arg1;
- (id)_entryField;
- (void)setShouldResetForFailedPasscodeAttempt:(BOOL)arg1;
- (BOOL)shouldResetForFailedPasscodeAttempt;
- (void)_resetStatusText;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (BOOL)_isBoundsPortraitOriented;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (id)backgroundLegibilitySettingsProvider;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)customBackgroundColor;
- (float)backgroundAlpha;
- (BOOL)showsEmergencyCallButton;
- (BOOL)showsStatusField;
- (BOOL)playsKeypadSounds;
- (id)passcode;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)resetForFailedPasscode;
- (void)_updateStatusText:(id)arg1;
- (float)_luminanceBoostFromDisplayBrightness;
- (float)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (void)_setLuminosityBoost:(float)arg1;
- (float)_luminosityBoost;
- (void)_luminanceBoostDidChange;
- (void)_evaluateLuminance;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)_clearBrightnessChangeTimer;
- (void)_noteScreenBrightnessDidChange;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setPlaysKeypadSounds:(BOOL)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (int)_orientation;
- (void)reset;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setBackgroundAlpha:(float)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)didMoveToWindow;

@end
