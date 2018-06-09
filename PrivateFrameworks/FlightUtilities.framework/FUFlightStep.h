/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightStep : NSObject <NSCopying, NSSecureCoding> {
    FUStepTime * _actualTime;
    FUAirport * _airport;
    NSNumber * _delayFromSchedule;
    bool  _departure;
    FUStepTime * _estimatedTime;
    NSString * _gate;
    long long  _legStatus;
    FUStepTime * _plannedTime;
    FUStepTime * _runwayTime;
    FUStepTime * _scheduledTime;
    NSString * _terminal;
}

@property (retain) FUStepTime *actualTime;
@property (retain) FUAirport *airport;
@property (nonatomic, retain) NSNumber *delayFromSchedule;
@property bool departure;
@property (retain) FUStepTime *estimatedTime;
@property (retain) NSString *gate;
@property long long legStatus;
@property (retain) FUStepTime *plannedTime;
@property (retain) FUStepTime *runwayTime;
@property (retain) FUStepTime *scheduledTime;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) bool taxiing;
@property (retain) NSString *terminal;
@property (readonly) FUStepTime *time;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actualTime;
- (id)airport;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delayFromSchedule;
- (bool)departure;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedTime;
- (id)gate;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)legStatus;
- (id)plannedTime;
- (id)runwayTime;
- (id)scheduledTime;
- (void)setActualTime:(id)arg1;
- (void)setAirport:(id)arg1;
- (void)setDelayFromSchedule:(id)arg1;
- (void)setDeparture:(bool)arg1;
- (void)setEstimatedTime:(id)arg1;
- (void)setGate:(id)arg1;
- (void)setLegStatus:(long long)arg1;
- (void)setPlannedTime:(id)arg1;
- (void)setRunwayTime:(id)arg1;
- (void)setScheduledTime:(id)arg1;
- (void)setTerminal:(id)arg1;
- (unsigned long long)status;
- (bool)taxiing;
- (id)terminal;
- (id)time;

@end
