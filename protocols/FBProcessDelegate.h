/* made by EzioChiu.
 */

@protocol FBProcessDelegate <FBProcessWatchdogProviding>

@required

- (void)noteProcess:(FBProcess *)arg1 didUpdateState:(FBProcessState *)arg2;
- (void)noteProcessDidExit:(FBProcess *)arg1;

@end
