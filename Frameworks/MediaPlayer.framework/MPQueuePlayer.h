/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSObject<OS_dispatch_queue>, MPAudioDeviceController, NSMutableArray, AVPlayer, AVPlayerItem, NSDictionary, NSString, AVQueuePlayer, NSArray;

@interface MPQueuePlayer : NSObject <MPAudioDeviceControllerDelegate> {
    MPAudioDeviceController *_audioDeviceController;
    AVPlayerItem *_currentItem;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _currentTime;
    BOOL _isExternalPlaybackActive;
    BOOL _pausedForPlaybackQueueTransaction;
    NSDictionary *_pickedRouteDescription;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playbackQueueCommitHandler;

    int _playbackQueueTransactionCount;
    AVQueuePlayer *_player;
    NSMutableArray *_queuedOperations;
    NSObject<OS_dispatch_queue> *_queuedOperationsAccessQueue;
    float _rate;
    float _rateBeforePlaybackQueueTransaction;
    BOOL _routeDidChangeDuringPlaybackQueueTransaction;
    int _status;
    int _defaultItemEQPresetType;
    BOOL _outputObscuredDueToInsufficientExternalProtection;
}

@property(readonly) int status;
@property(readonly) NSError * error;
@property float rate;
@property int actionAtItemEnd;
@property(getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property BOOL allowsExternalPlayback;
@property(getter=isExternalPlaybackActive,readonly) BOOL externalPlaybackActive;
@property BOOL usesExternalPlaybackWhileExternalScreenIsActive;
@property BOOL usesAudioOnlyModeForExternalPlayback;
@property(readonly) int externalPlaybackType;
@property int defaultItemEQPresetType;
@property(readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property(readonly) AVPlayerItem * currentItem;
@property(copy) id playbackQueueCommitHandler;
@property(readonly) BOOL isPlaybackQueueTransactionActive;
@property(readonly) NSArray * items;
@property(readonly) AVPlayer * _player;
@property(readonly) int _externalProtectionStatus;
@property(copy) NSString * externalPlaybackVideoGravity;
@property(readonly) id playerAVAudioSession;
@property BOOL disallowsAMRAudio;


- (id)playbackQueueCommitHandler;
- (void)setDefaultItemEQPresetType:(int)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (void)commitPlaybackQueueTransaction;
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)arg1;
- (int)defaultItemEQPresetType;
- (void)setPlaybackQueueCommitHandler:(id)arg1;
- (void)advanceToNextItem;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)_setClientName:(id)arg1;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (BOOL)isPlaybackQueueTransactionActive;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)_setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (id)externalPlaybackVideoGravity;
- (int)externalPlaybackType;
- (void)_setUserVolume:(float)arg1;
- (float)_userVolume;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (BOOL)isClosedCaptionDisplayEnabled;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (BOOL)disallowsAMRAudio;
- (BOOL)isExternalPlaybackActive;
- (void)play;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)_CALayerDestinationIsTVOut;
- (int)_externalProtectionStatus;
- (int)actionAtItemEnd;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)allowsExternalPlayback;
- (id)playerAVAudioSession;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setActionAtItemEnd:(int)arg1;
- (id)_player;
- (float)rate;
- (id)items;
- (void)setRate:(float)arg1;
- (int)status;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (id)currentItem;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeItem:(id)arg1;

@end
