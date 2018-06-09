/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    BOOL  _localPDelayLogMeanInterval;
    bool  _measuringPDelay;
    bool  _multipleRemotes;
    BOOL  _remotePDelayLogMeanInterval;
    TSgPTPPortStatistics * _statistics;
}

@property (nonatomic) BOOL localPDelayLogMeanInterval;
@property (nonatomic) bool measuringPDelay;
@property (nonatomic) bool multipleRemotes;
@property (nonatomic) BOOL remotePDelayLogMeanInterval;
@property (nonatomic, retain) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;

- (bool)_commonInitWithService:(unsigned int)arg1;
- (BOOL)_localPDelayLogMeanInterval;
- (bool)_measuringPDelay;
- (bool)_multipleRemotes;
- (BOOL)_remotePDelayLogMeanInterval;
- (id)_statistics;
- (void)dealloc;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (BOOL)localPDelayLogMeanInterval;
- (bool)measuringPDelay;
- (bool)multipleRemotes;
- (BOOL)remotePDelayLogMeanInterval;
- (void)setLocalPDelayLogMeanInterval:(BOOL)arg1;
- (void)setMeasuringPDelay:(bool)arg1;
- (void)setMultipleRemotes:(bool)arg1;
- (void)setRemotePDelayLogMeanInterval:(BOOL)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateProperties;

@end
