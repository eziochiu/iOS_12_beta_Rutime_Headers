/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagsLineView : UIView {
    <DOCTagViewDelegate> * _delegate;
    DOCTagIconView * _dot1View;
    DOCTagIconView * _dot2View;
    DOCTagIconView * _dot3View;
    UIStackView * _dotsView;
    UIStackView * _stackView;
    DOCTagView * _tag1View;
    DOCTagView * _tag2View;
    DOCVisualEffectLabel * _tagSummaryLabel;
    NSArray * _tagWidthConstraints;
    NSArray * _tags;
}

@property (nonatomic) <DOCTagViewDelegate> *delegate;
@property (nonatomic, readonly) DOCTagIconView *dot1View;
@property (nonatomic, readonly) DOCTagIconView *dot2View;
@property (nonatomic, readonly) DOCTagIconView *dot3View;
@property (nonatomic, readonly) UIStackView *dotsView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) DOCTagView *tag1View;
@property (nonatomic, readonly) DOCTagView *tag2View;
@property (nonatomic, readonly) DOCVisualEffectLabel *tagSummaryLabel;
@property (nonatomic, readonly) NSArray *tagWidthConstraints;
@property (nonatomic, retain) NSArray *tags;

- (void).cxx_destruct;
- (void)configureDotView:(id)arg1 withTag:(id)arg2;
- (void)configureDotsView:(id)arg1 withTags:(id)arg2;
- (void)configureTagLabel:(id)arg1 withTag:(id)arg2 tagCount:(unsigned long long)arg3;
- (void)configureTagView:(id)arg1 withTag:(id)arg2;
- (id)createDotView;
- (id)createTagSummaryLabel;
- (id)createTagView;
- (id)delegate;
- (id)dot1View;
- (id)dot2View;
- (id)dot3View;
- (id)dotsView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutTags;
- (double)maxTagWidth;
- (void)setDelegate:(id)arg1;
- (void)setTags:(id)arg1;
- (id)stackView;
- (id)tag1View;
- (id)tag2View;
- (id)tagSummaryLabel;
- (id)tagWidthConstraints;
- (id)tags;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMaxTagWidth;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)widthConstraintForDotView:(id)arg1;

@end
