/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable  {
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property(retain) NSMutableArray * textureAtlas;
@property(retain) NSMutableArray * genericShields;


- (id)genericShieldAtIndex:(unsigned int)arg1;
- (void)clearGenericShields;
- (unsigned int)genericShieldsCount;
- (id)textureAtlasAtIndex:(unsigned int)arg1;
- (void)clearTextureAtlas;
- (unsigned int)textureAtlasCount;
- (void)addGenericShield:(id)arg1;
- (void)addTextureAtlas:(id)arg1;
- (void)setGenericShields:(id)arg1;
- (void)setTextureAtlas:(id)arg1;
- (id)textureAtlas;
- (id)genericShields;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
