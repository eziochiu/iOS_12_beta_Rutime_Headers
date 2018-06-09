/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDynamicCaretInput : UIView {
    TIHandwritingStrokes * _accumulatedStrokes;
    struct CGContext { } * _bitmapContext;
    UIDelayedAction * _committedAction;
    _UIDynamicCaretDot * _dotView;
    long long  _fadeCount;
    NSTimer * _fadeTimer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inkedAreaOfBitmapContext;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastViewLoc;
}

@property (nonatomic, retain) TIHandwritingStrokes *accumulatedStrokes;
@property (nonatomic, retain) UIDelayedAction *committedAction;
@property (nonatomic, retain) _UIDynamicCaretDot *dotView;
@property (nonatomic, retain) NSTimer *fadeTimer;
@property (nonatomic, readonly) bool hasInk;
@property (nonatomic, readonly) bool isInking;

- (void).cxx_destruct;
- (void)_fadeInk;
- (id)accumulatedStrokes;
- (void)addInkPoint:(struct CGPoint { double x1; double x2; })arg1 fromLastPoint:(bool)arg2;
- (void)addTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clearAndNotify:(bool)arg1;
- (void)clearFadeTimer;
- (id)committedAction;
- (void)committedStrokes;
- (void)dealloc;
- (id)dotView;
- (void)drawPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)fadeTimer;
- (bool)hasInk;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)inkWidth;
- (bool)isInking;
- (void)log;
- (void)send;
- (void)setAccumulatedStrokes:(id)arg1;
- (void)setCommittedAction:(id)arg1;
- (void)setDotView:(id)arg1;
- (void)setFadeTimer:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
