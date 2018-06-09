/* made by EzioChiu.
 */

@protocol UICollectionViewTableSeparatorAttributes

@required

- (UIColor *)separatorColor;
- (UIVisualEffect *)separatorEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (bool)separatorInsetIsRelativeToCellEdges;
- (long long)separatorStyle;
- (void)setSeparatorColor:(UIColor *)arg1;
- (void)setSeparatorEffect:(UIVisualEffect *)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorInsetIsRelativeToCellEdges:(bool)arg1;
- (void)setSeparatorStyle:(long long)arg1;

@end
