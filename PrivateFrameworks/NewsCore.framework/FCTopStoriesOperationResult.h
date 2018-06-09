/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesOperationResult : NSObject {
    FCColorGradient * _backgroundColorGradient;
    NSArray * _mandatoryHeadlines;
    NSArray * _optionalHeadlines;
    NSDate * _publishDate;
    NSString * _subtitle;
    NSDictionary * _topStoriesMetadataByArticleID;
}

@property (nonatomic, copy) FCColorGradient *backgroundColorGradient;
@property (copy) NSArray *mandatoryHeadlines;
@property (copy) NSArray *optionalHeadlines;
@property (copy) NSDate *publishDate;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (copy) NSDictionary *topStoriesMetadataByArticleID;

- (void).cxx_destruct;
- (id)backgroundColorGradient;
- (id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlines:(id)arg2 optionalHeadlines:(id)arg3 topStoriesMetadataByArticleID:(id)arg4 publishDate:(id)arg5 subtitle:(id)arg6;
- (id)mandatoryHeadlines;
- (id)optionalHeadlines;
- (id)publishDate;
- (void)setBackgroundColorGradient:(id)arg1;
- (void)setMandatoryHeadlines:(id)arg1;
- (void)setOptionalHeadlines:(id)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setTopStoriesMetadataByArticleID:(id)arg1;
- (id)subtitle;
- (id)topStoriesMetadataByArticleID;

@end
