/* made by EzioChiu.
 */

@protocol PXCMMSuggestion <NSObject, PXMediaTypeAggregating>

@required

- (PXCMMContext *)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (long long)count;
- (void)decline;
- (id)diagnosticsItem;
- (NSDate *)endDate;
- (NSString *)identifier;
- (NSString *)localizedTitle;
- (void)markAsActiveIfNeeded;
- (<PXPeopleFetchResult> *)peopleFetchResult;
- (<PXDisplayAsset> *)posterAsset;
- (<PXUIImageProvider> *)posterMediaProvider;
- (NSDate *)startDate;

@end
