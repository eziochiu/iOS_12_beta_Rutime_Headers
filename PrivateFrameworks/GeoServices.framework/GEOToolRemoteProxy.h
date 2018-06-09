/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOToolRemoteProxy : NSObject <GEOToolProxy>

- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (id)getDefault:(id)arg1 source:(long long*)arg2;
- (void)invalidateTileCache;
- (void)lockDBs;
- (void)unlockDBs;

@end
