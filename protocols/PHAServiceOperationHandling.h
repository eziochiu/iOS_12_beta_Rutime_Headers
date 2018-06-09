/* made by EzioChiu.
 */

@protocol PHAServiceOperationHandling

@required

- (void)handleOperation:(PHAServiceCancelableOperation *)arg1;

@optional

- (void)operationDidFinish:(PHAServiceCancelableOperation *)arg1;
- (void)operationWillStart:(PHAServiceCancelableOperation *)arg1;

@end
