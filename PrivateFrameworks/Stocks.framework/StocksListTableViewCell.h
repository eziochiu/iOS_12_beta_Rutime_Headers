/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksListTableViewCell : UITableViewCell {
    UILabel * _boxLabel;
    StocksListBoxView * _boxView;
    UIImageView * _changeSignView;
    UILabel * _priceLabel;
    long long  _rowDataType;
    UIView * _rowSeparatorView;
    bool  _shouldStackView;
    Stock * _stock;
    UILabel * _symbolLabel;
}

@property (nonatomic) long long rowDataType;
@property (nonatomic) bool shouldStackView;
@property (nonatomic, retain) Stock *stock;

+ (double)cellHeightForStackStatus:(bool)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })changeButtonRect;
- (id)changeSignNegative:(bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (long long)rowDataType;
- (void)setBoxContentsAlpha:(double)arg1 includeChangeSign:(bool)arg2;
- (void)setBoxValueFromRowDataType;
- (void)setRowDataType:(long long)arg1;
- (void)setShouldStackView:(bool)arg1;
- (void)setShowsRowSeparator:(bool)arg1;
- (void)setStock:(id)arg1;
- (bool)shouldStackView;
- (id)stock;
- (void)updateValues;

@end
