/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCachePolicy : NSObject {
    unsigned long long  _cachePolicy;
    double  _maximumCachedAge;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;

+ (id)cachePolicyWithSoftMaxAge:(double)arg1;
+ (id)cachedOnlyCachePolicy;
+ (id)defaultCachePolicy;
+ (id)ignoreCacheCachePolicy;

- (unsigned long long)cachePolicy;
- (double)maximumCachedAge;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setMaximumCachedAge:(double)arg1;

@end
