/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLDebugViewController, NSDictionary, UIWindow, <NSCoding>, PLLibraryImageDataProvider, PLUIController, NSMutableSet, NSString, UIViewController, NSMutableDictionary;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate, PLPublishingAgentDelegate, MFMailComposeViewControllerDelegate> {
    PLUIController *_uiController;
    int _delaySuspendCount;
    int _sendingEmailCount;
    BOOL _receivingRemoteControlEvents;
    BOOL _wantsToSuspend;
    unsigned int _backgroundTaskIdentifier;
    BOOL _isRemaking;
    BOOL _cameraCancelledRemaking;
    UIWindow *_window;
    PLLibraryImageDataProvider *_imageDataProvider;
    NSMutableSet *_publishingAgents;
    NSMutableDictionary *_publishingAgentsByMediaItem;
    int _enableNetworkingFlagsCount;
    NSString *_trimmedFilePath;
    UIViewController *_composeParentViewController;
    BOOL _composeSheetIsReady;
    BOOL _inactiveUnderTaskSwitcher;
    BOOL _urlNeedsHandling;
    BOOL _shouldCancelPublishAfterRemaking;
    int _observeForRechabilityChanges;
    BOOL _isReachable;
    BOOL _isOnWifi;
    int _observeForiMessageAvailability;
    BOOL _photoStreamIsBusy;
    BOOL _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    PLDebugViewController *_debugViewController;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
}

@property(readonly) BOOL isReachable;
@property(readonly) BOOL isOnWifi;
@property BOOL sendingEmail;
@property <NSCoding> * autosaveIdentifier;
@property(retain) NSString * currentTestName;
@property(retain) NSDictionary * currentTestOptions;
@property(retain) UIWindow * window;

+ (void)initialize;

- (void)setCurrentTestOptions:(id)arg1;
- (id)currentTestOptions;
- (void)setCurrentTestName:(id)arg1;
- (id)currentTestName;
- (BOOL)isReachable;
- (void)_updateNetworkActivityIndicatorAsync;
- (BOOL)isiMessageEnabed;
- (BOOL)visitViewControllersWithBlock:(id)arg1;
- (id)composeMailForPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 parentViewController:(id)arg5;
- (void)composeMailForPhotos:(id)arg1 parentViewController:(id)arg2;
- (void)photosPreferencesChanged;
- (BOOL)useCompatibleSuspensionAnimation;
- (void)_finishExtendedTest;
- (BOOL)sendingEmail;
- (void)setSendingEmail:(BOOL)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)_startObservingForiMessageAvailability;
- (void)_discardTrimmedFile;
- (void)setStatusBarStyleIfNecessary:(int)arg1;
- (void)cleanStateAfterPublishForAgent:(id)arg1;
- (void)addPublishingAgent:(id)arg1;
- (void)setEnableNetworkingFlags:(BOOL)arg1;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateSuspensionSettings;
- (void)_clearPublishingSheetResponders;
- (id)currentUIConfiguration;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updatePhotoStreamProgressDisplay;
- (void)sharedFinishedLaunching:(BOOL)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_showAlertForInterruptionDuringRemaking;
- (id)mainWindow;
- (void)_setImageOptions;
- (void)_cleanUpPendingRemakingAndPublishIfNeeded;
- (void)_cancelPublish;
- (void)_discardMediaFilesForPublishingAgentsIfNeeded;
- (void)_stopObservingForiMessageAvailability;
- (void*)getSharedAddressBook;
- (BOOL)isComposeSheetReady;
- (void)_dismissMailComposeController;
- (void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)arg1;
- (void)_autosaveMailComposition;
- (void)_setComposeParentViewController:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (BOOL)isOnWifi;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)setDelaySuspend:(BOOL)arg1;
- (id)publishingAgentForMediaItem:(id)arg1;
- (void)setIsRemaking:(BOOL)arg1;
- (void)presentMailComposeController:(id)arg1 parentViewController:(id)arg2;
- (void)composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2 parentViewController:(id)arg3;
- (id)newMailComposeViewControllerWithPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 identifier:(id*)arg5;
- (void)dismissPublishingViewControllers;
- (BOOL)shouldAllowSBAlertSupression;
- (void)enableObservingForiMessageAvailability;
- (void)setReceivingRemoteControlEvents:(BOOL)arg1;
- (void)_cancelRemaking;
- (BOOL)isCameraApp;
- (void)disableObservingForiMessageAvailability;
- (id)imageDataProvider;
- (void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(BOOL)arg2 error:(id)arg3;
- (BOOL)isComposingEmail;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)autosaveIdentifier;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)rootViewController;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (id)_extendLaunchTest;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;

@end
