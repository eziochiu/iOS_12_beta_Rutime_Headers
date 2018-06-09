/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTransactionDebugDetailsViewController : UITableViewController {
    UITableViewCell * _mapsCell;
    NSDictionary * _merchantDetails;
    PKPaymentTransaction * _transaction;
    NSDictionary * _transactionDetails;
}

@property (nonatomic, retain) NSDictionary *merchantDetails;
@property (nonatomic, retain) NSDictionary *transactionDetails;

- (void).cxx_destruct;
- (id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2;
- (void)_didSelectMap;
- (bool)_hasMUID;
- (id)_mapsCell;
- (id)_merchantInfoCellForIndex:(long long)arg1;
- (id)_stringForTechnologyType:(long long)arg1;
- (id)_stringForTransactionSource:(unsigned long long)arg1;
- (id)_stringForTransactionStatus:(long long)arg1;
- (id)_stringForTransactionType:(long long)arg1;
- (id)_transactionInfoCellForIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1;
- (id)merchantDetails;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setMerchantDetails:(id)arg1;
- (void)setTransactionDetails:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)transactionDetails;
- (void)viewDidLoad;

@end