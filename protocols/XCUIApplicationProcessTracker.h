/* made by EzioChiu.
 */

@protocol XCUIApplicationProcessTracker <NSObject>

@required

- (XCUIApplicationProcess *)applicationProcessWithPID:(int)arg1;
- (XCUIApplicationProcess *)applicationProcessWithToken:(NSNumber *)arg1;
- (void)setApplicationProcess:(XCUIApplicationProcess *)arg1 forPID:(int)arg2;
- (void)setApplicationProcess:(XCUIApplicationProcess *)arg1 forToken:(NSNumber *)arg2;

@end
