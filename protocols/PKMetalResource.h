/* made by EzioChiu.
 */

@protocol PKMetalResource <NSObject>

@required

- (bool)isPurged;
- (bool)lock;
- (void)unlock;

@end
