/* made by EzioChiu.
 */

@protocol SVControlInteractionFactory <NSObject>

@required

- (SVInteraction *)createInteractionWithControl:(UIControl *)arg1 events:(unsigned long long)arg2;

@end
