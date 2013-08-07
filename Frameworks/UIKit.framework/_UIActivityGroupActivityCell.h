/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIActivityFunctionImageView, UILabel;

@interface _UIActivityGroupActivityCell : UICollectionViewCell  {
    BOOL _darkStyleOnLegacyApp;
    _UIActivityFunctionImageView *_activityImageView;
    UILabel *_activityLabel;
}

@property(retain) _UIActivityFunctionImageView * activityImageView;
@property(retain) UILabel * activityLabel;
@property BOOL darkStyleOnLegacyApp;


- (void)dealloc;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (id)activityLabel;
- (void)setActivity:(id)arg1 withCustomTitle:(id)arg2;
- (id)activityImageView;
- (void)reloadImage:(id)arg1;
- (void)setActivityLabel:(id)arg1;
- (BOOL)darkStyleOnLegacyApp;
- (void)setActivityImageView:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;

@end
