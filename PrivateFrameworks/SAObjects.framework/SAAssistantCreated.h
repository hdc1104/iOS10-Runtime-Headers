/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand  {
}

@property(copy) NSString * assistantId;
@property(copy) NSString * speechId;

+ (id)assistantCreatedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantCreated;

- (void)setSpeechId:(id)arg1;
- (id)speechId;
- (void)setAssistantId:(id)arg1;
- (id)assistantId;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end