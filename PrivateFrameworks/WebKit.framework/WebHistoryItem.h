/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate *_private;
}

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;

- (void)setTitle:(id)arg1;
- (id)title;
- (BOOL)_hasCachedPageExpired;
- (BOOL)_isInPageCache;
- (void)_setSharedLinkUniqueIdentifier:(id)arg1;
- (void)_setBookmarkID:(unsigned int)arg1;
- (unsigned int)_bookmarkID;
- (unsigned long)_getWeeklyVisitCounts:(const int**)arg1;
- (unsigned long)_getDailyVisitCounts:(const int**)arg1;
- (id)_redirectURLs;
- (BOOL)_lastVisitWasHTTPNonGet;
- (void)_setLastVisitWasFailure:(BOOL)arg1;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (id)_transientPropertyForKey:(id)arg1;
- (id)targetItem;
- (id)_lastVisitedDate;
- (void)_setLastVisitedTimeInterval:(double)arg1;
- (void)setAlwaysAttemptToUsePageCache:(BOOL)arg1;
- (void)setRSSFeedReferrer:(id)arg1;
- (id)RSSFeedReferrer;
- (int)visitCount;
- (BOOL)isTargetItem;
- (id)_sharedLinkUniqueIdentifier;
- (id)_viewportArguments;
- (void)setVisitCount:(int)arg1;
- (id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4;
- (void)_setViewportArguments:(id)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)alternateTitle;
- (void)setAlternateTitle:(id)arg1;
- (id)originalURLString;
- (id)initWithWebCoreHistoryItem:(struct PassRefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x1; })arg1;
- (void)_mergeAutoCompleteHints:(id)arg1;
- (id)URLString;
- (void)_recordInitialVisit;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (void)_visitedWithTitle:(id)arg1 increaseVisitCount:(BOOL)arg2;
- (double)lastVisitedTimeInterval;
- (void)setViewState:(id)arg1;
- (struct CGPoint { float x1; float x2; })scrollPoint;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (struct CGPoint { float x1; float x2; })_scrollPoint;
- (void)_setScale:(float)arg1 isInitial:(BOOL)arg2;
- (void)_setScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)lastVisitWasFailure;
- (BOOL)_scaleIsInitial;
- (float)_scale;
- (id)children;
- (id)target;
- (id)dictionaryRepresentation;

@end
