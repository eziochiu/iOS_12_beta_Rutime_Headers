/* made by EzioChiu.
 */

@protocol NSSNewsAnalyticsPBEventStreamObserver

@required

- (void)observeEvent:(NTPBEvent *)arg1;
- (void)observeEvents:(NSArray *)arg1;

@end
