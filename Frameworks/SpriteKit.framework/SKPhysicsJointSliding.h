/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointSliding : SKPhysicsJoint  {
    BOOL _shouldEnableLimits;
    float _lowerDistanceLimit;
    float _upperDistanceLimit;
}

@property BOOL shouldEnableLimits;
@property float lowerDistanceLimit;
@property float upperDistanceLimit;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3 axis:(struct CGVector { float x1; float x2; })arg4;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setUpperDistanceLimit:(float)arg1;
- (void)setLowerDistanceLimit:(float)arg1;
- (float)upperDistanceLimit;
- (float)lowerDistanceLimit;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (BOOL)shouldEnableLimits;

@end
