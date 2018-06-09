/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiterDebug : NSObject {
    NSMutableArray * _entries;
    int  _importantCount;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addAsynchronousData:(id /* block */)arg1;
- (void)addEntry:(id)arg1;
- (void)debugWithFormat:(const char *)arg1;
- (void)errorWithFormat:(const char *)arg1;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)arg1;
- (void)infoWithFormat:(const char *)arg1;
- (id)init;

@end