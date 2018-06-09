/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void).cxx_destruct;
- (id)init;
- (void)signal;
- (void)wait;

@end
