/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying> {
    NSSet * _keys;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSSet *keys;

+ (id)bagKeySetCache;
+ (id)bagKeySetCacheAccessQueue;
+ (void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3;
+ (id)registeredBagKeySetForProfile:(id)arg1 profileVersion:(id)arg2;
+ (void)resetRegisteredBagKeySets;

- (void).cxx_destruct;
- (id)bagKeyInfoForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (bool)hasKey:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keys;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
