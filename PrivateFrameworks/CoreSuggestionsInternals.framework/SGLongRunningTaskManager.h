/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLongRunningTaskManager : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSHashTable * _tasks;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)task;
- (id)taskWithDeadline:(double)arg1;
- (void)tellCurrentTasksToDefer;
- (void)unregister:(id)arg1;

@end
