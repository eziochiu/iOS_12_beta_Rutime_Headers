/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    id  _store;
    int  _token;
}

- (void).cxx_destruct;
- (id)_store;
- (void)dealloc;
- (id)initForObservationWithName:(id)arg1 store:(id)arg2;
- (void)setStore:(id)arg1;

@end
