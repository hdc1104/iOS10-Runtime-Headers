/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, NSString, PLEffectsFullsizeView, PLEffectsGridView, AVCaptureVideoPreviewLayer, PLEffectsGridLabelsView;

@interface PLVideoPreviewView : UIView  {
    NSString *_videoGravity;
    BOOL _disableLayoutForPreviewView;
    BOOL _disableLayoutForEffectsFullsizeView;
    BOOL _disableLayoutForEffectsGridViews;
    BOOL _square;
    AVCaptureVideoPreviewLayer *_previewLayer;
    int _orientation;
    UIView *_previewLayerView;
    PLEffectsFullsizeView *_effectsFullsizeView;
    PLEffectsGridView *_effectsGridView;
    PLEffectsGridLabelsView *_effectsGridLabelsView;
    UIView *_fadeOutView;
}

@property(retain) AVCaptureVideoPreviewLayer * previewLayer;
@property int orientation;
@property(readonly) UIView * previewLayerView;
@property(readonly) PLEffectsFullsizeView * effectsFullsizeView;
@property(readonly) PLEffectsGridView * effectsGridView;
@property(readonly) PLEffectsGridLabelsView * effectsGridLabelsView;
@property(readonly) UIView * fadeOutView;
@property(copy) NSString * videoGravity;
@property(getter=isDisabledLayoutForPreviewView) BOOL disableLayoutForPreviewView;
@property(getter=isDisabledLayoutForEffectsFullsizeView) BOOL disableLayoutForEffectsFullsizeView;
@property(getter=isDisabledLayoutForEffectsGridViews) BOOL disableLayoutForEffectsGridViews;
@property(getter=isSquare) BOOL square;


- (void)setDisableLayoutForPreviewView:(BOOL)arg1;
- (id)fadeOutView;
- (id)effectsGridLabelsView;
- (id)effectsFullsizeView;
- (id)previewLayerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSublayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForView:(id)arg1;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(BOOL)arg1;
- (void)createEffectsGridViews;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(BOOL)arg1;
- (void)createEffectsFullsizeView;
- (void)setDisableLayoutForEffectsGridViews:(BOOL)arg1;
- (void)setDisableLayoutForEffectsFullsizeView:(BOOL)arg1;
- (BOOL)isDisabledLayoutForEffectsGridViews;
- (BOOL)isDisabledLayoutForEffectsFullsizeView;
- (BOOL)isDisabledLayoutForPreviewView;
- (void)_updateGravityForLayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForSubviewsAccountForSquare:(BOOL)arg1;
- (BOOL)isSquare;
- (id)effectsGridView;
- (void)setPreviewLayer:(id)arg1;
- (void)setSquare:(BOOL)arg1;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (id)previewLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForCaptureDeviceFaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)videoGravity;
- (void)setVideoGravity:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (void)dealloc;
- (int)orientation;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end
