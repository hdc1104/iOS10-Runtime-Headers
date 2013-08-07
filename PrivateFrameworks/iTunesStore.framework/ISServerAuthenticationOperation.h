/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, SSAuthenticationContext, ISDialog, NSNumber, ISDialogButton;

@interface ISServerAuthenticationOperation : ISOperation  {
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    BOOL _performsButtonAction;
    ISDialogButton *_performedButton;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) ISDialog * dialog;
@property BOOL performsButtonAction;
@property(retain) NSNumber * authenticatedAccountDSID;
@property(retain) ISDialogButton * performedButton;
@property(retain) NSURL * redirectURL;
@property(retain) ISDialogButton * selectedButton;


- (id)performedButton;
- (void)setPerformsButtonAction:(BOOL)arg1;
- (BOOL)_handleSelectedButton:(id)arg1;
- (BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2;
- (void)setPerformedButton:(id)arg1;
- (BOOL)performsButtonAction;
- (BOOL)_shouldAuthenticateForButton:(id)arg1;
- (BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2;
- (id)_copyButtonForDialogSkip;
- (id)selectedButton;
- (id)dialog;
- (void)setSelectedButton:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)_copyAuthenticationContext;
- (void)setRedirectURL:(id)arg1;
- (id)redirectURL;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)run;
- (id)init;
- (void)dealloc;

@end
