/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOToolRequester : NSObject <GEOToolProxy> {
    <GEOToolProxy> * _proxy;
}

+ (id)sharedRequester;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (id)getDefault:(id)arg1 source:(long long*)arg2;
- (id)init;
- (void)invalidateTileCache;
- (void)lockDBs;
- (void)unlockDBs;

@end
