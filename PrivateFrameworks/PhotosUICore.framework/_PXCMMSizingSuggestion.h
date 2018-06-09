/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXCMMSizingSuggestion : NSObject <PXCMMSuggestion> {
    long long  _count;
    NSDate * _endDate;
    NSString * _identifier;
    NSString * _localizedTitle;
    <PXPeopleFetchResult> * _peopleFetchResult;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    NSDate * _startDate;
}

@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) <PXPeopleFetchResult> *peopleFetchResult;
@property (nonatomic, readonly) <PXDisplayAsset> *posterAsset;
@property (nonatomic, readonly) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)aggregateMediaType;
- (id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (long long)count;
- (void)decline;
- (id)diagnosticsItem;
- (id)endDate;
- (id)identifier;
- (id)init;
- (id)localizedTitle;
- (void)markAsActiveIfNeeded;
- (id)peopleFetchResult;
- (id)posterAsset;
- (id)posterMediaProvider;
- (void)registerMatchingType:(long long)arg1;
- (double)scoreForSuggestionMatchingType:(long long)arg1;
- (id)startDate;

@end
