/* made by EzioChiu.
 */

@protocol HMFMessageReceiver <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (NSUUID *)messageTargetUUID;

@end
