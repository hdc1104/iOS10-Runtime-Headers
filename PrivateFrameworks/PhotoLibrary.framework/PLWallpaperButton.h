/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class _UIBackdropView, UIImageView;

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver> {
    UIImageView *_titleMaskImageView;
    _UIBackdropView *_backdropView;
}

@property(retain) UIImageView * titleMaskImageView;
@property(retain) _UIBackdropView * backdropView;


- (void)setTitleMaskImageView:(id)arg1;
- (id)titleMaskImageView;
- (void)_setupBackdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)backdropViewDidChange:(id)arg1;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end
