/* made by EzioChiu.
 */

@protocol GEORequestCounterProtocol <NSObject>

@required

- (void)clearCounters;
- (bool)countersEnabled;
- (void)fetchTrafficProbeCollectionsStartingFrom:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)finishedCDSDownloadForRegionId:(NSString *)arg1;
- (void)finishedCDSDownloadForTileSet:(NSString *)arg1 zoom:(unsigned char)arg2 tilesAtZoom:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 forCDSRegionId:(NSString *)arg7;
- (void)finishedCDSStaleTileUpdateForID:(NSString *)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5;
- (void)readCDSDiagnosticsSince:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)readRequestLogsSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)readRequestsPerAppSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)receivedCDSRegions:(NSArray *)arg1 forCDSRegionId:(NSString *)arg2;
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (<GEORequestCounterTicket> *)requestCounterTicketForType:(unsigned char)arg1 appId:(NSString *)arg2;
- (void)setCountersEnabled:(bool)arg1;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
- (void)startedCDSDownloadForTileSet:(NSString *)arg1 zoom:(unsigned char)arg2 forCDSRegionId:(NSString *)arg3;
- (void)startedCDSStaleTileUpdateForID:(NSString *)arg1;

@end
