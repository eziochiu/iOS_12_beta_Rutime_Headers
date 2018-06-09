/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemIdManager : NSObject <SKUIRedeemIdTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSIndexPath * _activeIndexPath;
    SKUIClientContext * _clientContext;
    <SKUIRedeemIdManagerDelegate> * _delegate;
    SKUIPinnedFooterView * _pinnedFooterView;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSIndexPath *activeIndexPath;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIRedeemIdManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIPinnedFooterView *pinnedFooterView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;
- (id)_disclosureAttributedString;
- (double)_heightForDisclosureFooter;
- (long long)_keyboardTypeForIndexPath:(id)arg1;
- (id)_nextIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (id)_pcLinkString;
- (id)_placeholderTextForIndexPath:(id)arg1;
- (id)_regulationsLinkString;
- (long long)_returnKeyTypeForIndexPath:(id)arg1;
- (double)_tableViewNonFooterContentHeight;
- (id)activeIndexPath;
- (id)clientContext;
- (id)delegate;
- (void)dismissActiveCell;
- (void)handleNextPressed;
- (id)initWithClientContext:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pinnedFooterView;
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;
- (void)setActiveIndexPath:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterHidden:(bool)arg1;
- (void)setPinnedFooterView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

@end
