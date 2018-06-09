/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTArticleListSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {
    NTPBArticleListTodaySectionSpecificConfig * _articleListRequest;
}

@property (nonatomic, copy) NTPBArticleListTodaySectionSpecificConfig *articleListRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)articleListRequest;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithArticleListConfiguration:(id)arg1;
- (void)setArticleListRequest:(id)arg1;

@end
