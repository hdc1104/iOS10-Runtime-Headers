/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAsset, ALAssetPrivate;

@interface ALAsset : NSObject  {
    id _internal;
}

@property(readonly) ALAsset * originalAsset;
@property(getter=isEditable,readonly) BOOL editable;
@property(retain) ALAssetPrivate * internal;

+ (struct CGSize { float x1; float x2; })largePreviewImageSizeForSize:(struct CGSize { float x1; float x2; })arg1;

- (BOOL)isDeletable;
- (void)setExternalUsageIntent:(unsigned int)arg1;
- (void)setLargePreviewImageWithImageData:(id)arg1 completionBlock:(id)arg2;
- (void)setVideoAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (id)representationForUTI:(id)arg1;
- (id)originalAsset;
- (id)_typeAsString;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (struct CGImage { }*)aspectRatioThumbnail;
- (void)setInternal:(id)arg1;
- (id)internal;
- (BOOL)isEditable;
- (struct CGImage { }*)thumbnail;
- (BOOL)isValid;
- (void)dealloc;
- (id)description;
- (id)defaultRepresentation;
- (id)_uuid;
- (id)valueForProperty:(id)arg1;

@end
