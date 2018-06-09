/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {
    NTCatchUpOperationArticleIDsRequest * _mandatoryArticleIDsRequest;
    NTCatchUpOperationArticleIDsRequest * _personalizedArticleIDsRequest;
    NTPBPersonalizedTodaySectionSpecificConfig * _personalizedConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NTCatchUpOperationArticleIDsRequest *mandatoryArticleIDsRequest;
@property (nonatomic, copy) NTCatchUpOperationArticleIDsRequest *personalizedArticleIDsRequest;
@property (nonatomic, copy) NTPBPersonalizedTodaySectionSpecificConfig *personalizedConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithPersonalizedConfiguration:(id)arg1;
- (id)mandatoryArticleIDsRequest;
- (id)personalizedArticleIDsRequest;
- (id)personalizedConfiguration;
- (void)setMandatoryArticleIDsRequest:(id)arg1;
- (void)setPersonalizedArticleIDsRequest:(id)arg1;
- (void)setPersonalizedConfiguration:(id)arg1;

@end
