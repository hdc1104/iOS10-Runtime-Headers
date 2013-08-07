/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlaceholderContentStateMachine, UIActivityIndicatorView, NSString, GKPlaceholderView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <GKStateMachineDelegate> {
    GKPlaceholderView *_placeholderView;
    NSString *_loadingState;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_errorTitle;
    NSString *_errorMessage;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
}

@property(retain) GKPlaceholderView * placeholderView;
@property(retain) NSString * loadingState;
@property(retain) NSString * noContentTitle;
@property(retain) NSString * noContentMessage;
@property(retain) NSString * errorTitle;
@property(retain) NSString * errorMessage;
@property(retain) UIActivityIndicatorView * loadingIndicatorView;
@property(retain) GKPlaceholderContentStateMachine * loadingMachine;


- (id)errorMessage;
- (id)errorTitle;
- (void)setLoadingMachine:(id)arg1;
- (id)loadingMachine;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)loadingIndicatorView;
- (id)noContentMessage;
- (id)noContentTitle;
- (id)loadingState;
- (id)placeholderView;
- (void)didExitErrorState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)setLoadingState:(id)arg1;
- (void)delayedShowLoadingIndicator;
- (void)setPlaceholderView:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
