/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteQueryCacheHelper : NSObject {
    CNCache * _cache;
    CNAutocompleteQueryCacheMissAuditor * _cacheMissAuditor;
    CNObservable * _fallbackObservable;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNCache *cache;
@property (nonatomic, readonly) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor;
@property (nonatomic, readonly) CNObservable *fallbackObservable;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;

+ (id)cache_os_log;
+ (bool)shouldCacheResults:(id)arg1;
+ (id)stringByRemovingLastCharacterFromString:(id)arg1;

- (void).cxx_destruct;
- (id)cache;
- (id)cacheMissAuditor;
- (id)fallbackObservable;
- (id)initWithCache:(id)arg1 fallbackObservable:(id)arg2;
- (id)initWithCache:(id)arg1 fallbackObservable:(id)arg2 cacheMissAuditor:(id)arg3 schedulerProvider:(id)arg4;
- (id)observableForSearchString:(id)arg1;
- (id)observablesForSearchString:(id)arg1 andCompletePromise:(id)arg2;
- (id)observablesForSearchString:(id)arg1 withCachedResults:(id)arg2;
- (id)schedulerProvider;

@end
