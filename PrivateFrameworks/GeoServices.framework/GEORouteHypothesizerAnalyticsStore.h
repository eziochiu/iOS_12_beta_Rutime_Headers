/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {
    unsigned long long  _etaUpdatesAfterEventStart;
    bool  _etaUpdatesWereReported;
    unsigned long long  _hypothesisCount;
    unsigned long long  _hypothesizerRerouteCount;
    NSDate * _lastGenerationDate;
    double  _observedEarlyDeltaFromRequiredTimeToLeave;
    double  _observedLateDeltaFromRequiredTimeToLeave;
    bool  _stopped;
    unsigned long long  _uiNotificationType;
}

@property (nonatomic) unsigned long long etaUpdatesAfterEventStart;
@property (nonatomic) bool etaUpdatesWereReported;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didArriveWithExpectedArrivalTime:(id)arg1;
- (void)didGenerateHypothesis;
- (void)didReroute;
- (void)didShowUI:(unsigned long long)arg1;
- (void)didStartMovingWithExpectedDepartureTime:(id)arg1;
- (void)didStopHypothesizing;
- (void)didStopMoving;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)etaUpdatesAfterEventStart;
- (bool)etaUpdatesWereReported;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setEtaUpdatesAfterEventStart:(unsigned long long)arg1;
- (void)setEtaUpdatesWereReported:(bool)arg1;

@end
