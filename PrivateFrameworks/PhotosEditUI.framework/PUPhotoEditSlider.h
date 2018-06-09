/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditSlider : UIControl <UIScrollViewDelegate> {
    NSMutableArray * _constraints;
    UIScrollView * _contentScrollView;
    double  _defaultValue;
    long long  _layoutOrientation;
    UIView * _levelIndicatorView;
    double  _maximumValue;
    double  _minimumValue;
    PUPhotoEditPrecisionLevelSlider * _slider;
    double  _value;
}

@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *indicatorColor;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic, retain) UIView *levelIndicatorView;
@property (nonatomic) unsigned long long mainTickMarkInterval;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic, retain) PUPhotoEditPrecisionLevelSlider *slider;
@property (readonly) Class superclass;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)_setNormalizedProgressValue:(double)arg1;
- (void)_setValue:(double)arg1 shouldSendActions:(bool)arg2 shouldUpdateScrollPosition:(bool)arg3;
- (void)_updateScrollViewPosition;
- (id)contentScrollView;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)defaultValue;
- (id)indicatorColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutOrientation:(long long)arg2;
- (long long)layoutOrientation;
- (void)layoutSubviews;
- (id)levelIndicatorView;
- (unsigned long long)mainTickMarkInterval;
- (double)maximumValue;
- (double)minimumValue;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setDefaultValue:(double)arg1;
- (void)setIndicatorColor:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLevelIndicatorView:(id)arg1;
- (void)setMainTickMarkInterval:(unsigned long long)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setSlider:(id)arg1;
- (void)setValue:(double)arg1;
- (id)slider;
- (void)updateConstraints;
- (double)value;

@end
