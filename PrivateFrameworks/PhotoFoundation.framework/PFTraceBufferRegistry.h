/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFTraceBufferRegistry : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registry;
}

+ (id)allRecords;
+ (id)allRecordsForTraceBuffersNamed:(id)arg1;
+ (id)contextNames;
+ (void)reset;
+ (id)sharedInstance;
+ (id)traceBufferNamed:(id)arg1;
+ (id)traceBufferNamed:(id)arg1 factory:(id /* block */)arg2;
+ (id)traceBufferNames;

- (void).cxx_destruct;
- (id)allRecordsForTraceBuffersNamed:(id)arg1;
- (id)contextNames;
- (id)init;
- (void)reset;
- (id)traceBufferNamed:(id)arg1 factory:(id /* block */)arg2;
- (id)traceBufferNames;

@end
