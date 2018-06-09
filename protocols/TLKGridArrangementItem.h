/* made by EzioChiu.
 */

@protocol TLKGridArrangementItem <NUIArrangementItem, TLKGridFrame>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)horizontalCompressionResistance;
- (double)horizontalHuggingPriority;
- (unsigned long long)row;
- (void)setColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalCompressionResistance:(double)arg1;
- (void)setHorizontalHuggingPriority:(double)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSizeCache:(NUISizeCache *)arg1;
- (NUISizeCache *)sizeCache;
- (struct CGSize { double x1; double x2; })sizeForTargetSize:(struct CGSize { double x1; double x2; })arg1;

@end
