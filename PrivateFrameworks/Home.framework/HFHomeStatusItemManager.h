/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeStatusItemManager : HFItemManager {
    unsigned long long  _latestOverallLoadingState;
    long long  _latestOverallPriority;
    unsigned long long  _maxStatusItemCount;
    HFStaticItem * _showDetailsItem;
    HFStatusItemProvider * _statusItemProvider;
}

@property (nonatomic) unsigned long long latestOverallLoadingState;
@property (nonatomic) long long latestOverallPriority;
@property (nonatomic) unsigned long long maxStatusItemCount;
@property (nonatomic, retain) HFStaticItem *showDetailsItem;
@property (nonatomic, retain) HFStatusItemProvider *statusItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (long long)_overallPriority;
- (unsigned long long)_overflowStatusItemCount;
- (bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (id)_showDetailsItemTitle;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithMaxStatusItems:(unsigned long long)arg1 delegate:(id)arg2;
- (unsigned long long)latestOverallLoadingState;
- (long long)latestOverallPriority;
- (unsigned long long)maxStatusItemCount;
- (void)setLatestOverallLoadingState:(unsigned long long)arg1;
- (void)setLatestOverallPriority:(long long)arg1;
- (void)setMaxStatusItemCount:(unsigned long long)arg1;
- (void)setShowDetailsItem:(id)arg1;
- (void)setStatusItemProvider:(id)arg1;
- (id)showDetailsItem;
- (id)statusItemProvider;

@end
