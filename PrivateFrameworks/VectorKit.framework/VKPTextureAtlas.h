/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSData;

@interface VKPTextureAtlas : PBCodable  {
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property(retain) NSData * texture;
@property unsigned int quadWidth;
@property unsigned int quadHeight;


- (void)setQuadHeight:(unsigned int)arg1;
- (void)setQuadWidth:(unsigned int)arg1;
- (void)setTexture:(id)arg1;
- (unsigned int)quadHeight;
- (unsigned int)quadWidth;
- (id)texture;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
