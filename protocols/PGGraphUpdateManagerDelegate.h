/* made by EzioChiu.
 */

@protocol PGGraphUpdateManagerDelegate

@required

- (void)graphUpdateManager:(PGGraphUpdateManager *)arg1 graphIsConsistent:(bool)arg2;
- (void)graphUpdateManager:(PGGraphUpdateManager *)arg1 graphUpdateMadeProgress:(double)arg2;

@end
