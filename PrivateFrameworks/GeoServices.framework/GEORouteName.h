/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {
    int _lastZilchStitchedIndex;
    GEONameInfo *_nameInfo;
    struct { 
        unsigned int lastZilchStitchedIndex : 1; 
    } _has;
}

@property(readonly) BOOL hasNameInfo;
@property(retain) GEONameInfo * nameInfo;
@property BOOL hasLastZilchStitchedIndex;
@property int lastZilchStitchedIndex;


- (void)setHasLastZilchStitchedIndex:(BOOL)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (int)lastZilchStitchedIndex;
- (BOOL)hasLastZilchStitchedIndex;
- (id)nameInfo;
- (BOOL)hasNameInfo;
- (void)setNameInfo:(id)arg1;
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
