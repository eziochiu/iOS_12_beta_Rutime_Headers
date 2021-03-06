/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPurchaseLookupFetchOperation : FCFetchOperation {
    NSArray * _purchaseIDs;
    FCPurchaseLookupRecordSource * _purchaseLookupRecordSource;
}

@property (nonatomic, retain) NSArray *purchaseIDs;
@property (nonatomic, retain) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;

- (void).cxx_destruct;
- (id)_prefixedPurchasedIDs:(id)arg1;
- (id)init;
- (id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2;
- (void)performOperation;
- (id)processFetchedResults:(id)arg1;
- (id)purchaseIDs;
- (id)purchaseLookupRecordSource;
- (void)setPurchaseIDs:(id)arg1;
- (void)setPurchaseLookupRecordSource:(id)arg1;

@end
