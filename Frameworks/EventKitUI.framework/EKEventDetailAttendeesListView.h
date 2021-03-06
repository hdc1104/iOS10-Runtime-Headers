/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAttendeesListView : UIView <EKEventDetailAttendeesList> {
    NSArray * _accepted;
    NSArray * _declined;
    bool  _groupsNames;
    bool  _highlighted;
    UIColor * _highlightedTextColor;
    NSArray * _maybe;
    NSArray * _noReply;
    UIColor * _textColor;
    NSArray * _ungrouped;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSArray *accepted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *declined;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool groupsNames;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) NSArray *maybe;
@property (nonatomic, retain) NSArray *noReply;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSArray *ungrouped;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startingAtPoint:(struct CGPoint { double x1; double x2; })arg3 givenWidth:(double)arg4;
- (double)_heightForGroupOfAttendeeNames:(id)arg1;
- (double)_offsetFromOffsetToBaseline:(double)arg1 withFont:(id)arg2;
- (id)accepted;
- (id)declined;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint { double x1; double x2; })arg3 givenWidth:(double)arg4;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)groupsNames;
- (id)highlightedTextColor;
- (bool)isHighlighted;
- (id)maybe;
- (id)noReply;
- (void)setAccepted:(id)arg1;
- (void)setDeclined:(id)arg1;
- (void)setGroupsNames:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setMaybe:(id)arg1;
- (void)setNoReply:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUngrouped:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setup;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (id)ungrouped;
- (id)viewController;

@end
