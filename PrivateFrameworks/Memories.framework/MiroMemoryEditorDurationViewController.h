/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorDurationViewController : MiroMemoryEditorBasePlayerViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIPickerView * _durationPicker;
    MiroMemory * _memory;
    UILabel * _minutesLabel;
    UILabel * _secondsLabel;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPickerView *durationPicker;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumDuration;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, readonly) unsigned long long minimumDuration;
@property (nonatomic, retain) UILabel *minutesLabel;
@property (nonatomic, retain) UILabel *secondsLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)createDurationPickerView;
- (id)durationPicker;
- (bool)isValidSelectionForRow:(long long)arg1 forComponent:(long long)arg2;
- (unsigned long long)maximumDuration;
- (id)memory;
- (unsigned long long)minimumDuration;
- (id)minutesLabel;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 voiceOverStringForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)refreshPickerSelectionTime;
- (id)secondsLabel;
- (void)setDurationPicker:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setMinutesLabel:(id)arg1;
- (void)setSecondsLabel:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end