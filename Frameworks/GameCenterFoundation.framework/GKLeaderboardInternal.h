/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSArray, NSString, GKScoreInternal, NSDate, NSDictionary;

@interface GKLeaderboardInternal : GKInternalRepresentation  {
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_leaderboardSetIdentifier;
    NSDate *_lastSubmittedDate;
    NSDictionary *_icons;
    unsigned int _overallRank;
    unsigned int _overallRankCount;
    unsigned short _friendRank;
    unsigned short _friendRankCount;
    unsigned int _maxRank;
    NSArray *_scores;
    GKScoreInternal *_playerScore;
}

@property(retain) NSString * localizedTitle;
@property(retain) NSString * category;
@property(readonly) unsigned int maxRange;
@property(retain) NSString * identifier;
@property(retain) NSString * groupIdentifier;
@property(retain) NSString * leaderboardSetIdentifier;
@property(retain) NSString * title;
@property(retain) NSDate * lastSubmittedDate;
@property(retain) NSDictionary * icons;
@property unsigned int overallRank;
@property unsigned int overallRankCount;
@property unsigned short friendRank;
@property unsigned short friendRankCount;
@property unsigned int maxRank;
@property(retain) NSArray * scores;
@property(retain) GKScoreInternal * playerScore;

+ (id)secureCodedPropertyKeys;

- (void)setLocalizedTitle:(id)arg1;
- (unsigned short)friendRank;
- (unsigned int)maxRange;
- (void)setFriendRankCount:(unsigned short)arg1;
- (unsigned short)friendRankCount;
- (void)setOverallRankCount:(unsigned int)arg1;
- (unsigned int)overallRankCount;
- (void)setOverallRank:(unsigned int)arg1;
- (unsigned int)overallRank;
- (void)setPlayerScore:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (id)lastSubmittedDate;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (id)leaderboardSetIdentifier;
- (void)setMaxRank:(unsigned int)arg1;
- (unsigned int)maxRank;
- (void)setFriendRank:(unsigned short)arg1;
- (id)playerScore;
- (void)setScores:(id)arg1;
- (id)scores;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)category;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)localizedTitle;
- (void)setCategory:(id)arg1;
- (id)icons;
- (void)setIcons:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;

@end
