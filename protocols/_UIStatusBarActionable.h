/* made by EzioChiu.
 */

@protocol _UIStatusBarActionable <NSObject>

@required

- (_UIStatusBarAction *)action;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionInsets;
- (<UILayoutItem> *)layoutItem;
- (void)setAction:(_UIStatusBarAction *)arg1;
- (void)setActionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
