/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate> {
    EKCalendar * _calendar;
    <EKCalendarEditorDelegate> * _delegate;
    NSArray * _editItems;
    unsigned long long  _entityType;
    EKEventStore * _eventStore;
    bool  _isNewCalendar;
    EKCalendarShareesEditItem * _shareesEditItem;
    EKSource * _source;
    <EKStyleProvider> * _styleProvider;
    UITableView * _tableView;
}

@property (nonatomic, retain) EKCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKCalendarEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNewCalendar;
@property (nonatomic) <EKStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteCalendar;
- (void)_deleteClicked:(id)arg1;
- (id)_editItems;
- (void)_eventStoreChanged:(id)arg1;
- (void)_localeChanged;
- (void)_presentValidationAlert:(id)arg1;
- (bool)_shouldShowDeleteButton;
- (id)calendar;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)eventStore;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3;
- (bool)isNewCalendar;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)owningNavigationController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)scrollViewDidScroll:(id)arg1;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setIsNewCalendar:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupForCalendar;
- (id)styleProvider;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
