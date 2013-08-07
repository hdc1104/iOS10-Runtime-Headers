/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKGroup, <PKPassGroupStackViewDatasource>, NSTimer, PKReusablePassViewQueue, UIView, NSMutableArray, PKPassGroupView, <PKPassGroupStackViewDelegate><UIScrollViewDelegate>, NSMutableDictionary, PKPass;

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPassGroupViewDelegate> {
    PKPassGroupView *_modallyPresentedGroupView;
    PKGroup *_modallyPresentedGroup;
    NSMutableArray *_passPileViews;
    unsigned int _modalGroupIndex;
    UIView *_pileContainer;
    int _scrollingTestState;
    int _currentTestReps;
    int _presentationState;
    NSMutableDictionary *_groupViewsByGroupID;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    PKPassGroupView *_reorderedGroupView;
    unsigned int _previousIndexOfReorderedGroup;
    struct CGPoint { 
        float x; 
        float y; 
    } _reorderedGroupViewPositionInFrame;
    struct CGPoint { 
        float x; 
        float y; 
    } _panningVelocity;
    NSTimer *_autoscrollTimer;
    BOOL _isReordering;
    BOOL _reorderPeekCompensated;
    BOOL _hasScrolledUp;
    BOOL _hasScrolledDown;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    unsigned int _userInteractionCounter;
    unsigned int _isDeleting : 1;
    NSMutableDictionary *_animatorsByGroupID;
    <PKPassGroupStackViewDatasource> *_datasource;
}

@property <PKPassGroupStackViewDelegate><UIScrollViewDelegate> * delegate;
@property <PKPassGroupStackViewDatasource> * datasource;
@property int presentationState;
@property unsigned int modalGroupIndex;
@property(readonly) PKPass * modalGroupFrontmostPass;
@property(readonly) BOOL isReordering;


