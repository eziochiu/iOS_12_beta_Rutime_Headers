/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenImageView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    unsigned long long  _activeGestureCount;
    UIActivityIndicatorView * _activityIndicator;
    SXImageView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentViewFrame;
    double  _currentScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTranslation;
    <SXFullscreenImageViewDelegate> * _delegate;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    bool  _isZooming;
    UIScrollView * _scrollView;
    unsigned long long  _viewIndex;
}

@property (nonatomic) unsigned long long activeGestureCount;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) SXImageView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentViewFrame;
@property (nonatomic) double currentScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } currentTranslation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXFullscreenImageViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isZooming;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long viewIndex;

- (void).cxx_destruct;
- (unsigned long long)activeGestureCount;
- (id)activityIndicator;
- (bool)allowsDismissal;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentViewFrame;
- (double)currentScale;
- (struct CGPoint { double x1; double x2; })currentTranslation;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (void)handleDoubleTap:(id)arg1;
- (id)initWithContentView:(id)arg1 viewIndex:(unsigned long long)arg2;
- (bool)isZooming;
- (void)layoutSubviews;
- (id)scrollView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setActiveGestureCount:(unsigned long long)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentScale:(double)arg1;
- (void)setCurrentTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (void)setIsZooming:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setup;
- (void)setupGestures;
- (void)showLoadingIndicator:(bool)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (unsigned long long)viewIndex;

@end
