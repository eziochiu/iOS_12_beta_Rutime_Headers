/* made by EzioChiu.
 */

@protocol CARSessionCommandDelegate <NSObject>

@required

- (void)sendCommand:(NSString *)arg1 withParameters:(NSDictionary *)arg2;

@end
