/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol> {
    GEORequestCounterPersistence * _persistence;
}

@property (nonatomic) bool countersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearCounters;
- (bool)countersEnabled;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)finishedCDSDownloadForRegionId:(id)arg1;
- (void)finishedCDSDownloadForTileSet:(id)arg1 zoom:(unsigned char)arg2 tilesAtZoom:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 forCDSRegionId:(id)arg7;
- (void)finishedCDSStaleTileUpdateForID:(id)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (void)readCDSDiagnosticsSince:(id)arg1 completion:(id /* block */)arg2;
- (void)readRequestLogsSince:(id)arg1 handler:(id /* block */)arg2;
- (void)readRequestsPerAppSince:(id)arg1 handler:(id /* block */)arg2;
- (void)receivedCDSRegions:(id)arg1 forCDSRegionId:(id)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
- (void)setCountersEnabled:(bool)arg1;
- (void)startPowerLogSessionWithName:(id)arg1;
- (void)startedCDSDownloadForTileSet:(id)arg1 zoom:(unsigned char)arg2 forCDSRegionId:(id)arg3;
- (void)startedCDSStaleTileUpdateForID:(id)arg1;

@end
