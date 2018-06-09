/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
    CALayer * _bottomGrabber;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsInPDFSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentTrackingRect;
    struct CGColor { } * _grabberColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialSelectionPointOnPage;
    CALayer * _leftGrabber;
    UIPDFPageView * _pageView;
    CALayer * _rightGrabber;
    CALayer * _selectedGrabber;
    CALayer * _topGrabber;
    bool  _tracking;
    CAShapeLayer * _trackingBorder;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentSelectionPointOnPage;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } initialSelectionPointOnPage;
@property (nonatomic) UIPDFPageView *pageView;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })currentSelectionPointOnPage;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)endTracking;
- (void)hide;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1 fixedPoint:(struct CGPoint { double x1; double x2; }*)arg2 preceeds:(bool*)arg3;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialSelectionPointOnPage;
- (void)layout;
- (id)pageView;
- (void)remove;
- (struct CGPoint { double x1; double x2; })selectedPointFor:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundsInEffectsSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectangle;
- (void)setPageView:(id)arg1;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (void)setSelectedGrabberPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelection:(id)arg1;
- (void)track:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })viewOffset;

@end
