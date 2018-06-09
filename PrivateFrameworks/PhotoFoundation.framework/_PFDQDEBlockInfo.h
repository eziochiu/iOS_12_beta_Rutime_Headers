/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo {
    _PFDQDECallSite * _callSite;
}

@property (readonly) _PFDQDECallSite *callSite;

- (void).cxx_destruct;
- (id)backtraceWithPrefix:(id)arg1;
- (id)callSite;
- (id)init;

@end
