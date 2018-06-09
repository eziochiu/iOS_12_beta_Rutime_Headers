/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestThrottler : NSObject {
    NSLock * _lock;
    NSMapTable * _throttleMap;
}

+ (id)sharedThrottler;

- (void).cxx_destruct;
- (id)_throttlePolicyForKey:(id)arg1;
- (bool)allowRequestForKey:(id)arg1;
- (id)init;
- (unsigned long long)throttleStateLevelForKey:(id)arg1;
- (double)throttleStateResetTimeRemainingForKey:(id)arg1;

@end
