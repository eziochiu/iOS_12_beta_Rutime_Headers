/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesGroupConfig : FCGroupConfig {
    NSArray * _mandatoryArticleIDs;
    NSArray * _optionalArticleIDs;
    NSDate * _publishDate;
    NSDictionary * _topStoriesMetadataByArticleID;
}

@property (nonatomic, readonly) NSArray *mandatoryArticleIDs;
@property (nonatomic, readonly) NSArray *optionalArticleIDs;
@property (nonatomic, readonly) NSDate *publishDate;
@property (nonatomic, retain) NSDictionary *topStoriesMetadataByArticleID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)mandatoryArticleIDs;
- (id)optionalArticleIDs;
- (id)publishDate;
- (void)setTopStoriesMetadataByArticleID:(id)arg1;
- (id)topStoriesMetadataByArticleID;

@end
