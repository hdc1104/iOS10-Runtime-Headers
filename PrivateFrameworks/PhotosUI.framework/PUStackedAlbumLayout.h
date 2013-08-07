/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUAlbumListTransitionContext, NSArray, UICollectionViewLayoutAttributes, NSMutableDictionary;

@interface PUStackedAlbumLayout : UICollectionViewLayout  {
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
    BOOL _isInteractive;
    NSArray *_visibleStackedItemLayoutAttributes;
    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;
    float _yAdjust;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    struct CGPoint { 
        float x; 
        float y; 
    } _referenceCenter;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSizeAdjust;
}

@property(copy) NSArray * visibleStackedItemLayoutAttributes;
@property(copy) UICollectionViewLayoutAttributes * referenceItemLayoutAttributes;
@property struct CGPoint { float x1; float x2; } referenceCenter;
@property float yAdjust;
@property struct CGSize { float x1; float x2; } contentSizeAdjust;
@property(retain) PUAlbumListTransitionContext * albumListTransitionContext;
@property(setter=setInteractive:) BOOL isInteractive;


- (id)referenceItemLayoutAttributes;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeAdjust;
- (float)yAdjust;
- (void)setReferenceCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setVisibleStackedItemLayoutAttributes:(id)arg1;
- (void)setReferenceItemLayoutAttributes:(id)arg1;
- (int)zIndexForItemAtIndexPath:(id)arg1;
- (void)setContentSizeAdjust:(struct CGSize { float x1; float x2; })arg1;
- (void)setYAdjust:(float)arg1;
- (void)setInteractive:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })referenceCenter;
- (id)visibleStackedItemLayoutAttributes;
- (void)setAlbumListTransitionContext:(id)arg1;
- (id)albumListTransitionContext;
- (void).cxx_destruct;
- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned int)arg3;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (BOOL)isInteractive;

@end
