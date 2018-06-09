/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupProductCell : PKTableViewCell {
    bool  _drawsTopSeperator;
    PKPaymentSetupProduct * _product;
    double  _textLabelOffset;
}

@property (nonatomic) bool drawsTopSeperator;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (nonatomic) double textLabelOffset;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateDisplay;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsTopSeperator;
- (id)init;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)product;
- (void)setDrawsTopSeperator:(bool)arg1;
- (void)setProduct:(id)arg1;
- (void)setTextLabelOffset:(double)arg1;
- (double)textLabelOffset;

@end
