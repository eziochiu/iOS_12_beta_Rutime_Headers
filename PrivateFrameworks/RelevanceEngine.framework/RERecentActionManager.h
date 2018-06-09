/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERecentActionManager : RESingleton {
    NSMutableDictionary * _dateValues;
    NSLock * _lock;
}

- (void).cxx_destruct;
- (void)didPerformActionWithIdentifier:(id)arg1;
- (id)init;
- (id)lastPerformedDateForAction:(id)arg1;

@end
