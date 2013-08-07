/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITextInputTraits, NSArray, _UIModalItemRepresentationView, NSMutableArray, NSAttributedString, <UIModalItemDelegate>, UIView, NSString, _UIModalItemContentView, UIViewController, _UIModalItemBackgroundView;

@interface _UIModalItem : NSObject  {
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    NSString *_defaultButtonTitle;
    NSAttributedString *_titleAttributedString;
    NSAttributedString *_messageAttributedString;
    NSString *_subtitleString;
    int _titleMaxLineNumber;
    int _messageMaxLineNumber;
    int _numberOfButtonsRows;
    BOOL _useUndoStyle;
    BOOL _useWifiPickerLayout;
    BOOL _textFieldsHidden;
    BOOL _dontUpdateFrameForKBChanges;
    NSMutableArray *_otherButtonsTitles;
    int _itemType;
    <UIModalItemDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    int _modalItemInputStyle;
    UIView *_popoverTargetView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _popoverTargetRect;
    UIViewController *_contentViewController;
    struct CGSize { 
        float width; 
        float height; 
    } _contentViewControllerSize;
    int _presentAnimationType;
    int _dismissAnimationType;
    BOOL _isPresented;
    BOOL _isVisible;
    BOOL _isBeingDismissed;
    BOOL _isHidden;
    UIViewController *_viewController;
    UIViewController *_hostingViewController;
    UIViewController *_anchorViewController;
    int _defaultButtonIndex;
    int _cancelButtonIndex;
    _UIModalItemContentView *_contentView;
    _UIModalItemBackgroundView *_backgroundView;
    _UIModalItemRepresentationView *_representedView;
    NSString *_loginString;
    NSString *_passwordString;
    NSString *_loginPlaceholderString;
    NSString *_passwordPlaceholderString;
    UITextInputTraits *_passwordTraits;
    UITextInputTraits *_loginTraits;
    BOOL _enableFirstOtherButton;
    BOOL _forceVerticalLayout;
    int _dismissIndex;
    int cancelButtonIndex;
    NSArray *_buttonTitles;
}

@property(copy) NSString * title;
@property(copy) NSString * message;
@property int type;
@property UIView * targetView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetRect;
@property(readonly) BOOL isPresented;
@property BOOL enableFirstOtherButton;
@property <UIModalItemDelegate> * delegate;
@property(copy) NSArray * buttonTitles;
@property int cancelButtonIndex;
@property int defaultButtonIndex;
@property BOOL forceVerticalLayout;
@property int modalItemInputStyle;
@property(copy) NSString * loginString;
@property(copy) NSString * passwordString;
@property(copy) NSString * loginPlaceholderString;
@property(copy) NSString * passwordPlaceholderString;
@property(readonly) UIViewController * viewController;
@property(retain) UIViewController * contentViewController;
@property struct CGSize { float x1; float x2; } contentViewControllerSize;
@property int presentAnimationType;
@property int dismissAnimationType;
@property(getter=_viewController,setter=_setViewController:,retain) UIViewController * _viewController;
@property(copy) NSAttributedString * titleAttributedString;
@property(copy) NSAttributedString * messageAttributedString;
@property(copy) NSString * subtitleString;
@property int titleMaxLineNumber;
@property int messageMaxLineNumber;
@property int numberOfButtonsRows;
@property BOOL useUndoStyle;
@property BOOL useWifiPickerLayout;
@property BOOL textFieldsHidden;
@property(retain) _UIModalItemContentView * contentView;
@property(retain) _UIModalItemBackgroundView * backgroundView;
@property BOOL isBeingDismissed;
@property int dismissIndex;
@property BOOL isHidden;
@property BOOL dontUpdateFrameForKBChanges;

+ (id)modalItemWithType:(int)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(id)arg5;

- (void)setTitle:(id)arg1;
- (id)title;
- (id)contentView;
- (id)_contentView;
- (BOOL)isHidden;
- (void)setType:(int)arg1;
- (void)setContentView:(id)arg1;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setForceVerticalLayout:(BOOL)arg1;
- (void)setButtonTitles:(id)arg1;
- (id)buttonTitles;
- (void)setContentViewController:(id)arg1;
- (void)setUseWifiPickerLayout:(BOOL)arg1;
- (void)setUseUndoStyle:(BOOL)arg1;
- (void)setNumberOfButtonsRows:(int)arg1;
- (void)setMessageMaxLineNumber:(int)arg1;
- (void)setTitleMaxLineNumber:(int)arg1;
- (void)setMessageAttributedString:(id)arg1;
- (id)messageAttributedString;
- (void)setTitleAttributedString:(id)arg1;
- (void)setContentViewControllerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPasswordPlaceholderString:(id)arg1;
- (void)setLoginPlaceholderString:(id)arg1;
- (id)loginPlaceholderString;
- (id)passwordString;
- (id)loginString;
- (void)setDismissAnimationType:(int)arg1;
- (int)dismissAnimationType;
- (void)setPresentAnimationType:(int)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (void)setTargetView:(id)arg1;
- (id)targetView;
- (void)setDismissIndex:(int)arg1;
- (int)dismissIndex;
- (void)setIsBeingDismissed:(BOOL)arg1;
- (BOOL)isPresented;
- (void)setModalItemInputStyle:(int)arg1;
- (id)_loginTraits;
- (void)setTextFieldsHidden:(BOOL)arg1;
- (void)refreshButtonTitle;
- (void)setSubtitleString:(id)arg1;
- (id)_defaultButtonTitle;
- (id)_typeKey;
- (void)_setAnchorViewController:(id)arg1;
- (id)_anchorViewController;
- (void)_setHostingViewController:(id)arg1;
- (id)_hostingViewController;
- (void)_setViewController:(id)arg1;
- (id)_popoverBackgroundView;
- (id)buttonTitleAtIndex;
- (void)setLoginString:(id)arg1;
- (void)setPasswordString:(id)arg1;
- (void)_updateContentView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(id)arg4 delegate:(id)arg5;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (int)presentAnimationType;
- (void)_setRepresentedView:(id)arg1;
- (id)_representedView;
- (BOOL)dontUpdateFrameForKBChanges;
- (BOOL)isBeingDismissed;
- (id)viewController;
- (id)_viewController;
- (void)setDontUpdateFrameForKBChanges:(BOOL)arg1;
- (BOOL)textFieldsHidden;
- (struct CGSize { float x1; float x2; })contentViewControllerSize;
- (int)messageMaxLineNumber;
- (int)titleMaxLineNumber;
- (BOOL)useUndoStyle;
- (BOOL)forceVerticalLayout;
- (int)numberOfButtonsRows;
- (BOOL)useWifiPickerLayout;
- (id)titleAttributedString;
- (void)setEnableFirstOtherButton:(BOOL)arg1;
- (BOOL)enableFirstOtherButton;
- (void)_loginFieldTextDidChange;
- (void)_passwordFieldTextDidChange;
- (float)_maxHeight;
- (float)_maxWidth;
- (id)passwordPlaceholderString;
- (id)_passwordTraits;
- (id)textFieldAtIndex:(int)arg1;
- (int)defaultButtonIndex;
- (id)contentViewController;
- (id)_otherButtonsTitles;
- (id)_cancelButtonTitle;
- (int)modalItemInputStyle;
- (id)subtitleString;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (int)cancelButtonIndex;
- (id)_backgroundView;
- (int)type;

@end
