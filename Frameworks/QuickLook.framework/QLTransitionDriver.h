/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLTransitionDriver : NSObject {
    UIView * _destinationView;
    double  _duration;
    <QLDismissGestureTracking> * _gestureTracker;
    double  _hostNavigationOffset;
    bool  _presenting;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewFrame;
    double  _topNavigationOffset;
    UIView * _transitionContainer;
    bool  _transitionContainerMasksToBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _transitionContainerOriginalFrame;
    QLItem * _transitionPreviewItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _transitionPreviewSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _uncroppedFrame;
}

@property (retain) UIView *destinationView;
@property double duration;
@property (retain) <QLDismissGestureTracking> *gestureTracker;
@property double hostNavigationOffset;
@property bool presenting;
@property (retain) UIView *sourceView;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewFrame;
@property double topNavigationOffset;
@property (retain) UIView *transitionContainer;
@property bool transitionContainerMasksToBounds;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionContainerOriginalFrame;
@property (retain) QLItem *transitionPreviewItem;
@property struct CGSize { double x1; double x2; } transitionPreviewSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } uncroppedFrame;

- (void).cxx_destruct;
- (void)animateFinishTransition;
- (void)animateTransition;
- (id)destinationView;
- (double)duration;
- (id)gestureTracker;
- (double)hostNavigationOffset;
- (bool)presenting;
- (void)setDestinationView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setGestureTracker:(id)arg1;
- (void)setHostNavigationOffset:(double)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopNavigationOffset:(double)arg1;
- (void)setTransitionContainer:(id)arg1;
- (void)setTransitionContainerMasksToBounds:(bool)arg1;
- (void)setTransitionContainerOriginalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionPreviewItem:(id)arg1;
- (void)setTransitionPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUncroppedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewFrame;
- (void)tearDown;
- (double)topNavigationOffset;
- (id)transitionContainer;
- (bool)transitionContainerMasksToBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContainerOriginalFrame;
- (id)transitionPreviewItem;
- (struct CGSize { double x1; double x2; })transitionPreviewSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedFrame;

@end