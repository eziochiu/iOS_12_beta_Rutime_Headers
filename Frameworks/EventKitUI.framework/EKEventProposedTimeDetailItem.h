/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {
    NSArray * _attendeesWithProposedTimes;
    NSMutableDictionary * _cellForAttendee;
}

- (void).cxx_destruct;
- (void)_updateCellsIfNeededForWidth:(double)arg1;
- (id)attendeeForIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)setCellPosition:(int)arg1;

@end
