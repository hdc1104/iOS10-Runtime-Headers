/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    BOOL _expanded;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _supportsNumberKeySelection;
    BOOL _hasSecondaryCandidates;
    BOOL _needsLayout;
    NSArray *_candidateGroups;
    unsigned int _columnsCount;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
    int _candidatesVisualStyle;
    float _headerViewHeight;
    NSMutableArray *_cellAttributes;
    NSMutableDictionary *_supplementaryAttributes;
}

@property(retain) NSArray * candidateGroups;
@property unsigned int columnsCount;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;
@property int candidatesVisualStyle;
@property BOOL expanded;
@property BOOL needsPaddingForIndexScrubber;
@property float headerViewHeight;
@property BOOL supportsNumberKeySelection;
@property(readonly) float groupBarWidth;
@property BOOL hasSecondaryCandidates;
@property BOOL needsLayout;
@property(retain) NSMutableArray * cellAttributes;
@property(retain) NSMutableDictionary * supplementaryAttributes;
@property(readonly) struct CGSize { float x1; float x2; } rowSize;

+ (id)layout;
+ (Class)layoutAttributesClass;

- (void)setNeedsLayout:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)setSupplementaryAttributes:(id)arg1;
- (void)setCellAttributes:(id)arg1;
- (unsigned int)numberOfCandidateSections;
- (void)finishLayoutForRowWithAttributes:(id)arg1 cellsTotalWidth:(float)arg2 rowOrigin:(struct CGPoint { float x1; float x2; })arg3 isLastCandidateInGroup:(BOOL)arg4 isFirstRow:(BOOL)arg5 isLastRow:(BOOL)arg6 zIndex:(int)arg7;
- (float)headerViewHeight;
- (unsigned int)columnsCount;
- (id)attributesWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)getGroupBarWidth:(float*)arg1 headerAttributes:(id*)arg2;
- (id)supplementaryAttributes;
- (id)cellAttributes;
- (BOOL)needsPaddingForIndexScrubber;
- (struct CGSize { float x1; float x2; })rowSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (id)previousCandidateIndexPathFromIndexPath:(id)arg1;
- (id)nextCandidateIndexPathFromIndexPath:(id)arg1;
- (BOOL)expanded;
- (float)groupBarWidth;
- (void)setHasSecondaryCandidates:(BOOL)arg1;
- (void)setNeedsPaddingForIndexScrubber:(BOOL)arg1;
- (void)setHeaderViewHeight:(float)arg1;
- (void)setCandidateGroups:(id)arg1;
- (void)setColumnsCount:(unsigned int)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setSupportsNumberKeySelection:(BOOL)arg1;
- (BOOL)supportsNumberKeySelection;
- (id)layoutAttributesForCandidateIndexPath:(id)arg1;
- (id)candidateGroups;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (int)candidatesVisualStyle;
- (BOOL)hasSecondaryCandidates;
- (void)setCandidatesVisualStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (unsigned int)numberOfItemsInSection:(int)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (unsigned int)numberOfSections;
- (BOOL)needsLayout;

@end
