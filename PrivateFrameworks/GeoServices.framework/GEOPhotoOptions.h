/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoOptions : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _photoSizes;
    int _maxPhotos;
    int _photoType;
    struct { 
        unsigned int photoType : 1; 
    } _has;
}

@property int maxPhotos;
@property BOOL hasPhotoType;
@property int photoType;
@property(readonly) unsigned int photoSizesCount;
@property(readonly) int* photoSizes;


- (void)setPhotoSizes:(int*)arg1 count:(unsigned int)arg2;
- (int*)photoSizes;
- (void)addPhotoSize:(int)arg1;
- (int)photoSizeAtIndex:(unsigned int)arg1;
- (void)clearPhotoSizes;
- (unsigned int)photoSizesCount;
- (void)setMaxPhotos:(int)arg1;
- (int)maxPhotos;
- (void)setHasPhotoType:(BOOL)arg1;
- (void)setPhotoType:(int)arg1;
- (int)photoType;
- (BOOL)hasPhotoType;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
