/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, <NSXPCListenerDelegate>, NSObject<OS_dispatch_queue>;

@interface NSXPCListener : NSObject  {
    void *_xconnection;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *reserved0;
    <NSXPCListenerDelegate> *_delegate;
    NSString *_serviceName;
    unsigned long long _state;
    id _reserved1;
    id _reserved2;
}

@property <NSXPCListenerDelegate> * delegate;

+ (id)_UUID;
+ (void)enableTransactions;
+ (id)anonymousListener;
+ (id)serviceListener;

- (id)_queue;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)initWithMachServiceName:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)delegate;
- (void)resume;
- (void)suspend;
- (id)endpoint;
- (void)setOptions:(unsigned int)arg1;
- (id)_initShared;
- (void)_setQueue:(id)arg1;
- (id)serviceName;
- (id)initWithServiceName:(id)arg1;
- (void)stop;

@end
