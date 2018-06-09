/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedContext : NSObject <NSCopying> {
    NSString * _channelID;
    bool  _isCoverArticles;
    bool  _isEditorial;
    bool  _isEditorialGems;
    bool  _isHiddenFeed;
    bool  _isTopStories;
    NSString * _sectionID;
    NSString * _topicID;
}

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic) bool isCoverArticles;
@property (nonatomic) bool isEditorial;
@property (nonatomic) bool isEditorialGems;
@property (nonatomic) bool isHiddenFeed;
@property (nonatomic) bool isTopStories;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *topicID;

+ (id)feedContextForBreakingNewsChannelID:(id)arg1;
+ (id)feedContextForChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForCoverArticlesFeed;
+ (id)feedContextForEditorialChannel:(id)arg1 editorialGemsSectionID:(id)arg2;
+ (id)feedContextForEditorialChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForEditorialTag:(id)arg1;
+ (id)feedContextForHiddenFeed;
+ (id)feedContextForTag:(id)arg1;
+ (id)feedContextForTopStoriesChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForTopStoriesTag:(id)arg1;

- (void).cxx_destruct;
- (id)channelID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isCoverArticles;
- (bool)isEditorial;
- (bool)isEditorialGems;
- (bool)isHiddenFeed;
- (bool)isTopStories;
- (id)sectionID;
- (void)setChannelID:(id)arg1;
- (void)setIsCoverArticles:(bool)arg1;
- (void)setIsEditorial:(bool)arg1;
- (void)setIsEditorialGems:(bool)arg1;
- (void)setIsHiddenFeed:(bool)arg1;
- (void)setIsTopStories:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)setTopicID:(id)arg1;
- (id)topicID;

@end
