/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIFocusedInterfaceActionPressDelegate, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _actionSelectionInitialLocationInContainerView;
    UIScrollView * _actionsScrollView;
    NSArray * _representationViews;
    id  _scrollViewDidEndDeceleratingNotificationToken;
    id  _scrollViewDidEndDraggingNotificationToken;
    id  _scrollViewWillBeginDraggingNotificationToken;
    bool  _selectByPressGestureEnabled;
    _UIInterfaceActionSelectByPressGestureRecognizer * _selectByPressGestureRecognizer;
    bool  _selectionFeedbackEnabled;
    UILongPressGestureRecognizer * _selectionGestureRecognizer;
    UISelectionFeedbackGenerator * _selectionRetargetFeedbackGenerator;
    UIGestureRecognizer * _systemProvidedGestureRecognizer;
    UIView * _trackableContainerView;
    NSMutableSet * _viewsRequiringSelectionGestureDisabling;
    NSPointerArray * _weakCooperatingSelectionTrackingControllers;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } actionSelectionInitialLocationInContainerView;
@property (nonatomic) UIScrollView *actionsScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *representationViews;
@property (nonatomic, retain) id scrollViewDidEndDeceleratingNotificationToken;
@property (nonatomic, retain) id scrollViewDidEndDraggingNotificationToken;
@property (nonatomic, retain) id scrollViewWillBeginDraggingNotificationToken;
@property (nonatomic) bool selectByPressGestureEnabled;
@property (nonatomic, retain) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer;
@property (nonatomic) bool selectionFeedbackEnabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic, retain) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIGestureRecognizer *systemProvidedGestureRecognizer;
@property (nonatomic) UIView *trackableContainerView;
@property (nonatomic, readonly) NSMutableSet *viewsRequiringSelectionGestureDisabling;
@property (nonatomic, retain) NSPointerArray *weakCooperatingSelectionTrackingControllers;

- (void).cxx_destruct;
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_allActionViewsIncludingCooperatingActionViews;
- (id)_allGestureRecognizers;
- (bool)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;
- (void)_clearSystemProvidedGestureRecognizer;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;
- (void)_initializeSelectionGestureRecognizer;
- (id)_interfaceActionOfFocusedRepresentationView;
- (void)_invokeHandlerForInterfaceAction:(id)arg1;
- (bool)_isPresentedAndVisible;
- (void)_noteScrollView:(id)arg1 isUserScrolling:(bool)arg2;
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(id /* block */)arg2;
- (void)_registerForScrollViewNotifications;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (bool)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;
- (void)_unregisterForScrollViewNotifications;
- (struct CGPoint { double x1; double x2; })actionSelectionInitialLocationInContainerView;
- (id)actionsScrollView;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)focusedInterfaceAction;
- (void)handlePressedFocusedInterfaceAction:(id)arg1;
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;
- (id)representationViews;
- (id)scrollViewDidEndDeceleratingNotificationToken;
- (id)scrollViewDidEndDraggingNotificationToken;
- (id)scrollViewWillBeginDraggingNotificationToken;
- (bool)selectByPressGestureEnabled;
- (id)selectByPressGestureRecognizer;
- (bool)selectionFeedbackEnabled;
- (id)selectionGestureRecognizer;
- (id)selectionRetargetFeedbackGenerator;
- (void)setActionsScrollView:(id)arg1;
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;
- (void)setRepresentationViews:(id)arg1;
- (void)setScrollViewDidEndDeceleratingNotificationToken:(id)arg1;
- (void)setScrollViewDidEndDraggingNotificationToken:(id)arg1;
- (void)setScrollViewWillBeginDraggingNotificationToken:(id)arg1;
- (void)setSelectByPressGestureEnabled:(bool)arg1;
- (void)setSelectByPressGestureRecognizer:(id)arg1;
- (void)setSelectionFeedbackEnabled:(bool)arg1;
- (void)setSelectionRetargetFeedbackGenerator:(id)arg1;
- (void)setTrackableContainerView:(id)arg1;
- (void)setWeakCooperatingSelectionTrackingControllers:(id)arg1;
- (id)systemProvidedGestureRecognizer;
- (id)trackableContainerView;
- (id)viewsRequiringSelectionGestureDisabling;
- (id)weakCooperatingSelectionTrackingControllers;

@end
