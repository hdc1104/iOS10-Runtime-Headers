/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKGroupsController, PKUsageNotificationServer, NSTimer, PKPassGroupStackView, NSMutableArray, <PKPassGroupsViewControllerDelegate>;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKCodeAcquisitionDelegate> {
    PKGroupsController *_groupsController;
    PKPassGroupStackView *_cardStackView;
    unsigned int _modalCardIndex;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    int _presentationState;
    NSTimer *_allowDimmingTimer;
    unsigned long long tick;
    unsigned long long tock;
    NSTimer *_passViewedNotificationTimer;
    BOOL _passesAreOutdated;
    BOOL _backgroundMode;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    PKUsageNotificationServer *_usageServer;
    <PKPassGroupsViewControllerDelegate> *_delegate;
}

@property(retain) PKPassGroupStackView * groupStackView;
@property <PKPassGroupsViewControllerDelegate> * delegate;
@property BOOL passesAreOutdated;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setPassesAreOutdated:(BOOL)arg1;
- (BOOL)passesAreOutdated;
- (void)setGroupStackView:(id)arg1;
- (id)groupStackView;
- (void)cardsChanged:(id)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)presentGroupTable;
- (void)reloadPassesWithCompletion:(id)arg1;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2;
- (void)groupStackView:(id)arg1 didAnimateToState:(int)arg2;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (BOOL)passesGrowWhenFlipped;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (void)updateLockscreenIdleTimer;
- (void)_passViewedNotificationTimerFired;
- (void)_startPassViewedNotificationTimer;
- (void)_clearPassViewedNotificationTimer;
- (void)allowIdleTimer;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentGroupWithIndex:(unsigned int)arg1;
- (void)_presentWithUpdatedPasses:(id)arg1;
- (void)reloadPasses;
- (void)_applyPresentationState;
- (unsigned int)numberOfGroups;
- (void)_handleApplicationdidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (int)suppressedContent;
- (unsigned int)indexOfGroup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)groupAtIndex:(unsigned int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsFullScreenLayout;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end
