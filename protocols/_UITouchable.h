/* made by EzioChiu.
 */

@protocol _UITouchable <NSObject>

@required

- (void)touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;

@end
