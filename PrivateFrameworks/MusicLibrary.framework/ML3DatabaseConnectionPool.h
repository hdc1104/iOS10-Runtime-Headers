/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class <ML3DatabaseConnectionPoolDelegate>, NSUUID, NSObject<OS_dispatch_queue>, _ML3DatabaseConnectionSubPool, NSString, NSMutableDictionary;

@interface ML3DatabaseConnectionPool : NSObject  {
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    int _connectionsProfilingLevel;
    BOOL _useDistantWriterConnections;
    NSString *_databasePath;
    <ML3DatabaseConnectionPoolDelegate> *_delegate;
    unsigned int _maxReaders;
    unsigned int _maxWriters;
    unsigned int _connectionsJournalingMode;
}

@property(readonly) NSString * databasePath;
@property <ML3DatabaseConnectionPoolDelegate> * delegate;
@property(readonly) unsigned int maxReaders;
@property(readonly) unsigned int maxWriters;
@property unsigned int connectionsJournalingMode;
@property int connectionsProfilingLevel;
@property BOOL useDistantWriterConnections;
@property(readonly) BOOL isCurrentThreadConnectionInTransaction;


- (unsigned int)connectionsJournalingMode;
- (unsigned int)maxWriters;
- (unsigned int)maxReaders;
- (BOOL)useDistantWriterConnections;
- (int)connectionsProfilingLevel;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2;
- (id)_connectionForIdentifier:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (id)_localConnectionForThread:(id)arg1;
- (BOOL)isCurrentThreadConnectionInTransaction;
- (void)checkInConnection:(id)arg1;
- (id)writerConnection;
- (id)readerConnection;
- (void)setConnectionsJournalingMode:(unsigned int)arg1;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2 maxWriters:(unsigned int)arg3;
- (id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2;
- (void)setUseDistantWriterConnections:(BOOL)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (id)databasePath;
- (void)closeAllConnections;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;

@end
