/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardActionsView : UIView <CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _actionCategories;
    NSArray * _actions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _actionsImageFrame;
    CNQuickActionsManager * _actionsManager;
    bool  _actionsReversed;
    bool  _bypassActionValidation;
    NSArray * _contacts;
    <CNAvatarCardActionsViewDelegate> * _delegate;
    bool  _dismissesBeforePerforming;
    bool  _expanded;
    NSIndexPath * _highlightedIndexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    UISelectionFeedbackGenerator * _retargetBehavior;
    UIGestureRecognizer * _rolloverGestureRecognizer;
    UIGestureRecognizer * _selectionGestureRecognizer;
    CNAvatarCardActionsTableView * _tableView;
}

@property (nonatomic, copy) NSArray *actionCategories;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } actionsImageFrame;
@property (nonatomic, retain) CNQuickActionsManager *actionsManager;
@property (nonatomic) bool actionsReversed;
@property (nonatomic) bool bypassActionValidation;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarCardActionsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissesBeforePerforming;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *highlightedIndexPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (getter=isPerformingAction, nonatomic, readonly) bool performingAction;
@property (nonatomic, retain) UISelectionFeedbackGenerator *retargetBehavior;
@property (nonatomic, retain) UIGestureRecognizer *rolloverGestureRecognizer;
@property (nonatomic, retain) UIGestureRecognizer *selectionGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNAvatarCardActionsTableView *tableView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_actionAtIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1 forAction:(id)arg2;
- (void)_dismissCardAnimated:(bool)arg1;
- (id)_effectiveManagerActions;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_indexPathForGestureRecognizer:(id)arg1;
- (void)_performActionAtIndexPath:(id)arg1;
- (void)_setHighlightedIndexPath:(id)arg1 isChange:(bool)arg2;
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_updateActionsWithBlock:(id /* block */)arg1;
- (void)_updateAllSeparators;
- (void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2;
- (void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(long long)arg3 toNewActionIndex:(long long)arg4 invertedAnimation:(bool)arg5;
- (void)_updateWithActions:(id)arg1 withBlock:(id /* block */)arg2;
- (id)actionCategories;
- (id)actions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actionsImageFrame;
- (id)actionsManager;
- (id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (bool)actionsReversed;
- (bool)bypassActionValidation;
- (id)contacts;
- (id)delegate;
- (bool)dismissesBeforePerforming;
- (bool)expanded;
- (id)highlightedIndexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (bool)isPerformingAction;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)performHighlightedAction;
- (void)refreshActions;
- (void)reloadData;
- (void)reloadDataWithBlock:(id /* block */)arg1;
- (void)reset;
- (void)resetWithBlock:(id /* block */)arg1;
- (id)retargetBehavior;
- (id)rolloverGestureRecognizer;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectionGestureRecognizer;
- (void)setActionCategories:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setActionsImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActionsManager:(id)arg1;
- (void)setActionsReversed:(bool)arg1;
- (void)setBypassActionValidation:(bool)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissesBeforePerforming:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setHighlightedIndexPath:(id)arg1;
- (void)setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRetargetBehavior:(id)arg1;
- (void)setRolloverGestureRecognizer:(id)arg1;
- (void)setSelectionGestureRecognizer:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateRollover:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end