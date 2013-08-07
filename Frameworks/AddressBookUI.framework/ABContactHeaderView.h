/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, UITableView, UILabel, UIView, NSDictionary, <ABPresenterDelegate>, ABContactPhotoView, UIColor, CNContact;

@interface ABContactHeaderView : UIView <UITableViewDelegate, UITableViewDataSource, ABPropertyGroupItemDelegate> {
    ABContactPhotoView *_photoView;
    UILabel *_nameLabel;
    UILabel *_taglineLabel;
    UITableView *_editingTable;
    CNContact *_contact;
    UIView *_personHeaderView;
    BOOL _editing;
    <ABPresenterDelegate> *_delegate;
    UIColor *_backgroundColor;
    NSDictionary *_nameTextAttributes;
    NSDictionary *_taglineTextAttributes;
    NSArray *_editingGroups;
    NSString *_alternateName;
    NSString *_message;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentMargins;
}

@property <ABPresenterDelegate> * delegate;
@property(retain) UIColor * backgroundColor;
@property(copy) NSDictionary * nameTextAttributes;
@property(copy) NSDictionary * taglineTextAttributes;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentMargins;
@property(getter=isEditing) BOOL editing;
@property(retain) NSArray * editingGroups;
@property(retain) NSString * alternateName;
@property(retain) NSString * message;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setAlternateName:(id)arg1;
- (id)editingGroups;
- (id)taglineTextAttributes;
- (id)nameTextAttributes;
- (id)selectEditingGroupAtIndex:(unsigned int)arg1;
- (void)saveContactPhoto;
- (void)setContentMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)initWithContact:(id)arg1 withEditingGroups:(id)arg2 personHeaderView:(id)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)propertyItem:(id)arg1 didChangeValue:(id)arg2;
- (float)_topMarginToNameBaselineWithName:(id)arg1 tagline:(id)arg2;
- (id)contentViewConstraints;
- (id)contentViewEditingConstraints;
- (void)_updatePhotoView;
- (float)_labelsVSpacing;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentMargins;
- (void)setTaglineTextAttributes:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (void)updateFontSizes;
- (void)setEditingGroups:(id)arg1;
- (id)_taglineStringForContact:(id)arg1;
- (id)_headerStringForContact:(id)arg1;
- (void)handleNameLabelLongPress:(id)arg1;
- (BOOL)isEditing;
- (void)setBackgroundColor:(id)arg1;
- (id)alternateName;
- (id)backgroundColor;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setNeedsUpdateConstraints;
- (void)setMessage:(id)arg1;
- (void)copy:(id)arg1;
- (void)updateConstraints;
- (void)setEditing:(BOOL)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)tintColorDidChange;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
