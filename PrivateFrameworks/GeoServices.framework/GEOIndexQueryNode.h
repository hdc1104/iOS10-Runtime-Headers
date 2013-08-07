/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOIndexQueryNode : PBCodable <NSCopying> {
    NSString *_field;
    NSMutableArray *_operands;
    int _type;
    NSString *_value;
}

@property int type;
@property(readonly) BOOL hasField;
@property(retain) NSString * field;
@property(readonly) BOOL hasValue;
@property(retain) NSString * value;
@property(retain) NSMutableArray * operands;


- (id)operands;
- (id)operandsAtIndex:(unsigned int)arg1;
- (void)clearOperands;
- (unsigned int)operandsCount;
- (BOOL)hasValue;
- (void)addOperands:(id)arg1;
- (void)setOperands:(id)arg1;
- (void)setField:(id)arg1;
- (id)field;
- (BOOL)hasField;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setValue:(id)arg1;
- (id)value;
- (id)dictionaryRepresentation;

@end
