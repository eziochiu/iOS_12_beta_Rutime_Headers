/* made by EzioChiu.
 */

@protocol CoreDAVTaskDelegate <NSObject>

@optional

- (void)task:(CoreDAVTask *)arg1 didFinishWithError:(NSError *)arg2;

@end
