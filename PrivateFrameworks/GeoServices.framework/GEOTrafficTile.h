/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSData;

@interface GEOTrafficTile : PBCodable <NSCopying> {
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

@property(readonly) BOOL hasVertices;
@property(retain) NSData * vertices;
@property(retain) NSMutableArray * trafficSegments;
@property(retain) NSMutableArray * trafficIncidents;


- (struct { int x1; int x2; }*)createUnpackedVerticesWithGutterSize:(int)arg1;
- (id)trafficIncidents;
- (id)trafficSegments;
- (id)trafficIncidentAtIndex:(unsigned int)arg1;
- (void)clearTrafficIncidents;
- (unsigned int)trafficIncidentsCount;
- (id)trafficSegmentAtIndex:(unsigned int)arg1;
- (void)clearTrafficSegments;
- (unsigned int)trafficSegmentsCount;
- (id)vertices;
- (BOOL)hasVertices;
- (void)addTrafficIncident:(id)arg1;
- (void)addTrafficSegment:(id)arg1;
- (void)setTrafficIncidents:(id)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(id)arg1;
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
