/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {
    RERelevanceProvider * _provider;
}

@property (nonatomic, readonly) bool allProviders;
@property (nonatomic, readonly) RERelevanceProvider *provider;

+ (id)immediateUpdateForAllProviders;
+ (id)immediateUpdateForProvider:(id)arg1;
+ (id)scheduledUpdateForAllProvidersAtDate:(id)arg1;
+ (id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2;

- (void).cxx_destruct;
- (bool)allProviders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithProvider:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)provider;

@end
