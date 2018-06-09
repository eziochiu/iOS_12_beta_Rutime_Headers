/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEventMetric : NSObject <NSSecureCoding> {
    NSMutableDictionary * _associatedOperationGroups;
    NSMutableDictionary * _associatedOperations;
    NSMutableDictionary * _attributes;
    NSDate * _endTime;
    NSString * _eventName;
    bool  _hasBeenSubmitted;
    bool  _inferredAllowsCellular;
    bool  _inferredPreferAnonymousRequests;
    bool  _isCKInternalMetric;
    bool  _isPushTriggerFired;
    NSUUID * _metricUUID;
    NSDate * _startTime;
}

@property (nonatomic, readonly) NSMutableDictionary *associatedOperationGroups;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperations;
@property (nonatomic, readonly) NSMutableDictionary *attributes;
@property (retain) NSDate *endTime;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic) bool hasBeenSubmitted;
@property (nonatomic) bool inferredAllowsCellular;
@property (nonatomic) bool inferredPreferAnonymousRequests;
@property (nonatomic) bool isCKInternalMetric;
@property (nonatomic) bool isPushTriggerFired;
@property (nonatomic, readonly) NSUUID *metricUUID;
@property (retain) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)associateWithCompletedOperation:(id)arg1;
- (id)associatedOperationGroups;
- (id)associatedOperations;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)eventName;
- (id)generateEventMetricInfo;
- (bool)hasBeenSubmitted;
- (bool)inferredAllowsCellular;
- (bool)inferredPreferAnonymousRequests;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (id)initWithEventName:(id)arg1 atTime:(id)arg2;
- (bool)isCKInternalMetric;
- (bool)isPushTriggerFired;
- (id)metricUUID;
- (void)setEndTime:(id)arg1;
- (void)setHasBeenSubmitted:(bool)arg1;
- (void)setInferredAllowsCellular:(bool)arg1;
- (void)setInferredPreferAnonymousRequests:(bool)arg1;
- (void)setIsCKInternalMetric:(bool)arg1;
- (void)setIsPushTriggerFired:(bool)arg1;
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
