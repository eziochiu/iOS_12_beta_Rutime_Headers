/* made by EzioChiu.
 */

@protocol SXComponentActionHandler <NSObject>

@required

- (void)handleAction:(SXAction *)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 invocationType:(unsigned long long)arg4;

@end
