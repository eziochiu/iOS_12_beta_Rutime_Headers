/* made by EzioChiu.
 */

@protocol UICollectionViewTableSectionHeaderFooterAttributes

@required

- (bool)floating;
- (bool)isHeader;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (double)maxTitleWidth;
- (void)setFloating:(bool)arg1;
- (void)setIsHeader:(bool)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxTitleWidth:(double)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;

@end
