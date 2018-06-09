/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate> {
    unsigned long long  _actionsState;
    bool  _allowsEditing;
    bool  _allowsImport;
    bool  _allowsInvalidProperties;
    bool  _allowsSubitems;
    bool  _allowsToDos;
    long long  _cancelButtonType;
    UIViewController * _contentViewController;
    EKEventViewController * _currentImport;
    EKEvent * _eventFromUID;
    EKEventStore * _eventStore;
    int  _eventUID;
    bool  _hasCustomCancelButton;
    bool  _importing;
    EKICSPreviewModel * _model;
    <EKICSPreviewControllerDelegate> * _previewDelegate;
}

@property (nonatomic) unsigned long long actionsState;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsImport;
@property (nonatomic) bool allowsInvalidProperties;
@property (nonatomic) bool allowsSubitems;
@property (nonatomic) bool allowsToDos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int eventUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isImporting;
@property (nonatomic) <EKICSPreviewControllerDelegate> *previewDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalEventCount;
@property (nonatomic, readonly) unsigned long long unimportedEventCount;

- (void).cxx_destruct;
- (bool)_anyCalendarsSupportingImport;
- (bool)_calendarSupportsImport:(id)arg1;
- (unsigned long long)_countOfCalendarsSupportingImport;
- (void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_databaseChanged:(id)arg1;
- (id)_defaultCalendarForImport;
- (void)_enumerateSupportedCalendarsUsingBlock:(id /* block */)arg1;
- (bool)_shouldShowCalendarChooser;
- (void)_updateCancelButton;
- (unsigned long long)actionsState;
- (bool)allowsEditing;
- (bool)allowsImport;
- (bool)allowsInvalidProperties;
- (bool)allowsSubitems;
- (bool)allowsToDos;
- (void)calendarChooserDidCancel:(id)arg1;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)dealloc;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(bool)arg2 isUpdate:(bool)arg3;
- (int)eventUID;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (bool)eventViewControllerShouldDismissSelf:(id)arg1;
- (void)handleDidImportEvent:(id)arg1 fromController:(id)arg2 intoCalendar:(id)arg3;
- (void)handleImportEventError;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)importAllIntoCalendar:(id)arg1;
- (void)importAllRequested:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithEventUID:(int)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (bool)isImporting;
- (id)popoverContentController;
- (void)presentCalendarChooserForController:(id)arg1;
- (id)previewDelegate;
- (void)removeCancelButton;
- (void)setActionsState:(unsigned long long)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsImport:(bool)arg1;
- (void)setAllowsInvalidProperties:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setAllowsToDos:(bool)arg1;
- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setPreviewDelegate:(id)arg1;
- (id)singleExistingEventUniqueID;
- (unsigned long long)totalEventCount;
- (unsigned long long)unimportedEventCount;
- (id)viewController;

@end
