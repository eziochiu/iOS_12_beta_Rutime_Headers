/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    <CDPDevicePickerDelegate> * _delegate;
    NSArray * _devices;
    NSArray * _escapeOffers;
    UIButton * _remoteApprovalButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)devices;
- (id)escapeOffers;
- (double)heightForFooterInTableView:(id)arg1;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDevices:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)viewForFooterInTableView:(id)arg1;

@end
