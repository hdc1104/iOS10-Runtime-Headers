/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularWcdmaL1State : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int l1State : 1; 
    }  _has;
    int  _l1State;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasL1State;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int l1State;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasL1State;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)l1State;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasL1State:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setL1State:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end