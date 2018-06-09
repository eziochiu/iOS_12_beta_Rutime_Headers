/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPageNumberView : UIView {
    UILabel * _backgroundLabel;
    NSNumberFormatter * _indexFormatter;
    UILabel * _label;
    long long  _pageCount;
    long long  _pageNumber;
}

@property long long pageCount;
@property long long pageNumber;

- (void).cxx_destruct;
- (struct CGPath { }*)_copyMutablePathForRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 inverted:(bool)arg3;
- (id)_indexFormatter;
- (void)_updateString;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)pageCount;
- (long long)pageNumber;
- (void)setPageCount:(long long)arg1;
- (void)setPageNumber:(long long)arg1;
- (void)sizeToFit;

@end