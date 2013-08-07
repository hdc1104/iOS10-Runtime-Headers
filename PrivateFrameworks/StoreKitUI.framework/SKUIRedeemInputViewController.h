/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, SKUIRedeemTextField, NSString, UIBarButtonItem;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate> {
    int _category;
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    NSString *_initialCode;
    UIBarButtonItem *_redeemButton;
}

@property(readonly) int category;
@property(copy) NSString * initialCode;


- (id)initialCode;
- (void)setInitialCode:(id)arg1;
- (id)initWithRedeemCategory:(int)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (int)category;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
