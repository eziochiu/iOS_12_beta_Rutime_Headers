/* made by EzioChiu.
 */

@protocol _HDAWDAction <NSObject>

@required

- (bool)doForced;
- (void)doIfWaiting;
- (void)reset;
- (void)start;
- (void)stop;
- (NSString *)taskName;

@end
