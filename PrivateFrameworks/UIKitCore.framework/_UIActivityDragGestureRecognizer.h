/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollViewScrollObserver> {
    UIAutoscroll * _autoscroll;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _draggingInsets;
    UIScrollView * _targetScrollView;
}

@property (nonatomic, retain) UIAutoscroll *autoscroll;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } draggingInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIScrollView *targetScrollView;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (id)autoscroll;
- (int)autoscrollDirectionsForPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)autoscrollWillNotStart;
- (void)beginAutoscrollAndUpdateDirectionIfNeeded;
- (void)cancelAutoscroll;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })draggingInsets;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setAutoscroll:(id)arg1;
- (void)setDraggingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setState:(long long)arg1;
- (void)setTargetScrollView:(id)arg1;
- (id)targetScrollView;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateAutoscroll:(id)arg1;

@end
