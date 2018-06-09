/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, UISelectionInteractionAssistant, _UIKeyboardTextSelectionGestureControllerDelegate> {
    bool  _enabled;
    UILongPressGestureRecognizer * _forcePressGestureRecognizer;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIWebSelectionView * _selectionView;
    UITapAndAHalfRecognizer * _tapAndAHalfGestureRecognizer;
    UITextInteraction * _textInteractions;
    _UIKeyboardTextSelectionController * _textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController * _textSelectionGestureController;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UILongPressGestureRecognizer *forcePressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) UIWebSelection *selection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionFrame;
@property (nonatomic, retain) UIWebSelectionView *selectionView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;
@property (nonatomic, readonly) UIView *view;

- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (void)addSelectionViewIfNeeded;
- (void)clearSelection;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (void)dealloc;
- (void)didEndScrollingOrZoomingPage;
- (void)didEndScrollingOverflow;
- (void)didRotate:(id)arg1;
- (bool)enabled;
- (id)forcePressGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasSelectablePositionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)hideCallout;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (id)initWithView:(id)arg1;
- (void)initializeSelectionView;
- (bool)isSelectionGestureRecognizer:(id)arg1;
- (void)layoutChangedByScrolling:(bool)arg1;
- (id)longPressGestureRecognizer;
- (void)makeWebSelection:(id)arg1;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)resignedFirstResponder;
- (void)scaleChanged;
- (void)scrollSelectionToVisible:(bool)arg1;
- (id)scrollView;
- (id)selection;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionFrame;
- (id)selectionView;
- (void)setEnabled:(bool)arg1;
- (void)setForcePressGestureRecognizer:(id)arg1;
- (void)setGestureRecognizers;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setSelectionView:(id)arg1;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (void)showSelectionCommands;
- (void)tap:(id)arg1;
- (id)taskQueue;
- (id)textSelectionController;
- (void)updateSelectionRects:(bool)arg1;
- (id)view;
- (void)willBeginGesture;
- (void)willRotate:(id)arg1;
- (void)willStartScrollingOrZoomingPage;
- (void)willStartScrollingOverflow;

@end
