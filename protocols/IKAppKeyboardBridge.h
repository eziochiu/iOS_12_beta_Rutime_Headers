/* made by EzioChiu.
 */

@protocol IKAppKeyboardBridge <NSObject>

@required

- (NSString *)jsSource;
- (NSString *)jsText;
- (void)setJSSource:(NSString *)arg1;
- (void)setJSText:(NSString *)arg1;

@end
