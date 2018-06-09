/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMTranscriptBubbleFooterView : UIView {
    UIImageView * _chevronImageView;
    PXViewLayoutHelper * _layoutHelper;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
}

@property (nonatomic) bool chevronIsHidden;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;

+ (double)_primaryToSecondaryBaselineSpacing;
+ (double)_secondaryBaselineToBottomSpacing;
+ (double)_topToPrimaryBaselineSpacing;
+ (double)desiredHeight;

- (void).cxx_destruct;
- (bool)chevronIsHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryText;
- (id)secondaryText;
- (void)setChevronIsHidden:(bool)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;

@end
