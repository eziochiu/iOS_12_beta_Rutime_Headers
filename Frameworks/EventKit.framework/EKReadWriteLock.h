/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKReadWriteLock : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)initWithName:(const char *)arg1;
- (void)performWithReadLock:(id /* block */)arg1;
- (void)performWithWriteLock:(id /* block */)arg1;

@end
