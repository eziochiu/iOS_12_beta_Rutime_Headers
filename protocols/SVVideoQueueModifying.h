/* made by EzioChiu.
 */

@protocol SVVideoQueueModifying <NSObject>

@required

- (<SVVideoQueue> *)modifyQueue:(id <SVVideoQueue>)arg1 inTransitionFromVideo:(id <SVVideo>)arg2;

@end
