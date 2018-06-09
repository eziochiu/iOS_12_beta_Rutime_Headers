/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTArticleIDsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {
    <NTSectionFetchDescriptor> * _privateFetchDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) <NTSectionFetchDescriptor> *privateFetchDescriptor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithArticleIDsConfiguration:(id)arg1;
- (id)privateFetchDescriptor;
- (void)setPrivateFetchDescriptor:(id)arg1;

@end
