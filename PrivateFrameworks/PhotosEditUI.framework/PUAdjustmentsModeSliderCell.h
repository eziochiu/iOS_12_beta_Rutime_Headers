/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsModeSliderCell : UICollectionViewCell <PUPhotoEditLayoutStaticAdaptable> {
    PUAdjustmentsMode * _adjustmentsMode;
    bool  _enabled;
    long long  _layoutOrientation;
    PUPhotoEditLevelSlider * _levelSlider;
    NSArray * _levelSliderConstraints;
    double  _sliderShortSideLength;
    NSString * _title;
    PUAdjustmentsModeBadge * _titleBackground;
    NSArray * _titleBackgroundConstraints;
    UILabel * _titleLabel;
    NSArray * _titleLabelConstraints;
    long long  _titleLabelPosition;
    bool  _toggleable;
}

@property (nonatomic, retain) PUAdjustmentsMode *adjustmentsMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, retain) PUPhotoEditLevelSlider *levelSlider;
@property (nonatomic) double sliderShortSideLength;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long titleLabelPosition;
@property (getter=isToggleable, nonatomic) bool toggleable;

+ (double)sliderTopMarginVerticalForTitleLabelPosition:(long long)arg1;

- (void).cxx_destruct;
- (void)_updateTitleViews;
- (id)adjustmentsMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isToggleable;
- (long long)layoutOrientation;
- (id)levelSlider;
- (void)setAdjustmentsMode:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLevelSlider:(id)arg1;
- (void)setSliderShortSideLength:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabelPosition:(long long)arg1;
- (void)setToggleable:(bool)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (double)sliderShortSideLength;
- (id)title;
- (long long)titleLabelPosition;
- (void)updateConstraints;

@end