- (void)gotoBaseTestState;
- (void)beginFlipCardTest;
- (void)beginSelectCardTest;
- (void)beginScrollCardListTest;
- (void)testFlipToBack;
- (void)testFlipToFront;
- (void)testGoModal;
- (void)testGroupSelection;
- (void)scrollNext;
- (void)scrollDownTest;
- (void)scrollUpTest;
- (void)_performAfterDelay:(double)arg1 block:(id)arg2;
- (void)reloadGroupViewAtIndex:(unsigned int)arg1;
- (int)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (BOOL)groupViewPassesSuppressedContent:(id)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
- (BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupViewFrontPassDidFlip:(id)arg1 animated:(BOOL)arg2;
- (BOOL)groupViewShouldAllowPassFlip:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)groupView:(id)arg1 panned:(struct CGPoint { float x1; float x2; })arg2 withVelocity:(struct CGPoint { float x1; float x2; })arg3;
- (void)groupViewPanDidEnd:(id)arg1;
- (void)groupViewPanDidBegin:(id)arg1;
- (BOOL)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (void)deleteSheet:(id)arg1 didComplete:(BOOL)arg2;
- (BOOL)_isIngestingPass;
- (void)_autoscrollIfNecessary;
- (void)_animateGroupView:(id)arg1 toIndex:(unsigned int)arg2 referenceView:(id)arg3 orderAbove:(BOOL)arg4 reorderAfter:(double)arg5;
- (unsigned int)_indexForPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)_reorderPositionChangedForGroupView:(id)arg1 velocity:(struct CGPoint { float x1; float x2; })arg2;
- (float)_xPositionForGroupView:(id)arg1 forState:(int)arg2;
- (float)_yForGroupInPileAtIndex:(unsigned int)arg1;
- (float)_yForModallyPresentedGroup;
- (float)_yForGroupInTableAtIndex:(unsigned int)arg1;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (void)_transformCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 duration:(float)arg4;
- (void)_transformCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 animated:(BOOL)arg4;
- (void)_positionGroupViewForStackPresentation:(id)arg1 atIndex:(unsigned int)arg2;
- (float)_scaleForGroupView:(id)arg1 forState:(int)arg2;
- (void)_createCardPileContainerView;
- (void)_notifyDelegateOfStateChange;
- (void)_addMotionEffectsToModalPile;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_addDimmingToPileWithAnimation:(BOOL)arg1;
- (void)_positionGroupViewForModalPresentation:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_animateGroupViewToModalPresentation:(id)arg1 atIndex:(unsigned int)arg2 indexes:(id)arg3 animationIndex:(unsigned int*)arg4;
- (void)_fanAndPageGroupView:(id)arg1;
- (void)_positionPileContainerForModalGroupViewWithAnimation:(BOOL)arg1 delay:(float)arg2;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 reservePlaceForModalGroup:(BOOL)arg2;
- (void)_removeDimmingFromPileWithAnimation:(BOOL)arg1;
- (void)_removeMotionEffectsFromModalPile;
- (int)_edgeStylesObscuredByTopCornersOfPassStyle:(int)arg1;
- (int)_edgeStylesObscuredByTopMiddleOfPassStyle:(int)arg1;
- (int)_startVisibleIndex;
- (float)_nativeYOfGroupAtBounds;
- (void)_flushCachesForGroupID:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfEagerLoadedIndexes;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForGroupView:(id)arg1 forState:(int)arg2;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned int)arg2;
- (id)_groupViewWithGroup:(id)arg1 contentMode:(int)arg2;
- (float)_groupHeightMultiplier;
- (void)_animateGroupViewToStackPresentation:(id)arg1 atIndex:(unsigned int)arg2 indexes:(id)arg3 animationIndex:(unsigned int*)arg4 fromGesture:(BOOL)arg5;
- (id)_sortedGroupViewIndexes;
- (id)_arrayOfStackedIndexes;
- (void)_enumerateLoadedGroupViews:(id)arg1;
- (void)_translateCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 animated:(BOOL)arg4;
- (void)_setModalGroupView:(id)arg1;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (unsigned int)_lastIndex;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (id)_groupViewAtIndex:(unsigned int)arg1;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (void)_arrangeGroups;
- (id)_loadGroupViewAtIndex:(unsigned int)arg1 forState:(int)arg2 contentMode:(int)arg3 cached:(BOOL*)arg4;
- (int)_defaultContentModeForPresentationState:(int)arg1 index:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfVisibleIndexes;
- (void)_cleanupPassPileContainerView;
- (void)_presentPassIngestionAcceptanceWithAnimation:(BOOL)arg1;
- (void)_presentPassIngestionWithAnimation:(BOOL)arg1;
- (void)_presentFlippedModalGroupView:(id)arg1 animated:(BOOL)arg2;
- (void)_presentModalGroupView:(id)arg1 animated:(BOOL)arg2;
- (void)_tileGroupsForState:(int)arg1 eager:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_positionForGroupView:(id)arg1 atIndex:(unsigned int)arg2 forState:(int)arg3;
- (id)datasource;
- (void)_loadModalGroupView;
- (void)_presentGroupStackViewWithAnimation:(BOOL)arg1 fromGesture:(BOOL)arg2;
- (float)_yPositionForGroupAtIndex:(unsigned int)arg1 forState:(int)arg2;
- (unsigned int)_indexOfGroupView:(id)arg1;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned int)arg2;
- (void)stageGroupInPresentationState:(int)arg1 atIndex:(unsigned int)arg2;
- (void)noteDidEndScrollingForTesting;
- (void)tilePassesEagerly:(BOOL)arg1;
- (BOOL)isReordering;
- (id)modalGroupFrontmostPass;
- (void)presentPassWithUniqueID:(id)arg1;
- (unsigned int)modalGroupIndex;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)setModalGroupIndex:(unsigned int)arg1;
- (void)setDatasource:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_stopAutoscrollTimer;
- (void)setPresentationState:(int)arg1;
- (int)presentationState;
- (void)dealloc;
- (void)_autoscrollForReordering:(id)arg1;
- (struct CGSize { float x1; float x2; })_contentSize;
- (void)reloadData;

@end
