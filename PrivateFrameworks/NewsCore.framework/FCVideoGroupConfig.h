/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVideoGroupConfig : FCGroupConfig {
    NSString * _mutingChannelID;
    NSArray * _topVideosArticleIDs;
    NSDictionary * _topVideosMetadataByArticleID;
}

@property (nonatomic, readonly) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, readonly) NSString *discoverMoreVideosTitle;
@property (nonatomic, readonly) NSString *discoverMoreVideosURLString;
@property (nonatomic, copy) NSString *mutingChannelID;
@property (nonatomic, readonly) NSArray *topVideosArticleIDs;
@property (nonatomic, readonly) NSDictionary *topVideosMetadataByArticleID;

- (void).cxx_destruct;
- (id)discoverMoreVideosSubtitle;
- (id)discoverMoreVideosTitle;
- (id)discoverMoreVideosURLString;
- (id)initWithDictionary:(id)arg1;
- (id)mutingChannelID;
- (void)setMutingChannelID:(id)arg1;
- (id)topVideosArticleIDs;
- (id)topVideosMetadataByArticleID;

@end
