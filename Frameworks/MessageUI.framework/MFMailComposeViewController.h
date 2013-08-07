/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMailComposeViewControllerDelegate>;

@interface MFMailComposeViewController : UINavigationController  {
    id _internal;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _setupAnimationBlock;

    BOOL _didChangeStatusBarStyle;
    int _savedStatusBarStyle;
}

@property <MFMailComposeViewControllerDelegate> * mailComposeDelegate;

+ (unsigned int)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (BOOL)canSendMail;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;

- (void)addSetupAnimationBlock:(id)arg1;
- (void)setAutorotationDelegate:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (id)mailComposeDelegate;
- (id)_internalViewController;
- (void)finalizeCompositionValues;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
