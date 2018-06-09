/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesDetailItem : EKEventDetailItem <EKEventDetailAttendeeCellDelegate> {
    NSArray * _attendees;
    NSMutableDictionary * _attendeesCells;
    EKEventDetailAttendeesCell * _cell;
    long long  _status;
    UITableViewCell * _titleCell;
}

@property (nonatomic, retain) NSArray *attendees;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attendees;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)eventDetailAttendeeCellWantsRefreshForHeightChange;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)setAttendees:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
