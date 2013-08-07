/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKConnection : NSObject  {
}

@property id eventDelegate;
@property struct opaqueRTCReporting { }* reportingAgent;

+ (BOOL)isRelayEnabled;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)networkStatistics;
- (id)networkStatisticsDictionaryForGCKStats:(void*)arg1;
- (void)cancelConnectParticipant:(id)arg1;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id*)arg2;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id*)arg2;
- (unsigned int)gckPID;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (struct OpaqueGCKSession { }*)gckSession;
- (void)preRelease;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (id)getLocalConnectionDataForLocalGaming;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (id)initWithParticipantID:(id)arg1;
- (void)connect;

@end
