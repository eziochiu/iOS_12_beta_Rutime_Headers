/* made by EzioChiu.
 */

@protocol HMDHomeMessageReceiver <HMFMessageReceiver>

@required

+ (bool)hasMessageReceiverChildren;

@optional

- (NSSet *)messageReceiverChildren;

@end
