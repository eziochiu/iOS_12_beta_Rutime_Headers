/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventEditViewController : UINavigationController {
    bool  _completedWithAction;
    <EKEventEditViewDelegate> * _editViewDelegate;
    EKEventEditor * _editor;
    EKEvent * _event;
    NSString * _eventId;
    EKEventStore * _store;
    EKEventEditViewController * _strongSelf;
    NSString * _suggestionKey;
    int  _transitionForModalViewPresentation;
}

@property (nonatomic) bool canHideDoneAndCancelButtons;
@property (nonatomic) <EKEventEditViewDelegate> *editViewDelegate;
@property (nonatomic, retain) EKEventEditor *editor;
@property (nonatomic, retain) UIColor *editorBackgroundColor;
@property (nonatomic) double editorNavBarLeftContentInset;
@property (nonatomic) double editorNavBarRightContentInset;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic) bool scrollToNotes;
@property (nonatomic) bool showAttachments;
@property (nonatomic, retain) EKEventEditViewController *strongSelf;
@property (nonatomic, retain) NSString *suggestionKey;
@property (nonatomic) bool timeImplicitlySet;
@property (nonatomic) int transitionForModalViewPresentation;

+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (id)_eventEditorForTestingOnly;
- (void)_storeChanged:(id)arg1;
- (bool)canHideDoneAndCancelButtons;
- (void)cancelEditing;
- (void)completeAndSave;
- (void)dealloc;
- (id)editViewDelegate;
- (id)editor;
- (void)editor:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (id)editorBackgroundColor;
- (double)editorNavBarLeftContentInset;
- (double)editorNavBarRightContentInset;
- (id)event;
- (id)eventStore;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)handleTapOutside;
- (bool)hasUnsavedChanges;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)refreshStartAndEndDates;
- (bool)saveWithSpan:(long long)arg1 animated:(bool)arg2;
- (bool)scrollToNotes;
- (void)setCanHideDoneAndCancelButtons:(bool)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEditorNavBarLeftContentInset:(double)arg1;
- (void)setEditorNavBarRightContentInset:(double)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setScrollToNotes:(bool)arg1;
- (void)setShowAttachments:(bool)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setSuggestionKey:(id)arg1;
- (void)setTimeImplicitlySet:(bool)arg1;
- (void)setTransitionForModalViewPresentation:(int)arg1;
- (bool)shouldAutorotate;
- (bool)showAttachments;
- (id)strongSelf;
- (id)suggestionKey;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)timeImplicitlySet;
- (int)transitionForModalViewPresentation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)willPresentDialogOnSave;

@end
