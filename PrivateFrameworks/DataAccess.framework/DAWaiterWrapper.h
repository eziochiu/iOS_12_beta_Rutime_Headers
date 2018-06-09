/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAWaiterWrapper : NSObject {
    id /* block */  _completionHandler;
    long long  _dataclasses;
    <DADataclassLockWatcher> * _waiter;
    int  _waiterNum;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) long long dataclasses;
@property (nonatomic, retain) <DADataclassLockWatcher> *waiter;
@property (nonatomic, readonly) int waiterNum;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (long long)dataclasses;
- (id)description;
- (id)init;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDataclasses:(long long)arg1;
- (void)setWaiter:(id)arg1;
- (id)waiter;
- (int)waiterNum;

@end
