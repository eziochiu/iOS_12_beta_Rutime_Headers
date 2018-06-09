/* made by EzioChiu.
 */

@protocol UITextGestureClusterLoupeMode <NSObject>

@required

+ (void)adjustLoupeGesture:(UILongPressGestureRecognizer *)arg1 forCluster:(UITextGestureCluster *)arg2;
+ (bool)checkForView:(UIView *)arg1;
+ (Class)loupeGestureClass;

@end
