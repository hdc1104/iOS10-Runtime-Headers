/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVController : NSObject  {
    struct AVControllerPrivate { id x1; id x2; id x3; id x4; id x5; Class x6; id x7; int x8; int x9; float x10; float x11; int x12; BOOL x13; id x14; float x15; struct __CFString {} *x16; id x17; BOOL x18; BOOL x19; BOOL x20; id x21; struct OpaqueFigVisualContext {} *x22; id x23; struct __CFRunLoop {} *x24; unsigned int x25; int x26; int x27; int x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; id x33; struct OpaqueFigPlayer {} *x34; id x35; id x36; id x37; BOOL x38; BOOL x39; id x40; id x41; BOOL x42; BOOL x43; BOOL x44; int x45; BOOL x46; } *_priv;
}

+ (BOOL)isSupportedFileExtension:(id)arg1;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (id)avControllerWithQueue:(id)arg1 error:(id*)arg2;
+ (id)avController;
+ (BOOL)isSupportedMimeType:(id)arg1;
+ (void)setEnableNetworkMode:(BOOL)arg1;
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3;
+ (id)compatibleAudioRouteForRoute:(id)arg1;

- (BOOL)play:(id*)arg1;
- (id)vibrationPattern;
- (BOOL)isCurrentItemReady;
- (void)figPlayerNotificationHandler:(id)arg1;
- (void)dequeueDeadItem;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (struct OpaqueFigPlaybackItem { }*)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(int*)arg3;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)cancelAllCGImageRequests;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3;
- (struct OpaqueFigVisualContext { }*)visualContext;
- (void)stepByCount:(int)arg1;
- (void)endInterruptionWithStatus:(id)arg1;
- (BOOL)activate:(id*)arg1;
- (BOOL)canBeginInterruption;
- (BOOL)beginInterruption:(id*)arg1;
- (BOOL)resumePlayback:(double)arg1 error:(id*)arg2;
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)indexOfCurrentQueueFeederItem;
- (BOOL)havePlayedCurrentItem;
- (void)setQueueFeeder:(id)arg1;
- (long)copyImageForTime:(struct __CVBuffer {}**)arg1 time:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (BOOL)isNewImageAvailableForTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 willNeverBeAvailable:(BOOL*)arg2;
- (struct AVControllerPrivate { id x1; id x2; id x3; id x4; id x5; Class x6; id x7; int x8; int x9; float x10; float x11; int x12; BOOL x13; id x14; float x15; struct __CFString {} *x16; id x17; BOOL x18; BOOL x19; BOOL x20; id x21; struct OpaqueFigVisualContext {} *x22; id x23; struct __CFRunLoop {} *x24; unsigned int x25; int x26; int x27; int x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; id x33; struct OpaqueFigPlayer {} *x34; id x35; id x36; id x37; BOOL x38; BOOL x39; id x40; id x41; BOOL x42; BOOL x43; BOOL x44; int x45; BOOL x46; }*)privateStorage;
- (id)initForStreaming;
- (void)setAVItemClass:(Class)arg1;
- (void)safeSubtitleCommandPosted:(void*)arg1;
- (void)fmpEffectiveVolumeDidChange;
- (BOOL)beginRepeatGap;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (void)currentItemHasChanged:(id)arg1;
- (void)rateDidChangeToRate:(float)arg1;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (void)logPerformanceDataForCurrentItem;
- (id)outputQTESFilePath;
- (void)ensurePlaybackQueueImmed;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (void)updateTimeMarkerObservations;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (void)scheduleQueueSpaceCheck;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(int)arg3 withImageOptions:(id)arg4;
- (void)setApplyVideoTrackMatrix;
- (void)setSubtitleRecipient:(id)arg1;
- (void)setShouldDisplayClosedCaptions:(BOOL)arg1;
- (void)setOutputQTESFilePath:(id)arg1;
- (long)updateActionAtEnd;
- (void)setVisualContext:(struct OpaqueFigVisualContext { }*)arg1;
- (void)setCurrentTime:(double)arg1;
- (BOOL)shouldDisplayClosedCaptions;
- (id)lkLayer;
- (BOOL)muted;
- (double)currentTime;
- (int)repeatMode;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (id)errorWithDescription:(id)arg1 code:(long)arg2;
- (BOOL)shouldBeginPlayingItem:(id)arg1 error:(id*)arg2;
- (void)cancelContinueAfterRepeatGap;
- (struct OpaqueFigPlaybackItem { }*)currentFPItem;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (void)dequeueFirstItem;
- (BOOL)setRate:(float)arg1 error:(id*)arg2;
- (void)continueAfterRepeatGap;
- (void)applyDesiredRepeatMode;
- (void)setQueueFeeder:(id)arg1 withIndex:(int)arg2;
- (BOOL)setRepeatMode:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)feederRangeWasInserted:(id)arg1;
- (BOOL)playNextItem:(id*)arg1;
- (id)queueFeeder;
- (id)addNextFeederItemToQueue;
- (void)checkQueueSpace;
- (id)_figPlayerNotifications;
- (id)initWithQueue:(id)arg1 fmpType:(unsigned int)arg2 error:(id*)arg3;
- (void)setVibrationPattern:(id)arg1;
- (void)setVibrationEnabled:(BOOL)arg1;
- (BOOL)vibrationEnabled;
- (BOOL)okToNotifyFromThisThread;
- (void)setEQPreset:(int)arg1;
- (int)eqPreset;
- (id)initWithError:(id*)arg1;
- (void)seekToDate:(id)arg1;
- (float)rate;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setLayer:(id)arg1;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)attributeForKey:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (BOOL)isValid;
- (void)dealloc;
- (id)delegate;
- (struct CGImage { }*)grabCGImageAtTime:(double)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 actualTime:(double*)arg4;
- (void)makeCurrentItemReady;
- (id)initWithQueue:(id)arg1 error:(id*)arg2;
- (id)currentItem;
- (void)pause;
- (id)queue;

@end
