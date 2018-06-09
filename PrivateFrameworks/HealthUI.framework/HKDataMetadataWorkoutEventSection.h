/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection {
    NSDateComponentsFormatter * _dateFormatter;
    HKWorkoutDurationNumberFormatter * _durationFormatter;
    HKWorkout * _workout;
}

@property (nonatomic, retain) NSDateComponentsFormatter *dateFormatter;
@property (nonatomic, retain) HKWorkoutDurationNumberFormatter *durationFormatter;
@property (nonatomic, retain) HKWorkout *workout;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)dateFormatter;
- (id)durationFormatter;
- (id)initWithSample:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setDateFormatter:(id)arg1;
- (void)setDurationFormatter:(id)arg1;
- (void)setWorkout:(id)arg1;
- (id)workout;

@end
