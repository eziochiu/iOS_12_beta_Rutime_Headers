/* made by EzioChiu.
 */

@protocol MNTracePlayerObserver <NSObject>

@required

- (void)tracePlayer:(MNTracePlayer *)arg1 didJumpToRouteResponse:(GEODirectionsResponse *)arg2 request:(GEODirectionsRequest *)arg3 origin:(GEOComposedWaypoint *)arg4 destination:(GEOComposedWaypoint *)arg5;
- (void)tracePlayer:(MNTracePlayer *)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didReceiveLocationError:(NSError *)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(MNLocation *)arg4;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateLocation:(MNLocation *)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)tracePlayerDidPause:(MNTracePlayer *)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(MNTracePlayer *)arg1;
- (void)tracePlayerDidResume:(MNTracePlayer *)arg1;
- (void)tracePlayerDidResumeLocationUpdates:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStart:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStayOnRoute:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStop:(MNTracePlayer *)arg1;

@end
