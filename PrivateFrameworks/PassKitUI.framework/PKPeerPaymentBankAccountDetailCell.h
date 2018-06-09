/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell {
    double  _minimumTextLabelWidth;
    bool  _shouldDrawFullWidthSeperator;
    bool  _shouldDrawSeperator;
}

@property (nonatomic) double minimumTextLabelWidth;
@property (nonatomic) bool shouldDrawFullWidthSeperator;
@property (nonatomic) bool shouldDrawSeperator;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)minimumTextLabelWidth;
- (void)setMinimumTextLabelWidth:(double)arg1;
- (void)setShouldDrawFullWidthSeperator:(bool)arg1;
- (void)setShouldDrawSeperator:(bool)arg1;
- (bool)shouldDrawFullWidthSeperator;
- (bool)shouldDrawSeperator;

@end
