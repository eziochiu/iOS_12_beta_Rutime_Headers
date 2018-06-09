/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    HUGridCellBackgroundDisplayOptions * _backgroundDisplayOptions;
    double  _cellCornerRadius;
    double  _cellInnerMargin;
    double  _cellScaleFactor;
    long long  _cellSizeSubclass;
    unsigned long long  _contentColorStyle;
    UIFont * _font;
    double  _iconSize;
    double  _secondaryContentDimmingFactor;
    UIVisualEffect * _secondaryVibrancyEffect;
    UIVisualEffect * _vibrancyEffect;
}

@property (nonatomic, copy) HUGridCellBackgroundDisplayOptions *backgroundDisplayOptions;
@property (nonatomic) double cellCornerRadius;
@property (nonatomic) double cellInnerMargin;
@property (nonatomic) double cellScaleFactor;
@property (nonatomic, readonly) long long cellSizeSubclass;
@property (nonatomic) unsigned long long contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) double iconSize;
@property (nonatomic) double secondaryContentDimmingFactor;
@property (nonatomic, retain) UIVisualEffect *secondaryVibrancyEffect;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIVisualEffect *vibrancyEffect;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (void).cxx_destruct;
- (id)backgroundDisplayOptions;
- (double)cellCornerRadius;
- (double)cellInnerMargin;
- (double)cellScaleFactor;
- (long long)cellSizeSubclass;
- (unsigned long long)contentColorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (double)iconSize;
- (id)initWithCellSizeSubclass:(long long)arg1;
- (double)secondaryContentDimmingFactor;
- (id)secondaryVibrancyEffect;
- (void)setBackgroundDisplayOptions:(id)arg1;
- (void)setCellCornerRadius:(double)arg1;
- (void)setCellInnerMargin:(double)arg1;
- (void)setCellScaleFactor:(double)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (void)setIconSize:(double)arg1;
- (void)setSecondaryContentDimmingFactor:(double)arg1;
- (void)setSecondaryVibrancyEffect:(id)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (id)vibrancyEffect;

@end
