/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTFeedTransformationHeadlineItem : NSObject <NTFeedTransformationItem> {
    NSDate * _cacheExpirationDate;
    <FCHeadlineProviding> * _headline;
    SFSearchResult * _searchResult;
}

@property (nonatomic, readonly, copy) NSDate *cacheCutoffTimeRelativeDate;
@property (nonatomic, readonly, copy) NSDate *cacheExpirationDate;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEligibleForLeadingCellAppearance, nonatomic, readonly) bool eligibleForLeadingCellAppearance;
@property (nonatomic, readonly, copy) NTPBFeedItem *feedItemForHeadlineFetch;
@property (nonatomic, readonly) <FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool needsFeedItemHeadlinesFetch;
@property (nonatomic, readonly) unsigned long long preferredDynamicSlotAllocation;
@property (nonatomic, readonly, copy) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long todayItemType;
@property (nonatomic, readonly) bool usesDynamicSlotAllocation;

- (void).cxx_destruct;
- (id)cacheCutoffTimeRelativeDate;
- (id)cacheExpirationDate;
- (id)clusterID;
- (id)copyWithCacheExpirationDate:(id)arg1 searchResult:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedItemForHeadlineFetch;
- (id)feedTransformationItem;
- (unsigned long long)hash;
- (id)headline;
- (id)identifier;
- (id)init;
- (id)initWithHeadline:(id)arg1 cacheExpirationDate:(id)arg2 searchResult:(id)arg3;
- (bool)isEligibleForLeadingCellAppearance;
- (bool)isEqual:(id)arg1;
- (bool)needsFeedItemHeadlinesFetch;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
- (id)searchResult;
- (void)setHeadline:(id)arg1;
- (unsigned long long)todayItemType;
- (bool)usesDynamicSlotAllocation;

@end
