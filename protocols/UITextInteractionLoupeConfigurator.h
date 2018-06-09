/* made by EzioChiu.
 */

@protocol UITextInteractionLoupeConfigurator <NSObject>

@required

+ (void)adjustLoupeGesture:(UILongPressGestureRecognizer *)arg1 forInteraction:(UITextInteraction *)arg2;
+ (Class)loupeGestureClass;

@end
