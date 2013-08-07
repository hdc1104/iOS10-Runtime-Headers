/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel;

@interface UIDatePickerContentView : UIView  {
    struct { 
        unsigned int isAmPm : 1; 
    } _datePickerContentViewFlags;
    BOOL _isModern;
    UILabel *_titleLabel;
    float _titleLabelMaxX;
    int _titleAlignment;
}

@property(readonly) UILabel * titleLabel;
@property float titleLabelMaxX;
@property BOOL isAmPm;
@property int titleAlignment;
@property BOOL isModern;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setIsModern:(BOOL)arg1;
- (BOOL)isModern;
- (int)titleAlignment;
- (float)titleLabelMaxX;
- (void)setTitleAlignment:(int)arg1;
- (void)setTitleLabelMaxX:(float)arg1;
- (void)setIsAmPm:(BOOL)arg1;
- (BOOL)isAmPm;
- (id)titleLabel;
- (BOOL)_canBeReusedInPickerView;
- (void)layoutSubviews;

@end
