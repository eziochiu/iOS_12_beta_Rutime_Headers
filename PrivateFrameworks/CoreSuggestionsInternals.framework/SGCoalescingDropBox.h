/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCoalescingDropBox : NSObject {
    id  _box;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _boxLock;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    id /* block */  _handler;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _handlerLock;
    id /* block */  _makeEmptyBox;
    int  _outstanding;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithBoxMaker:(id /* block */)arg1 handler:(id /* block */)arg2 qos:(unsigned int)arg3;
- (void)updateBox:(id /* block */)arg1;
- (void)updateBox:(id /* block */)arg1 delay:(double)arg2;
- (void)wait;

@end
