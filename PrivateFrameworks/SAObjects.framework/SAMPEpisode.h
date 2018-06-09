/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPEpisode : SAMPMediaItem

@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long showEpisodesCount;
@property (nonatomic, copy) NSString *showName;

+ (id)episode;
+ (id)episodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)episodeNumber;
- (id)groupIdentifier;
- (long long)seasonNumber;
- (void)setEpisodeNumber:(long long)arg1;
- (void)setSeasonNumber:(long long)arg1;
- (void)setShowEpisodesCount:(long long)arg1;
- (void)setShowName:(id)arg1;
- (long long)showEpisodesCount;
- (id)showName;

@end
