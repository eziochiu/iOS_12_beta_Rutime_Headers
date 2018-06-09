/* made by EzioChiu.
 */

@protocol XCTestManager_TestsInterface

@required

- (void)_XCT_applicationWithBundleID:(NSString *)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)_XCT_receivedAccessibilityNotification:(long long)arg1 withPayload:(NSData *)arg2;

@end
