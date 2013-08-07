/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibrary;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork <NSCoding> {
    unsigned long long _itemPersistentID;
    MPMediaLibrary *_library;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
}


- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 artworkCacheID:(id)arg2;
- (id)imageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize { float x1; float x2; })arg2 artworkCacheID:(id)arg3;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(int)arg2 artworkCacheID:(id)arg3;
- (id)_imageDataForSize:(struct CGSize { float x1; float x2; })arg1 playbackTime:(double)arg2;
- (id)_cacheIDAtPlaybackTime:(double)arg1;
- (id)_imageForSize:(struct CGSize { float x1; float x2; })arg1 artworkCacheID:(id)arg2 playbackTime:(double)arg3 scaleToSize:(BOOL)arg4;
- (id)_imageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 scaleToSize:(struct CGSize { float x1; float x2; })arg4;
- (id)_initWithItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageCropRect;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasArtworkAvailable;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
