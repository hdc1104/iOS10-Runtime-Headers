/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextView;

@interface ABPropertyNoteCell : ABPropertyCell  {
    UITextView *_textView;
}

@property(retain) UITextView * textView;


- (void)_updateDisplayAndEditingControls;
- (void)textViewEditingDidEnd:(id)arg1;
- (void)textViewChanged:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (id)contentViewConstraints;
- (id)contentViewEditingConstraints;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)setBackgroundColor:(id)arg1;
- (id)textView;
- (void)dealloc;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setTextView:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
