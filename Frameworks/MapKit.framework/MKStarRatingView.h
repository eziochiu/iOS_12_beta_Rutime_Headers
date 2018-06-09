/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarRatingView : UIView {
    UIImage * _emptyStarHighlightedImage;
    UIImage * _emptyStarImage;
    UIImage * _fullStarHighlightedImage;
    UIImage * _fullStarImage;
    UIImage * _halfStarHighlightedImage;
    UIImage * _halfStarImage;
    bool  _highlighted;
    long long  _numLevels;
    long long  _numReviews;
    double  _padding;
    double  _rating;
    NSMutableArray * _ratingViews;
    long long  _starStyle;
}

@property (nonatomic, retain) UIImage *emptyStarHighlightedImage;
@property (nonatomic, retain) UIImage *emptyStarImage;
@property (nonatomic, retain) UIImage *fullStarHighlightedImage;
@property (nonatomic, retain) UIImage *fullStarImage;
@property (nonatomic, retain) UIImage *halfStarHighlightedImage;
@property (nonatomic, retain) UIImage *halfStarImage;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) long long numberOfRatingLevels;
@property (nonatomic) double rating;
@property (nonatomic) long long starStyle;

+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3;
+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3 theme:(id)arg4;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_layoutStarViewsCreatingIfNeeded:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)didMoveToWindow;
- (id)emptyStarHighlightedImage;
- (id)emptyStarImage;
- (id)fullStarHighlightedImage;
- (id)fullStarImage;
- (id)halfStarHighlightedImage;
- (id)halfStarImage;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (long long)numberOfRatingLevels;
- (double)rating;
- (void)setEmptyStarHighlightedImage:(id)arg1;
- (void)setEmptyStarImage:(id)arg1;
- (void)setFullStarHighlightedImage:(id)arg1;
- (void)setFullStarImage:(id)arg1;
- (void)setHalfStarHighlightedImage:(id)arg1;
- (void)setHalfStarImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNumberOfRatingLevels:(long long)arg1;
- (void)setPadding:(double)arg1;
- (void)setRating:(double)arg1;
- (void)setStarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)starStyle;
- (double)verticalAlignmentCenterPercentage;

@end
