/* made by EzioChiu.
 */

@protocol TTYCallDelegate <NSObject>

@required

- (void)ttyCall:(TTYCall *)arg1 didReceiveCharacter:(unsigned short)arg2 forUtterance:(NSString *)arg3;

@end
