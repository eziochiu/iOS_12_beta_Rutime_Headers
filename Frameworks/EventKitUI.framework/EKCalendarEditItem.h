/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarEditItem : NSObject {
    EKCalendar * _calendar;
    <EKCalendarEditItemDelegate> * _delegate;
    EKEventStore * _store;
    <EKStyleProvider> * _styleProvider;
}

@property (nonatomic, readonly) EKCalendar *calendar;
@property (nonatomic) <EKCalendarEditItemDelegate> *delegate;
@property (nonatomic, retain) <EKStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)applyStyleProviderToCell:(id)arg1;
- (bool)becomeFirstResponder;
- (id)calendar;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)delegate;
- (double)footerHeightForSection;
- (id)footerViewForSection;
- (id)headerTitle;
- (void)layoutForWidth:(double)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
