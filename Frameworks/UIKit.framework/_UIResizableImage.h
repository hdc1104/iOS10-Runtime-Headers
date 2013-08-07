/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIResizableImage : UIImage  {
    BOOL _alwaysStretches;
    BOOL _isSubimage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _subimageInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _capInsets;
}

+ (BOOL)supportsSecureCoding;

- (int)resizingMode;
- (id)_resizableImageWithCapMask:(int)arg1;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isResizable;
- (BOOL)_isSubimage;
- (void)_setSubimageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentInsetsInPixels:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 emptySizeFallback:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (id)_initWithOtherImage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
