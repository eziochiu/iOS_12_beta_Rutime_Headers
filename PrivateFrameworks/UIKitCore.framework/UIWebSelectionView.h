/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebSelectionView : UIView {
    struct { 
        UIWebSelectionHandle *scrollingHandle; 
        double startTime; 
        int direction; 
        NSTimer *timer; 
    }  _autoscrollData;
    UIWebSelectionHandle * _bottom;
    bool  _calloutBarIsHiddenBeforeRotation;
    UIView * _center;
    bool  _creatingSelection;
    UIWebDocumentView * _documentView;
    double  _growThreshold;
    UIWebSelectionHandle * _left;
    int  _nestedLayoutCalls;
    UIWebSelectionOutline * _outline;
    struct { 
        UIWebSelectionHandle *start; 
        UIWebSelectionHandle *end; 
        struct CGSize { 
            double width; 
            double height; 
        } startingOffset; 
        bool anchorAtStart; 
        struct { 
            bool flipPossible; 
            bool rectsChanged; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } originalSelectionRect; 
        } flipData; 
    }  _rangedSelectionData;
    UIWebSelectionHandle * _right;
    bool  _rotating;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionFrame;
    UIWebSelectionGraph * _selectionGraph;
    int  _selectionInFixedPosition;
    UIWebSelectionNode * _selectionNode;
    double  _shrinkThreshold;
    UIWebTextRangeView * _textRangeView;
    UIWebSelectionHandle * _top;
}

@property (nonatomic) bool creatingSelection;
@property (nonatomic, readonly) UIWebSelection *selection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionFrame;
@property (nonatomic, retain) UIWebSelectionNode *selectionNode;

- (void)_didScroll;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (id)activeHandle;
- (bool)activelyManipulatingTextSelectionHandle;
- (void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2;
- (int)autoscrollDirectionsForHandle:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)calloutBar:(id)arg1 selectedCommand:(id)arg2;
- (bool)canFlip;
- (void)clearSelection;
- (void)considerFlipping;
- (bool)creatingSelection;
- (void)dealloc;
- (void)didEndScrollingOrZoomingPage;
- (void)didEndScrollingOverflow;
- (void)endSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fetchSelectionBoundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fetchSelectionBoundingTextSelectionRect;
- (id)handleWithPosition:(int)arg1;
- (id)handles;
- (void)hideControls;
- (void)hideControlsBeforeRotation;
- (void)hideCopyCallout;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWebDocumentView:(id)arg1;
- (bool)isHorizontalWritingMode;
- (void)layoutChangedByScrolling:(bool)arg1;
- (id)nodeInPristineGraphAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)onAfterScrollOrZoomShowingSelection:(bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(bool)arg1;
- (void)removeFromSuperview;
- (void)resetSelection;
- (void)scaleChanged;
- (id)scroller;
- (id)selection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingRect;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionFrame;
- (id)selectionNode;
- (void)setCreatingSelection:(bool)arg1;
- (void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2;
- (void)setSelectionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setSelectionNode:(id)arg1;
- (void)shiftWebRangeSelectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)showControls;
- (void)showControlsAfterRotation;
- (void)showCopyCalloutWithAnimation:(bool)arg1;
- (void)showRangeSelection;
- (void)startSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopAnyAutoscrolling;
- (id)tintView;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)updateAutoscrollForHandle:(id)arg1;
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
- (void)updateFrameAndHandlesWithAnimation:(bool)arg1;
- (bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)updateSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willStartScrollingOrZoomingPage;
- (void)willStartScrollingOverflow;

@end
