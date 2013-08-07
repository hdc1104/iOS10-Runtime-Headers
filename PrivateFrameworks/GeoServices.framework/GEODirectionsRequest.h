/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORouteAttributes, GEOMapRegion, GEOLocation, NSData, NSMutableArray, GEOClientCapabilities;

@interface GEODirectionsRequest : PBRequest <NSCopying> {
    GEOClientCapabilities *_clientCapabilities;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    unsigned int _mainTransportTypeMaxRouteCount;
    NSData *_originalDirectionsResponseID;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_serviceTags;
    unsigned int _timeSinceLastRerouteRequest;
    NSMutableArray *_waypoints;
    BOOL _getRouteForZilchPoints;
    struct { 
        unsigned int departureTime : 1; 
        unsigned int mainTransportTypeMaxRouteCount : 1; 
        unsigned int timeSinceLastRerouteRequest : 1; 
        unsigned int getRouteForZilchPoints : 1; 
    } _has;
}

@property(readonly) BOOL hasRouteAttributes;
@property(retain) GEORouteAttributes * routeAttributes;
@property(retain) NSMutableArray * waypoints;
@property BOOL hasMainTransportTypeMaxRouteCount;
@property unsigned int mainTransportTypeMaxRouteCount;
@property(readonly) BOOL hasCurrentUserLocation;
@property(retain) GEOLocation * currentUserLocation;
@property(readonly) BOOL hasCurrentMapRegion;
@property(retain) GEOMapRegion * currentMapRegion;
@property(readonly) BOOL hasOriginalRouteID;
@property(retain) NSData * originalRouteID;
@property(readonly) BOOL hasOriginalRouteZilchPoints;
@property(retain) NSData * originalRouteZilchPoints;
@property BOOL hasTimeSinceLastRerouteRequest;
@property unsigned int timeSinceLastRerouteRequest;
@property(readonly) BOOL hasClientCapabilities;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property(readonly) BOOL hasOriginalDirectionsResponseID;
@property(retain) NSData * originalDirectionsResponseID;
@property BOOL hasDepartureTime;
@property int departureTime;
@property BOOL hasGetRouteForZilchPoints;
@property BOOL getRouteForZilchPoints;
@property(retain) NSMutableArray * serviceTags;


- (id)serviceTags;
- (id)waypoints;
- (void)setHasGetRouteForZilchPoints:(BOOL)arg1;
- (void)setHasDepartureTime:(BOOL)arg1;
- (void)setHasTimeSinceLastRerouteRequest:(BOOL)arg1;
- (void)setHasMainTransportTypeMaxRouteCount:(BOOL)arg1;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (void)clearServiceTags;
- (unsigned int)serviceTagsCount;
- (void)setGetRouteForZilchPoints:(BOOL)arg1;
- (BOOL)getRouteForZilchPoints;
- (BOOL)hasGetRouteForZilchPoints;
- (void)setDepartureTime:(int)arg1;
- (int)departureTime;
- (BOOL)hasDepartureTime;
- (id)originalDirectionsResponseID;
- (BOOL)hasOriginalDirectionsResponseID;
- (id)clientCapabilities;
- (BOOL)hasClientCapabilities;
- (void)setTimeSinceLastRerouteRequest:(unsigned int)arg1;
- (unsigned int)timeSinceLastRerouteRequest;
- (BOOL)hasTimeSinceLastRerouteRequest;
- (id)originalRouteZilchPoints;
- (BOOL)hasOriginalRouteZilchPoints;
- (id)originalRouteID;
- (BOOL)hasOriginalRouteID;
- (id)currentMapRegion;
- (BOOL)hasCurrentMapRegion;
- (id)currentUserLocation;
- (BOOL)hasCurrentUserLocation;
- (void)setMainTransportTypeMaxRouteCount:(unsigned int)arg1;
- (unsigned int)mainTransportTypeMaxRouteCount;
- (BOOL)hasMainTransportTypeMaxRouteCount;
- (id)waypointAtIndex:(unsigned int)arg1;
- (void)clearWaypoints;
- (unsigned int)waypointsCount;
- (id)routeAttributes;
- (BOOL)hasRouteAttributes;
- (void)addServiceTag:(id)arg1;
- (void)addWaypoint:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setOriginalDirectionsResponseID:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setOriginalRouteZilchPoints:(id)arg1;
- (void)setOriginalRouteID:(id)arg1;
- (void)setCurrentMapRegion:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
