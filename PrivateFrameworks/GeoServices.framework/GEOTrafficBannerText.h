/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficBannerText : PBCodable <NSCopying> {
    GEOFormattedString * _bannerLargeText;
    GEOFormattedString * _bannerSmallText;
    struct { 
        unsigned int hideAtDistance : 1; 
        unsigned int incidentDistance : 1; 
        unsigned int incidentIndex : 1; 
        unsigned int showAtDistance : 1; 
    }  _has;
    unsigned int  _hideAtDistance;
    unsigned int  _incidentDistance;
    unsigned int  _incidentIndex;
    NSMutableArray * _localizedIncidentBanners;
    NSMutableArray * _localizedIncidentSpokenTexts;
    NSMutableArray * _localizedIncidentSubBanners;
    unsigned int  _showAtDistance;
    GEOFormattedString * _spokenPrompt;
}

@property (nonatomic, retain) GEOFormattedString *bannerLargeText;
@property (nonatomic, retain) GEOFormattedString *bannerSmallText;
@property (nonatomic, readonly) BOOL hasBannerLargeText;
@property (nonatomic, readonly) BOOL hasBannerSmallText;
@property (nonatomic) BOOL hasHideAtDistance;
@property (nonatomic) BOOL hasIncidentDistance;
@property (nonatomic) BOOL hasIncidentIndex;
@property (nonatomic) BOOL hasShowAtDistance;
@property (nonatomic, readonly) BOOL hasSpokenPrompt;
@property (nonatomic) unsigned int hideAtDistance;
@property (nonatomic) unsigned int incidentDistance;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic, retain) NSMutableArray *localizedIncidentBanners;
@property (nonatomic, retain) NSMutableArray *localizedIncidentSpokenTexts;
@property (nonatomic, retain) NSMutableArray *localizedIncidentSubBanners;
@property (nonatomic) unsigned int showAtDistance;
@property (nonatomic, retain) GEOFormattedString *spokenPrompt;

- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (id)bannerLargeText;
- (id)bannerSmallText;
- (void)clearLocalizedIncidentBanners;
- (void)clearLocalizedIncidentSpokenTexts;
- (void)clearLocalizedIncidentSubBanners;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBannerLargeText;
- (BOOL)hasBannerSmallText;
- (BOOL)hasHideAtDistance;
- (BOOL)hasIncidentDistance;
- (BOOL)hasIncidentIndex;
- (BOOL)hasShowAtDistance;
- (BOOL)hasSpokenPrompt;
- (unsigned int)hash;
- (unsigned int)hideAtDistance;
- (unsigned int)incidentDistance;
- (unsigned int)incidentIndex;
- (BOOL)isEqual:(id)arg1;
- (id)localizedIncidentBannerAtIndex:(unsigned int)arg1;
- (id)localizedIncidentBanners;
- (unsigned int)localizedIncidentBannersCount;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned int)arg1;
- (id)localizedIncidentSpokenTexts;
- (unsigned int)localizedIncidentSpokenTextsCount;
- (id)localizedIncidentSubBannerAtIndex:(unsigned int)arg1;
- (id)localizedIncidentSubBanners;
- (unsigned int)localizedIncidentSubBannersCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBannerLargeText:(id)arg1;
- (void)setBannerSmallText:(id)arg1;
- (void)setHasHideAtDistance:(BOOL)arg1;
- (void)setHasIncidentDistance:(BOOL)arg1;
- (void)setHasIncidentIndex:(BOOL)arg1;
- (void)setHasShowAtDistance:(BOOL)arg1;
- (void)setHideAtDistance:(unsigned int)arg1;
- (void)setIncidentDistance:(unsigned int)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setLocalizedIncidentBanners:(id)arg1;
- (void)setLocalizedIncidentSpokenTexts:(id)arg1;
- (void)setLocalizedIncidentSubBanners:(id)arg1;
- (void)setShowAtDistance:(unsigned int)arg1;
- (void)setSpokenPrompt:(id)arg1;
- (unsigned int)showAtDistance;
- (id)spokenPrompt;
- (void)writeTo:(id)arg1;

@end