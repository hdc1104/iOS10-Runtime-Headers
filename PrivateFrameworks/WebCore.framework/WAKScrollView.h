/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class WAKClipView, WAKView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    WAKView *_documentView;
    WAKClipView *_contentView;
    id _delegate;
    struct CGPoint { 
        float x; 
        float y; 
    } _scrollOrigin;
}


- (void)_adjustScrollers;
- (int)verticalScrollingMode;
- (int)horizontalScrollingMode;
- (void)setScrollingMode:(int)arg1;
- (void)setVerticalScrollingMode:(int)arg1;
- (void)setHorizontalScrollingMode:(int)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (BOOL)_selfHandleEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollOrigin:(struct CGPoint { float x1; float x2; })arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })scrollOrigin;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRect;
- (void)setActualScrollPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleExtent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actualDocumentVisibleRect;
- (id)contentView;
- (void)scrollingModes:(int*)arg1 vertical:(int*)arg2;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
- (id)documentView;
- (void)scrollWheel:(id)arg1;
- (BOOL)inProgrammaticScroll;
- (BOOL)hasVerticalScroller;
- (BOOL)hasHorizontalScroller;
- (float)horizontalLineScroll;
- (void)setLineScroll:(float)arg1;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (void)setDocumentView:(id)arg1;
- (float)verticalLineScroll;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (id)delegate;

@end
