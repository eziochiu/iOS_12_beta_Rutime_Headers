/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGuidedPanController : NSObject {
    TSDCanvasLayer * _canvasLayer;
    UIScrollView * _canvasScrollView;
    TSDCanvasView * _canvasView;
    <TSDPanGuide> * _guide;
    TSDInteractiveCanvasController * _interactiveCanvasController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _movement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic) TSDCanvasLayer *canvasLayer;
@property (nonatomic) UIScrollView *canvasScrollView;
@property (nonatomic) TSDCanvasView *canvasView;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; } centerPlusMovementContentPlacement;
@property (nonatomic, retain) <TSDPanGuide> *guide;
@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic) struct CGPoint { double x1; double x2; } movement;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; } touchContentPlacement;
@property (nonatomic) struct CGPoint { double x1; double x2; } velocity;

- (id)canvasLayer;
- (id)canvasScrollView;
- (id)canvasView;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })centerPlusMovementContentPlacement;
- (id)convertContentLocation:(id)arg1 fromPlacement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg2 toPlacement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg3;
- (void)dealloc;
- (id)guide;
- (void)handlePanGesture:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)interactiveCanvasController;
- (struct CGPoint { double x1; double x2; })movement;
- (struct CGPoint { double x1; double x2; })p_boundsOffsetForContentLocation:(id)arg1 placement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg2;
- (id)p_convertContentLocation:(id)arg1 fromPlacement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg2 toPlacement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg3;
- (id)p_currentContentLocationWithPlacement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg1;
- (void)p_didEnd;
- (void)p_scrollToContentLocation:(id)arg1 placement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })p_transformForContentLocation:(id)arg1 placement:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })arg2;
- (void)p_willBegin;
- (void)setCanvasLayer:(id)arg1;
- (void)setCanvasScrollView:(id)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setGuide:(id)arg1;
- (void)setInteractiveCanvasController:(id)arg1;
- (void)setMovement:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; })touchContentPlacement;
- (struct CGPoint { double x1; double x2; })velocity;

@end
