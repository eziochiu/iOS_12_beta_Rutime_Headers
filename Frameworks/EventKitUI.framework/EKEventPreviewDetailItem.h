/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventPreviewDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    EKDayPreviewController * _containedDayViewController;
    EKEvent * _eventCopy;
    bool  _inlineDayViewRespectsSelectedCalendarsFilter;
    NSDate * _proposedTime;
    bool  _showsInlineDayView;
}

@property (nonatomic) bool inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic, retain) NSDate *proposedTime;
@property (nonatomic) bool showsInlineDayView;

- (void).cxx_destruct;
- (id)_dayPreviewViewController;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (id)proposedTime;
- (void)reset;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setProposedTime:(id)arg1;
- (void)setShowsInlineDayView:(bool)arg1;
- (bool)showsInlineDayView;

@end
