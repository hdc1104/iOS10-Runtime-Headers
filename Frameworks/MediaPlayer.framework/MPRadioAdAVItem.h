/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPRadioAdTrack, NSData, RadioStation;

@interface MPRadioAdAVItem : MPAVAdItem  {
    MPRadioAdTrack *_adTrack;
    NSData *_artworkImageData;
    NSString *_artworkMIMEType;
    RadioStation *_station;
    NSString *_stationHash;
    NSString *_stationName;
    long long _stationID;
}

@property(retain) RadioStation * station;
@property(readonly) NSString * stationHash;
@property(readonly) long long stationID;
@property(readonly) NSString * stationName;


- (id)album;
- (id)stationName;
- (id)stationHash;
- (long long)stationID;
- (void)setArtworkImageData:(id)arg1 mimeType:(id)arg2;
- (void)setStation:(id)arg1;
- (void)_applyLoudnessInfo;
- (id)adTrack;
- (id)initWithAdTrack:(id)arg1;
- (void)reevaluateType;
- (id)titlesForTime:(double)arg1;
- (BOOL)supportsSkip;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)artworkMIMEType;
- (id)artworkImageData;
- (id)mainTitle;
- (id)station;
- (id)title;
- (id)imageCache;
- (void).cxx_destruct;
- (unsigned int)type;

@end
