/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMCloudView : UIView {
    UILabel * _bodyLabel;
    <PXCMMCloudViewViewDelegate> * _delegate;
    struct { 
        bool learnMoreTapped; 
    }  _delegateRespondsTo;
    UIImageView * _graphicImageView;
    UIButton * _learnMoreButton;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *bodyLabel;
@property (nonatomic) <PXCMMCloudViewViewDelegate> *delegate;
@property (nonatomic, readonly) UIImageView *graphicImageView;
@property (nonatomic, readonly) UIButton *learnMoreButton;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_setupSubviews;
- (void)_updateFontAndStyle;
- (id)bodyLabel;
- (id)delegate;
- (id)graphicImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
