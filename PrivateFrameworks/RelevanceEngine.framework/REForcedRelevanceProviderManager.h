/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REForcedRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;

- (bool)_isHistoricProvider:(id)arg1;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;

@end
