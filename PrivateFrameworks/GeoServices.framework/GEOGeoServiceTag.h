/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOGeoServiceTag : PBCodable <NSCopying> {
    int _serviceType;
    NSString *_tag;
}

@property int serviceType;
@property(retain) NSString * tag;


- (void)setServiceType:(int)arg1;
- (int)serviceType;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)dictionaryRepresentation;

@end
