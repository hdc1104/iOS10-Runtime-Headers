/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer  {
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    struct CGPoint { 
        float x; 
        float y; 
    } _reconsideredLockingLocation;
    unsigned int _lastLockingAxis : 2;
    unsigned int _lockingAxis : 2;
    unsigned int _hasChildScrollView : 1;
    unsigned int _hasParentScrollView : 1;
    unsigned int _caughtDeceleratingScrollView : 1;
    unsigned int _directionalLockEnabled : 1;
    unsigned int _transfersTrackingFromParentScrollView : 1;
}

@property UIScrollView * scrollView;
@property(getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property(getter=_caughtDeceleratingScrollView,readonly) BOOL caughtDeceleratingScrollView;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (BOOL)_canTransferTrackingFromParentPagingScrollView;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (void)_centroidMovedTo:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (struct CGPoint { float x1; float x2; })_adjustScreenLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)scrollView;
- (void)_resetGestureRecognizer;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_scrollViewDidEndZooming;
- (BOOL)_caughtDeceleratingScrollView;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setScrollView:(id)arg1;
- (BOOL)isDirectionalLockEnabled;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (float)_hysteresis;
- (struct CGPoint { float x1; float x2; })velocityInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })translationInView:(id)arg1;

@end
