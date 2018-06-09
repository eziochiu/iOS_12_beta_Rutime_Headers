/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext {
    NSObject<OS_dispatch_semaphore> * _gatherSemaphore;
    NSMutableDictionary * _gatheredDataByTechniqueIndex;
    NSMutableIndexSet * _lateResultTechniqueIndices;
    ARTechniqueParallelGatherContext * _previousContext;
    NSIndexSet * _requiredTechniqueIndices;
    bool  _resultsCaptured;
    unsigned long long  _techniqueCount;
}

- (void).cxx_destruct;
- (id)_allGatheredDataByTechniqueIndex;
- (id)addResultData:(id)arg1 forTechniqueAtIndex:(unsigned long long)arg2;
- (id)captureGatheredData;
- (id)gatheredData;
- (id)initWithParentContext:(id)arg1 previousContext:(id)arg2 requiredTechniqueIndices:(id)arg3 techniqueCount:(unsigned long long)arg4;
- (id)lateResultDataForTechniqueAtIndex:(unsigned long long)arg1;

@end
