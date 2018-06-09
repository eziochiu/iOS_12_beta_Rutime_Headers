/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {
    EKCalendarChooser * _chooser;
    unsigned long long  _entityType;
    bool  _limitToSource;
    EKCalendar * _selectedCalendar;
    EKEventStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitToSource;
@property (nonatomic, retain) EKCalendar *selectedCalendar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 store:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 store:(id)arg2 styleProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4;
- (bool)limitToSource;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)selectedCalendar;
- (void)setLimitToSource:(bool)arg1;
- (void)setSelectedCalendar:(id)arg1;

@end