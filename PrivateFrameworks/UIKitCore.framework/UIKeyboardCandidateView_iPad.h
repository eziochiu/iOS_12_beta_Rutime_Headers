/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {
    UIKBInputBackdropView * _backdropView;
    double  _extendedViewHeight;
    UIKeyboardCandidatePageControl * _pageControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)defaultExtendedControlHeight;
+ (double)extendedHeight;

- (void).cxx_destruct;
- (double)_additionalClipHeight;
- (int)_clipCornersOfView:(id)arg1;
- (unsigned long long)_numberOfColumns:(bool)arg1;
- (void)candidateBarDidScroll:(id)arg1;
- (void)dealloc;
- (void)didEndSplitTransition;
- (double)extendedViewHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)rightButtonYOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCandidateViewExtended:(bool)arg1;
- (bool)shouldUseKeyboardBackground:(id)arg1;
- (void)updatePageControlStatus;

@end