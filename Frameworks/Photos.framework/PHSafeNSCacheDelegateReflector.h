/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {
    NSMapTable * _delegegatesByCache;
    NSLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)removeDelegateForCache:(id)arg1;
+ (void)setDelegate:(id)arg1 forCache:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;
- (void)removeDelegateForCache:(id)arg1;
- (void)setDelegate:(id)arg1 forCache:(id)arg2;

@end
