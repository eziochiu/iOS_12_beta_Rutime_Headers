/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUAssertionHandler : NSObject

+ (int)_atomicIncrementAssertCount;
+ (void)_logBacktraceWithCallStackSymbols:(id)arg1;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(bool)arg4 description:(const char *)arg5;
+ (void)initialize;
+ (void)logFullBacktrace;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)arg1 onlyFatal:(bool)arg2;
+ (id)packedBacktraceString;
+ (id)packedBacktraceStringWithReturnAddresses:(id)arg1;
+ (id)performBlockIgnoringAssertions:(id /* block */)arg1;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)arg1;
+ (void)simulateCrashWithMessage:(id)arg1;

@end
