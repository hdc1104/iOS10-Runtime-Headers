/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSMutableDictionary, NSMutableData, <PBRequesterDelegate>, NSString, NSArray, NSMutableArray, NSRunLoop, PBDataReader, NSURLConnection, NSURL, NSDictionary;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
    NSURL *_URL;
    <PBRequesterDelegate> *_delegate;
    NSURLConnection *_connection;
    NSRunLoop *_connectionRunLoop;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned int _lastGoodDataOffset;
    unsigned int _uploadPayloadSize;
    unsigned int _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    int _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    struct __CFRunLoopTimer { } *_timeoutTimer;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    BOOL _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    BOOL _shouldHandleCookies;
    struct { 
        unsigned int ignoresResponse : 1; 
        unsigned int loading : 1; 
        unsigned int needsCancel : 1; 
        unsigned int responseStatusSet : 1; 
        unsigned int parsedResponseHeader : 1; 
        unsigned int delegateDidReceiveResponse : 1; 
        unsigned int delegateDidFinish : 1; 
        unsigned int delegateDidCancel : 1; 
        unsigned int delegateDidFailWithError : 1; 
        unsigned int paused : 1; 
        unsigned int resuming : 1; 
    } _flags;
}

@property(retain) NSURL * URL;
@property id delegate;
@property(retain) NSURLConnection * connection;
@property(retain) NSRunLoop * connectionRunLoop;
@property BOOL ignoresResponse;
@property(retain) NSString * logRequestToFile;
@property(retain) NSString * logResponseToFile;
@property(readonly) NSArray * requests;
@property(readonly) unsigned int uploadPayloadSize;
@property(readonly) unsigned int downloadPayloadSize;
@property(readonly) unsigned int requestResponseTime;
@property double timeoutSeconds;
@property(retain) NSArray * clientCertificates;
@property(copy) NSDictionary * httpRequestHeaders;
@property(retain) NSDictionary * httpResponseHeaders;
@property BOOL shouldHandleCookies;
@property BOOL needsCancel;

+ (BOOL)usesEncodedMessages;

- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
- (unsigned int)requestResponseTime;
- (unsigned int)downloadPayloadSize;
- (unsigned int)uploadPayloadSize;
- (void)startWithConnectionProperties:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (void)setNeedsCancel;
- (id)httpResponseHeaders;
- (void)setLogResponseToFile:(id)arg1;
- (void)setLogRequestToFile:(id)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (id)requests;
- (void)addRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (void)setShouldHandleCookies:(BOOL)arg1;
- (BOOL)shouldHandleCookies;
- (double)timeoutSeconds;
- (void)setConnectionRunLoop:(id)arg1;
- (id)connectionRunLoop;
- (void)_timeoutTimerFired;
- (void)setHttpRequestHeaders:(id)arg1;
- (id)responseForInternalRequest:(id)arg1;
- (void)addInternalRequest:(id)arg1;
- (id)internalRequests;
- (void)clearRequests;
- (void)setIgnoresResponse:(BOOL)arg1;
- (BOOL)ignoresResponse;
- (id)_connectionRunLoop;
- (id)logResponseToFile;
- (id)decodeResponseData:(id)arg1;
- (BOOL)_tryParseData;
- (BOOL)readResponsePreamble:(id)arg1;
- (void)_resetTimeoutTimer;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (void)cancelWithErrorCode:(int)arg1;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(int)arg2 userInfo:(id)arg3;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(int)arg2 userInfo:(id)arg3;
- (BOOL)needsCancel;
- (void)_cancelNoNotify;
- (void)_serializePayload:(id)arg1;
- (void)_sendPayload:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(id)arg2;
- (id)logRequestToFile;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (id)requestPreamble;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2 connectionProperties:(id)arg3;
- (void)_startTimeoutTimer;
- (id)httpRequestHeaders;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (id)_languageLocale;
- (id)_osVersion;
- (id)_applicationID;
- (void)setNeedsCancel:(BOOL)arg1;
- (void)setHttpResponseHeaders:(id)arg1;
- (void)_removeTimeoutTimer;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)resume;
- (void)cancel;
- (id)URL;
- (void)setConnection:(id)arg1;
- (void)_cleanup;
- (void)_start;
- (BOOL)isPaused;
- (void)pause;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setURL:(id)arg1;
- (void)start;
- (void)_scheduleThrottlingError;

@end
