/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface _SUICEditScriptRanged : _SUICEditScript {
    _SUICAtomRanged * _currentScriptAtom;
    long long  _options;
}

@property (nonatomic, readonly) NSString *stringA;
@property (nonatomic, readonly) NSString *stringB;

+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2;
+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3;
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(bool)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6;

- (void).cxx_destruct;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (id)applyToString:(id)arg1;
- (void)computeSmallestSingleEdit;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(bool)arg6 options:(long long)arg7;
- (void)initializeCurrentScriptAtom;
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long*)arg1 andReverseIndexOfLastDifference:(long long*)arg2 shouldShortenFirstDifference:(bool)arg3;
- (id)stringA;
- (id)stringB;

@end
