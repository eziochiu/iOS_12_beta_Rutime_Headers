/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroDowntimeViewController : STIntroSplashViewController <UITableViewDataSource, UITableViewDelegate> {
    STDeviceBedtime * _bedtimeModel;
    unsigned long long  _datePickerVisibility;
    UITableView * _tableView;
}

@property (retain) STDeviceBedtime *bedtimeModel;
@property unsigned long long datePickerVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)bedtimeModel;
- (void)datePickerChanged:(id)arg1;
- (unsigned long long)datePickerVisibility;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setBedtimeModel:(id)arg1;
- (void)setDatePickerVisibility:(unsigned long long)arg1;
- (void)setTableView:(id)arg1;
- (id)stringForDateComponents:(id)arg1;
- (long long)tableRowForDatePicker;
- (unsigned long long)tableRowForEndLabelRow;
- (unsigned long long)tableRowForStartLabelRow;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
