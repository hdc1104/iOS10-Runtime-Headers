/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriRemoteViewControllerDelegate <NSObject>

@required

- (void)dismissSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1 delayForTTS:(bool)arg2;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(void *)arg1 canLoadPreviousConversation:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didEncounterUnexpectedServiceError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didReadBulletinWithIdentifier:(NSString *)arg2;
- (void)siriRemoteViewController:(void *)arg1 handlePasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriRemoteViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriRemoteViewController:(void *)arg1 launchApplicationWithBundleIdentifier:(void *)arg2 withURL:(void *)arg3 launchOverSiri:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 10: AFUISiriRemoteViewController *, NSString *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(bool)arg4;
- (bool)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 delaySessionEndForTTS:(bool)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setBugReportingAvailable:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplayGatekeeperVisible:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplaySnippetVisible:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setHelpButtonEmphasized:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusBarHidden:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewDisabled:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewUserInteractionEnabled:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 startRequestWithOptions:(AFUIRequestOptions *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerPulseHelpButton:(AFUISiriRemoteViewController *)arg1;
- (void)startGuidedAccessForRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;

@end
