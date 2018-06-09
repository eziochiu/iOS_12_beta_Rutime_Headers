/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassValueAddedServiceInfoView : UIView {
    UILabel * _labelView;
    PKPass * _pass;
    UIImageView * _snapshotView;
    PKPassSnapshotter * _snapshotter;
    UILabel * _statusView;
    long long  _style;
}

@property (nonatomic, retain) PKPass *pass;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (double)_baselineDistance;
- (void)_calculateViewMetricsForWidth:(double)arg1 labelSize:(struct CGSize { double x1; double x2; }*)arg2 statusSize:(struct CGSize { double x1; double x2; }*)arg3 baselineAdjustment:(double*)arg4;
- (id)_labelAttributedStringForString:(id)arg1;
- (id)_labelFont;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (id)_statusAttributedStringForStyle:(long long)arg1;
- (id)_statusFont;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (id)pass;
- (void)setPass:(id)arg1;
- (void)setPass:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end
