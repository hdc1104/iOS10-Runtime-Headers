/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

@interface _UIWebViewScrollView : UIWebScrollView  {
    _UIWebViewScrollViewDelegateForwarder *_forwarder;
    BOOL _bouncesSetExplicitly;
    UIWebBrowserView *_browserView;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)_setWebView:(id)arg1;
- (void)_weaklySetBouncesHorizontally:(BOOL)arg1;
- (void)setBouncesVertically:(BOOL)arg1;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (void)setBounces:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
