/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying> {
    GEODownloadMetadata *_metadata;
    GEOSupportedTileSets *_tileSets;
}

@property(retain) GEOSupportedTileSets * tileSets;
@property(retain) GEODownloadMetadata * metadata;


- (id)tileSets;
- (void)setTileSets:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
