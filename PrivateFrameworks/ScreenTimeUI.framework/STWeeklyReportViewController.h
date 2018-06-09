/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STWeeklyReportViewController : UITableViewController {
    STUsageReport * _report;
}

@property (nonatomic, readonly) STUsageReport *report;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithUsageReport:(id)arg1;
- (id)report;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
