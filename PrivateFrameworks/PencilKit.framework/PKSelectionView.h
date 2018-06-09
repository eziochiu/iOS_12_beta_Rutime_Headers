/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKSelectionView : UIView <UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer * _dragGR;
    UIDragInteraction * _dragInteraction;
    UITapGestureRecognizer * _editMenuGR;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPosition;
    bool  _isClearingSelection;
    bool  _isDragging;
    CAShapeLayer * _lassoLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetInTouchView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalStrokePosition;
    UIDragPreview * _previewProvider;
    PKSelectionController * _selectionController;
    PKStrokeSelection * _strokeSelection;
    UIImage * _strokeSelectionImage;
    UIImageView * _strokeSelectionImageView;
    bool  _wantsDragPlatter;
    CAShapeLayer * _whiteLassoLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILongPressGestureRecognizer *dragGR;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDragging;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offsetInTouchView;
@property (nonatomic, retain) PKStrokeSelection *strokeSelection;
@property (nonatomic, retain) UIImage *strokeSelectionImage;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDragPlatter;

- (void).cxx_destruct;
- (void)_addShadowToStroke;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_dragWillBegin;
- (void)animateViewToOriginalPosition;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)dragGR;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragSelection:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeSelection:(id)arg2 selectionController:(id)arg3;
- (bool)isDragging;
- (bool)lassoContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })offsetInTouchView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGColor { }*)selectionColor;
- (void)setStrokeSelection:(id)arg1;
- (void)setStrokeSelectionImage:(id)arg1;
- (void)setWantsDragPlatter:(bool)arg1;
- (void)setupAnimatedLasso;
- (id)strokeSelection;
- (id)strokeSelectionImage;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)toggleEditMenu;
- (void)updateLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)wantsDragPlatter;
- (void)willMoveToWindow:(id)arg1;

@end
