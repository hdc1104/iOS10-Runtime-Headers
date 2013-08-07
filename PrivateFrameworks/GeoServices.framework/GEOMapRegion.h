/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {
    double _eastLng;
    double _northLat;
    double _southLat;
    double _westLng;
    NSMutableArray *_vertexs;
    struct { 
        unsigned int eastLng : 1; 
        unsigned int northLat : 1; 
        unsigned int southLat : 1; 
        unsigned int westLng : 1; 
    } _has;
}

@property(readonly) double centerLat;
@property(readonly) double centerLng;
@property(readonly) double spanLat;
@property(readonly) double spanLng;
@property BOOL hasSouthLat;
@property double southLat;
@property BOOL hasWestLng;
@property double westLng;
@property BOOL hasNorthLat;
@property double northLat;
@property BOOL hasEastLng;
@property double eastLng;
@property(retain) NSMutableArray * vertexs;

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;

- (id)initWithSpannedRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)vertexs;
- (void)setHasEastLng:(BOOL)arg1;
- (void)setHasNorthLat:(BOOL)arg1;
- (void)setHasWestLng:(BOOL)arg1;
- (void)setHasSouthLat:(BOOL)arg1;
- (void)clearVertexs;
- (unsigned int)vertexsCount;
- (BOOL)hasEastLng;
- (BOOL)hasNorthLat;
- (BOOL)hasWestLng;
- (BOOL)hasSouthLat;
- (void)setVertexs:(id)arg1;
- (BOOL)containsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)spanLng;
- (double)spanLat;
- (double)centerLng;
- (double)centerLat;
- (id)initWithRadialPlace:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (double)eastLng;
- (double)westLng;
- (double)northLat;
- (double)southLat;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSpannedRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEastLng:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setWestLng:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)addVertex:(id)arg1;
- (id)vertexAtIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
