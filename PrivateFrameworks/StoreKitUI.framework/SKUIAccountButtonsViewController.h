/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIAlertView, SKUIAccountButtonsView, <SKUIAccountButtonsDelegate>, SKUIColorScheme, SKUIClientContext;

@interface SKUIAccountButtonsViewController : UIViewController <UIAlertViewDelegate> {
    SKUIAccountButtonsView *_buttonsView;
    SKUIClientContext *_clientContext;
    <SKUIAccountButtonsDelegate> *_delegate;
    UIAlertView *_alertView;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy) SKUIColorScheme * colorScheme;
@property <SKUIAccountButtonsDelegate> * delegate;
@property(getter=isGiftingHidden) BOOL giftingHidden;
@property(getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;


- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_signInButtonAction:(id)arg1;
- (void)_usernameButtonAction:(id)arg1;
- (void)_termsAndConditionsButtonAction:(id)arg1;
- (void)_redeemButtonAction:(id)arg1;
- (void)_giftAction:(id)arg1;
- (void)_sendDidSignIn;
- (void)_openIForgot;
- (void)_signOut;
- (void)_viewAppleID;
- (void)_reloadRestrictions;
- (void)_reloadAccountsButton;
- (id)_buttonsView;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)setTermsAndConditionsHidden:(BOOL)arg1;
- (void)setGiftingHidden:(BOOL)arg1;
- (BOOL)isTermsAndConditionsHidden;
- (BOOL)isGiftingHidden;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end
