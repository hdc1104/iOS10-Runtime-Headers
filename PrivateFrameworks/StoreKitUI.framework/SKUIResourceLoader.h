/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, <SKUIResourceLoaderDelegate>, SKUIClientContext, NSMutableDictionary;

@interface SKUIResourceLoader : NSObject  {
    SKUIClientContext *_clientContext;
    <SKUIResourceLoaderDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_operationsByRequestID;
    NSMutableDictionary *_resourcesByRequestID;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) NSOperationQueue * operationQueue;
@property <SKUIResourceLoaderDelegate> * delegate;
@property(getter=isIdle,readonly) BOOL idle;


- (id)initWithOperationQueue:(id)arg1;
- (void)cancelAllRequests;
- (void)setReason:(int)arg1 forRequestWithIdentifier:(unsigned int)arg2;
- (void)removeAllCachedResources;
- (void)cancelRequestWithIdentifier:(unsigned int)arg1;
- (id)cachedResourceForRequestIdentifier:(unsigned int)arg1;
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned int)arg2;
- (void)_sendDidIdleIfNecessary;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (BOOL)loadResourceWithRequest:(id)arg1 reason:(int)arg2;
- (BOOL)isIdle;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (id)clientContext;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (id)operationQueue;

@end
