/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFlushingManager : NSObject {
    unsigned long long  _activeBgThreadTask;
    bool  _alwaysFlushing;
    unsigned long long  _backgroundTransitionTaskId;
    NSThread * _bgThread;
    unsigned int  _clock;
    NSCondition * _cond;
    <TSUFlushable> * _flushingObject;
    OITSUPointerKeyDictionary * _inactiveObjects;
    bool  _isFlushing;
    NSCondition * _isFlushingCond;
    OITSUMemoryWatcher * _memoryWatcher;
    OITSURetainedPointerKeyDictionary * _objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSUFlushableObjectInfoPointerTimeStampLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _sortedNewObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSUFlushableObjectInfoPointerFlushingOrderLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _sortedObjects;
    bool  _stopFlushing;
    bool  _stopFlushingWhenQueueEmpty;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void)_backgroundThread:(id)arg1;
- (void)_bgTaskFinished;
- (void)_bgTaskStarted;
- (void)_bgThreadActive;
- (void)_bgThreadInactive;
- (void)_didUseObject:(id)arg1;
- (void)_flushAllEligible;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)addObject:(id)arg1;
- (void)advanceClock;
- (id)autorelease;
- (bool)controlsActiveObject:(id)arg1;
- (bool)controlsInactiveObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)doneWithObject:(id)arg1;
- (struct TSUFlushableObjectInfo { id x1; int x2; int x3; unsigned int x4[2]; }*)eraseInfoForObject:(id)arg1;
- (id)init;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; unsigned int x4[2]; }*)arg1;
- (bool)isNewObject:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; unsigned int x4[2]; }*)arg1;
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;
- (void)protectObject:(id)arg1;
- (oneway void)release;
- (void)removeObject:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)safeToFlush:(id)arg1 wasAccessed:(bool)arg2;
- (void)stopProtectingObject:(id)arg1;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)arg1;
- (void)willEnterForeground;

@end
