/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface MediaControlClient : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    struct MediaControlClientImp { } *_client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventHandlerBlock;

}


- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setVolume:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setRate:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setPosition:(float)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)setPosition:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)playWithParams:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)activateResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)removeResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)addResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)addResourceFile:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)addResourceData:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)removeItem:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)insertItem:(id)arg1 afterItem:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)ensureConnected;
- (void)checkAuthentication;
- (void)authorizeWithPICRequest:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)ensureDisconnected;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(id)arg2;
- (struct MediaControlClientImp { }*)internalClient;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
