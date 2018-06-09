/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface STMSizer : STMSizeCache {
    NSObject<OS_dispatch_queue> * _fsQueue;
    struct __FSEventStream { } * _fsStream;
    NSArray * _rootPaths;
    bool  _streamRunning;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (nonatomic, retain) NSArray *rootPaths;
@property (retain) NSObject<OS_dispatch_queue> *updateQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPrefsKey:(id)arg1;
- (void)pathChanged:(id)arg1 flags:(unsigned int)arg2 event:(unsigned long long)arg3;
- (id)rootPaths;
- (void)setRootPaths:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)startSizer;
- (void)stopSizer;
- (id)updateQueue;

@end
