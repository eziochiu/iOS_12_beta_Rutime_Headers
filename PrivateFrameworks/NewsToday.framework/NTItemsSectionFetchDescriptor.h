/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTItemsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {
    NTCatchUpOperationArticleIDsRequest * _itemsArticlesRequest;
    NTPBItemsTodaySectionSpecificConfig * _itemsConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NTCatchUpOperationArticleIDsRequest *itemsArticlesRequest;
@property (nonatomic, copy) NTPBItemsTodaySectionSpecificConfig *itemsConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithItemsConfiguration:(id)arg1;
- (id)itemsArticlesRequest;
- (id)itemsConfiguration;
- (void)setItemsArticlesRequest:(id)arg1;
- (void)setItemsConfiguration:(id)arg1;

@end
