/* made by EzioChiu.
 */

@protocol XCTMemoryCheckerDelegate <NSObject>

@required

- (void)memoryChecker:(XCTMemoryChecker *)arg1 didFailWithMessages:(NSArray *)arg2 serializedMemoryGraph:(NSData *)arg3;

@end
