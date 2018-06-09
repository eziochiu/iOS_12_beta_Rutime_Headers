/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDispatchGroup : NSObject {
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    bool  _loggingEnabled;
    NSString * _name;
    id  _result;
    int  _sequence;
    GKThreadsafeDictionary * _values;
    id  result;
}

@property (retain) NSError *error;
@property (getter=isLoggingEnabled, nonatomic) bool loggingEnabled;
@property (retain) id result;

+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroup;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)mainQueue;
+ (void)waitUntilDone:(id /* block */)arg1;

- (id)_values;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (id)allValues;
- (void)dealloc;
- (id)description;
- (void)enter;
- (id)error;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isLoggingEnabled;
- (void)join:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)leave;
- (void)notifyOnMainQueueWithBlock:(id /* block */)arg1;
- (void)notifyOnQueue:(id)arg1 block:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)perform:(id /* block */)arg1;
- (id)result;
- (void)setError:(id)arg1;
- (void)setLoggingEnabled:(bool)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setResult:(id)arg1;
- (void)wait;
- (void)waitWithTimeout:(double)arg1;

@end
