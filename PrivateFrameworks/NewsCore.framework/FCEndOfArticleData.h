/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndOfArticleData : NSObject {
    NSArray * _allTopics;
    NSArray * _publisherHeadlines;
    NSArray * _relatedHeadlines;
}

@property (nonatomic, retain) NSArray *allTopics;
@property (nonatomic, retain) NSArray *publisherHeadlines;
@property (nonatomic, retain) NSArray *relatedHeadlines;

- (void).cxx_destruct;
- (id)allTopics;
- (id)publisherHeadlines;
- (id)relatedHeadlines;
- (void)setAllTopics:(id)arg1;
- (void)setPublisherHeadlines:(id)arg1;
- (void)setRelatedHeadlines:(id)arg1;

@end
