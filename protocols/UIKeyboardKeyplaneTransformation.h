/* made by EzioChiu.
 */

@protocol UIKeyboardKeyplaneTransformation <NSObject>

@required

+ (UIKBTree *)transformKeyplane:(UIKBTree *)arg1 withTransformationContext:(UIKeyboardKeyplaneTransformationContext *)arg2;
+ (NSString *)transformationIdentifier;

@end
