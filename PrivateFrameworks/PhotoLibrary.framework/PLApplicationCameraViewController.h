/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIToolbar, NSObject<OS_dispatch_queue>, PLCameraImageWellView, <PLApplicationCameraViewControllerDelegate>, NSDictionary, PLKeepDaemonAliveAssertion, UIViewController, NSObject<PLAlbumProtocol>;

@interface PLApplicationCameraViewController : PLCameraViewController <PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLCameraPreviewWellImageChangeObserver, UINavigationControllerDelegate, PLPhotoBrowserControllerDelegate> {
    PLCameraImageWellView *_photosButton;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _previewButtonAction;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _doneButtonAction;

    NSDictionary *_configuration;
    <PLApplicationCameraViewControllerDelegate> *_delegate;
    BOOL _usesSessionAlbum;
    double _sessionStartTime;
    NSObject<OS_dispatch_queue> *_photoStreamDispatchQueue;
    PLKeepDaemonAliveAssertion *_keepDaemonAliveAssertion;
    BOOL _isReadyToTest;
    int _testPictureCounter;
    int _testPicturesReceivedCounter;
    double _testPictureRepeatDelay;
    BOOL __shouldShowCameraRoll;
    BOOL __dismissingCameraRoll;
    BOOL __dismissingCameraRollForSuspension;
    BOOL __shouldRetryDismissal;
    BOOL __handlesVolumeButtons;
    BOOL __ignoringVolumeButtons;
    struct NSObject { Class x1; } *_cameraAlbum;
    UIToolbar *_bottomButtonBar;
    UIViewController *__cameraRollViewController;
}

@property(retain) NSObject<PLAlbumProtocol> * cameraAlbum;
@property(copy) id previewButtonAction;
@property <PLApplicationCameraViewControllerDelegate> * delegate;
@property(readonly) UIToolbar * bottomButtonBar;
@property int testPictureCounter;
@property double testPictureRepeatDelay;
@property(setter=_setShouldShowCameraRoll:) BOOL _shouldShowCameraRoll;
@property(getter=_isDismissingCameraRoll,setter=_setDismissingCameraRoll:) BOOL _dismissingCameraRoll;
@property(getter=_isDismissingCameraRollForSuspension,setter=_setDismissingCameraRollForSuspension:) BOOL _dismissingCameraRollForSuspension;
@property(readonly) BOOL _shouldRetryDismissal;
@property(readonly) UIViewController * _cameraRollViewController;
@property(setter=_setHandlesVolumeButtons:) BOOL _handlesVolumeButtons;
@property(setter=_setIgnoringVolumeButtons:) BOOL _ignoringVolumeButtons;


- (void)stopCameraPreview;
- (void)startCameraPreviewWithSavedConfiguration;
- (void)dismissCameraRollForSuspension;
- (void)prepareForDismissal;
- (void)saveCameraConfiguration;
- (void)_setIgnoringVolumeButtons:(BOOL)arg1;
- (BOOL)_ignoringVolumeButtons;
- (void)_setHandlesVolumeButtons:(BOOL)arg1;
- (BOOL)_handlesVolumeButtons;
- (BOOL)_shouldRetryDismissal;
- (void)_setDismissingCameraRollForSuspension:(BOOL)arg1;
- (BOOL)_isDismissingCameraRollForSuspension;
- (void)_setDismissingCameraRoll:(BOOL)arg1;
- (BOOL)_isDismissingCameraRoll;
- (id)previewButtonAction;
- (void)_setCameraAlbum:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)cameraAlbum;
- (void)setTestPictureRepeatDelay:(double)arg1;
- (int)testPictureCounter;
- (void)setUsesSessionAlbum:(BOOL)arg1;
- (void)preferencesDidChange;
- (BOOL)shouldAnimateBlurForSuspension;
- (void)_startCameraPreviewWithPreviewStartedBlock:(id)arg1;
- (id)cameraButtonBar;
- (BOOL)_cameraIsRunning;
- (void)setTestPictureCounter:(int)arg1;
- (void)testSetAutofocusDisabled:(BOOL)arg1;
- (void)testSetHDROn:(BOOL)arg1;
- (id)initWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2;
- (void)startCameraPreview;
- (id)_cameraRollViewController;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (id)_currentPhotoBrowser;
- (void)cleanupForCameraEnd;
- (id)_packedArrayFromDictionary:(id)arg1;
- (BOOL)_shouldResumeTorch;
- (BOOL)showingCameraPreview;
- (void)pausePhotoStreams;
- (id)_dictionaryFromPackedArray:(id)arg1;
- (void)_defaultCameraDevice:(id*)arg1 cameraMode:(id*)arg2;
- (BOOL)_shouldResetMode:(id)arg1;
- (void)_startPictureTestAfterSeconds:(double)arg1;
- (double)testPictureRepeatDelay;
- (void)startPictureTest;
- (void)stopCameraPreviewAnimated:(BOOL)arg1;
- (void)dismissCameraRollAnimated:(BOOL)arg1 forSuspension:(BOOL)arg2;
- (void)_updateVolumeButtonEventsAbility;
- (BOOL)_shouldShowCameraRoll;
- (struct NSObject { Class x1; }*)_cameraAlbum;
- (void)_setShouldShowCameraRoll:(BOOL)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_autorotationCorrectingTransformFromOrientation:(int)arg1;
- (void)_refreshCameraUIForAlbumChange;
- (void)prepareForSuspension;
- (void)_applyAutorotationCorrectingTransformForOrientation:(int)arg1;
- (void)setupForCameraStart;
- (void)viewWillShowForLaunch;
- (void)_saveConfiguration;
- (void)_applyConfiguration;
- (void)resumePhotoStreams;
- (void)setPreviewButtonAction:(id)arg1;
- (void)_setWantsVolumeButtonEvents:(BOOL)arg1;
- (void)_libraryDidChange:(id)arg1;
- (void)_kickoffCameraControllerPreview;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(struct NSObject { Class x1; }*)arg2;
- (id)newAlbumNavigationControllerForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (id)bottomButtonBar;
- (void)animateBlurForSuspension;
- (void)cameraViewFinishedSuspensionBlur:(id)arg1;
- (void)presentCameraRollAboveCameraView:(id)arg1;
- (void)cameraViewFinishedTakingPicture:(id)arg1;
- (void)cameraViewDidFinishUnblurringForPreview:(id)arg1;
- (void)_handleVolumeButtonUp;
- (void)_handleVolumeButtonDown;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)dismissCameraRoll:(id)arg1;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)setSessionID:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)takePicture;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)applicationDidResume;
- (void)prepareForDefaultImageSnapshot;
- (void)applicationWillSuspend;

@end
