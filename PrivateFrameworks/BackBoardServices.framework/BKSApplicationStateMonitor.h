/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, BKSSignal, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface BKSApplicationStateMonitor : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    BKSSignal *_invalidationSignal;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    unsigned int _interestedStates;
    NSArray *_interestedBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_messageHandlingQueue;
    NSObject<OS_xpc_object> *_serverEndpoint;
}

@property(copy) id handler;
@property unsigned int interestedStates;
@property(copy) NSArray * interestedBundleIDs;


- (BOOL)isApplicationBeingDebugged:(id)arg1;
- (void)updateInterestedStates:(unsigned int)arg1;
- (void)updateInterestedBundleIDs:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)queue_connectionWasInvalidated;
- (void)queue_reregister;
- (void)queue_updateInterestedStates:(BOOL)arg1;
- (void)queue_updateInterestedStates;
- (id)interestedBundleIDs;
- (void)updateInterestedBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (unsigned int)interestedStates;
- (void)queue_setInterestedStates:(unsigned int)arg1;
- (void)queue_setInterestedBundleIDs:(id)arg1;
- (void)queue_setHandler:(id)arg1;
- (void)queue_invalidate;
- (void)setInterestedStates:(unsigned int)arg1;
- (void)setInterestedBundleIDs:(id)arg1;
- (id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned int)arg3;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)queue_registerWithServer;
- (id)init;
- (void)applicationInfoForApplication:(id)arg1 completion:(id)arg2;
- (void)applicationInfoForPID:(int)arg1 completion:(id)arg2;
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;
- (unsigned int)applicationStateForApplication:(id)arg1;
- (void)setHandler:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)handler;
- (void)_setEndpoint:(id)arg1;
- (id)_connection;

@end
