/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUICardSnippetView : UIView {
    UIView * _cardView;
    <SiriUICardSnippetViewDataSource> * _dataSource;
    <SiriUICardSnippetViewDelegate> * _delegate;
    SiriUISashView * _sashView;
}

@property (nonatomic) <SiriUICardSnippetViewDataSource> *dataSource;
@property (nonatomic) <SiriUICardSnippetViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1;
- (id)accessibilityIdentifier;
- (id)dataSource;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setCardView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
