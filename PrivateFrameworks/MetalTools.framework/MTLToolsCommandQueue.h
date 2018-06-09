/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {
    MTLToolsPointerArray * _commandBuffers;
}

@property (getter=isStatEnabled, nonatomic) bool StatEnabled;
@property (getter=getStatLocations, nonatomic) unsigned long long StatLocations;
@property (getter=getStatOptions, nonatomic) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property (nonatomic, readonly) MTLToolsPointerArray *commandBuffers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property bool executionEnabled;
@property (readonly) unsigned long long hash;
@property bool isOpenGLQueue;
@property (copy) NSString *label;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) unsigned long long qosClass;
@property (readonly) long long qosRelativePriority;
@property bool skipRender;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)addPerfSampleHandler:(id /* block */)arg1;
- (id)availableCounters;
- (int)backgroundTrackingPID;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffers;
- (id)counterInfo;
- (void)dealloc;
- (bool)executionEnabled;
- (void)finish;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (id)getRequestedCounters;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)insertDebugCaptureBoundary;
- (bool)isOpenGLQueue;
- (bool)isProfilingEnabled;
- (bool)isStatEnabled;
- (id)label;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosClass;
- (long long)qosRelativePriority;
- (int)requestCounters:(id)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setExecutionEnabled:(bool)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setIsOpenGLQueue:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setSkipRender:(bool)arg1;
- (void)setStatEnabled:(bool)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (void)setSubmissionQueue:(id)arg1;
- (bool)skipRender;
- (id)subdivideCounterList:(id)arg1;

@end
