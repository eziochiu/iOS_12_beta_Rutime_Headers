/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMPingStatisticsCollector : NSObject {
    NSMutableArray * _roundTriptimes;
    IMPingStatistics * _stats;
    NSMutableString * _stringToWriteToFile;
    _IMPingPacketData * _timestampArray;
}

- (double)_computeMedianTime:(id)arg1;
- (double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3;
- (void)addEchoPacket:(int)arg1 packetTimestamp:(struct timeval { long long x1; int x2; })arg2 error:(int)arg3;
- (void)addEchoReplyPacket:(int)arg1;
- (void)dealloc;
- (id)init;
- (bool)logStatsToFile:(id)arg1 error:(id*)arg2;
- (id)pingStats;
- (id)pingStatsForLastNSeconds:(double)arg1;
- (struct timeval { long long x1; int x2; })timeSentForPacket:(int)arg1;
- (void)timeoutOldSequenceNumbers:(double)arg1;

@end
