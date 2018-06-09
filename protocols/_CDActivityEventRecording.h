/* made by EzioChiu.
 */

@protocol _CDActivityEventRecording <NSObject>

@required

- (void)recordUserActivityEvent:(NSUserActivity *)arg1;
- (void)recordUserActivityEventForCollection:(_CDUserActivity *)arg1;
- (void)recordUserActivityEvents:(NSArray *)arg1;

@end
