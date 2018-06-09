/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKKeyValueView : TLKView <NUIContainerStackViewDelegate> {
    TLKStackView * _containerView;
    TLKImage * _image;
    TLKImageView * _imageView;
    bool  _isInMeasurementPass;
    TLKKeyValueGridView * _leadingGrid;
    NSArray * _leadingTuples;
    TLKKeyValueGridView * _trailingGrid;
    NSArray * _trailingTuples;
}

@property (retain) TLKStackView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *image;
@property (retain) TLKImageView *imageView;
@property bool isInMeasurementPass;
@property (retain) TLKKeyValueGridView *leadingGrid;
@property (nonatomic, retain) NSArray *leadingTuples;
@property (readonly) Class superclass;
@property (retain) TLKKeyValueGridView *trailingGrid;
@property (nonatomic, retain) NSArray *trailingTuples;

+ (unsigned long long)visibleRowsInGrid:(id)arg1;

- (void).cxx_destruct;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (long long)currentStackViewDistribution;
- (id)image;
- (id)imageView;
- (id)init;
- (bool)isInMeasurementPass;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (id)leadingGrid;
- (bool)leadingGridIsHidden;
- (id)leadingTextKeyLabels;
- (id)leadingTuples;
- (unsigned long long)numberOfVisibleRowsForLeadingGrid;
- (unsigned long long)numberOfVisibleRowsForTrailingGrid;
- (void)observedPropertiesChanged;
- (void)setContainerView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsInMeasurementPass:(bool)arg1;
- (void)setLeadingGrid:(id)arg1;
- (void)setLeadingTuples:(id)arg1;
- (void)setTrailingGrid:(id)arg1;
- (void)setTrailingTuples:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)trailingGrid;
- (bool)trailingGridIsHidden;
- (id)trailingTuples;

@end
