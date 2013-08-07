/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAssetContainerList>;

@interface PLAssetContainerDataSource : NSObject  {
    <PLAssetContainerList> *_assetContainerList;
    unsigned int _allAssetsCount;
    unsigned int *_containerCounts;
    BOOL _cachedValuesNeedUpdate;
}

@property(readonly) <PLAssetContainerList> * assetContainerList;

+ (id)assetInAssetContainer:(id)arg1 atIndex:(unsigned int)arg2;

- (unsigned int)assetCountForContainer:(id)arg1;
- (id)assetContainerWithObjectID:(id)arg1;
- (unsigned int)containerAssetCountForAssetIndex:(unsigned int)arg1;
- (void)_updateCachedValues;
- (unsigned int)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned int)arg1 wrap:(BOOL)arg2;
- (unsigned int)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned int)arg1 wrap:(BOOL)arg2;
- (unsigned int)indexOffsetForAssetContainerAtAssetIndex:(unsigned int)arg1;
- (void)_updateCachedCount:(unsigned int)arg1 forContainerAtContainerIndex:(unsigned int)arg2;
- (id)assetContainerForAssetGlobalIndex:(unsigned int)arg1;
- (id)assetContainerForAsset:(id)arg1;
- (id)fetchAllAssets;
- (BOOL)hasAssetAtIndexPath:(id)arg1;
- (unsigned int)assetCountForContainerAtIndex:(unsigned int)arg1;
- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)assetAtGlobalIndex:(unsigned int)arg1;
- (id)initWithAssetContainerList:(id)arg1;
- (id)assetContainerAtIndex:(unsigned int)arg1;
- (unsigned int)decrementGlobalIndex:(unsigned int)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (unsigned int)incrementGlobalIndex:(unsigned int)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)indexPathForGlobalIndex:(unsigned int)arg1;
- (unsigned int)globalIndexOfAsset:(id)arg1;
- (unsigned int)globalIndexForIndexPath:(id)arg1;
- (id)firstAssetIndexPath;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetWithObjectID:(id)arg1;
- (id)assetContainerWithUUID:(id)arg1;
- (void)assetContainerDidChange:(id)arg1 updateIndexPaths:(id)arg2 preferNextAssetOnDeleteForKeys:(id)arg3;
- (unsigned int)indexOfContainer:(id)arg1;
- (unsigned int)allAssetsCount;
- (id)indexPathOfAsset:(id)arg1;
- (void)shuffleAssets:(BOOL)arg1 startingAsset:(id)arg2;
- (id)assetContainerList;
- (void)assetContainerListDidChange:(id)arg1;
- (id)assetWithUUID:(id)arg1;
- (void)dealloc;

@end
