/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaQuotaManager : NSObject {
    NSDictionary * _groupIterators;
    bool  _hasEvaluated;
    NSArray * _itemListWithinQuota;
    NSArray * _offPowerItemListWithinQuota;
    unsigned long long  _quota;
    unsigned long long  _quotaUsage;
}

- (void).cxx_destruct;
- (id)_containerListForIdentifier:(id)arg1;
- (void)_evaluateAddedItemsIfNecessary;
- (id)initWithGroupIterators:(id)arg1 quota:(unsigned long long)arg2;
- (bool)isItemGroupWithinQuota:(id)arg1;
- (id)itemsWithinQuota;
- (id)itemsWithinQuotaForIdentifier:(id)arg1;
- (id)offPowerItemsWithinQuota;
- (id)offPowerItemsWithinQuotaForIdentifier:(id)arg1;
- (unsigned long long)sizeOfItemsWithinQuota;
- (unsigned long long)sizeOfItemsWithinQuotaForIdentifier:(id)arg1;
- (unsigned long long)sizeOfNominatedItemsForIdentifier:(id)arg1;

@end
