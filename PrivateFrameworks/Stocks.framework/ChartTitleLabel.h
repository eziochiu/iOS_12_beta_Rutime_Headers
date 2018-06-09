/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartTitleLabel : UIView {
    Stock * _deferredStock;
    LabelSequenceView * _leftView;
    LabelSequenceView * _rightView;
    Stock * _stock;
    double  _width;
}

- (void).cxx_destruct;
- (void)_stockWillBeRemoved:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)prepareStringsForDeferredStockIfNeeded;
- (void)prepareStringsWithStock:(id)arg1 width:(double)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelsHidden:(bool)arg1;
- (void)setOpaque:(bool)arg1;

@end
