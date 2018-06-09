/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RELocationRelevanceProviderManager : RESharedLocationRelevanceProviderManager <REPredictorObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void)_closeDataStoresAndObserveChanges;
- (id)_locationOfProvider:(id)arg1;
- (void)_openDataStoresAndObserveChanges;
- (int)_queryRevokableStatusForProvider:(id)arg1;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)predictorDidUpdate:(id)arg1;

@end
