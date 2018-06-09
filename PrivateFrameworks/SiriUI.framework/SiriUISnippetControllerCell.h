/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {
    SiriUIKeyline * _bottomKeyline;
    UILabel * _cancelledLabel;
    UIView * _cancelledTouchPreventionView;
    bool  _cellIsUsingPlatterStyle;
    UIView * _clippingContainerView;
    UICollectionReusableView<SiriUIReusableView> * _footerView;
    UICollectionReusableView<SiriUIReusableView> * _headerView;
    UIView * _snippetBackgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _snippetEdgeInsets;
    SiriUIContentButton * _snippetPunchOutButton;
    SiriUISnippetViewController * _snippetViewController;
    double  _topPadding;
    UICollectionReusableView<SiriUIReusableView> * _transparentFooterView;
    UICollectionReusableView<SiriUIReusableView> * _transparentHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } snippetEdgeInsets;
@property (nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureSubviewsForCurrentInset;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (double)_heightForTransparentFooterView;
- (double)_heightForTransparentHeaderView;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (void)_setSnippetEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_snippetEdgeInsets;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (id)accessibilityIdentifier;
- (void)animateSnippetCancellationWithCompletion:(id /* block */)arg1;
- (void)animateSnippetConfirmationWithCompletion:(id /* block */)arg1;
- (void)animateSnippetResizeToSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShowBackgroundView:(bool)arg1;
- (void)setSnippetViewController:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (id)snippetViewController;

@end
