/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class UIImageView, SBFLockScreenWallpaperParallaxSettings, UIColor, UIScrollView;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    SBFLockScreenWallpaperParallaxSettings *_parallaxSettings;
    UIColor *_averageColor;
}

@property(readonly) UIColor * averageColor;


- (id)averageColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cropRect;
- (void)_setupScrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2;
- (id)wallpaperImage;
- (struct CGSize { float x1; float x2; })_imageSize;
- (void)dealloc;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)layoutSubviews;

@end
