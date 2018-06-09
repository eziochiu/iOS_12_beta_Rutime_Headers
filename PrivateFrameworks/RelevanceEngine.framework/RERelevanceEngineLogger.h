/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceEngineLogger : NSObject {
    REObserverStore * _loggables;
}

- (void).cxx_destruct;
- (void)addLoggable:(id)arg1;
- (void)enumerateLoggables:(id /* block */)arg1;
- (id)init;
- (void)removeLoggable:(id)arg1;

@end
