/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarAccountTableViewController : UITableViewController {
    EKCalendar * _calendar;
    NSString * _currentSourceIdentifier;
    EKEventStore * _eventStore;
}

@property (readonly) NSMutableArray *accounts;
@property EKCalendar *calendar;
@property (retain) NSString *currentSourceIdentifier;
@property EKEventStore *eventStore;

- (void).cxx_destruct;
- (id)accounts;
- (id)calendar;
- (id)currentSourceIdentifier;
- (id)eventStore;
- (id)initWithCalendar:(id)arg1 andStore:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCurrentSourceIdentifier:(id)arg1;
- (void)setEventStore:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
