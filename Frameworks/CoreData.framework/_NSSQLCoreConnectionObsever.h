/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLCoreConnectionObsever : NSObject {
    NSSQLCore * _core;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

- (void).cxx_destruct;
- (void)_clearBinding;
- (void)_postRemoteChangeNotificationWithTransactionID:(unsigned long long)arg1;
- (void)_purgeCaches:(id)arg1;
- (id)_retainedBinding;
- (void)dealloc;
- (id)initWithSQLCore:(id)arg1;

@end
