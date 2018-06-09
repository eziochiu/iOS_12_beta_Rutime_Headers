/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEventMetricInfo : NSObject <NSSecureCoding> {
    bool  _allowsCellularAccess;
    NSMutableDictionary * _associatedOperationGroups;
    NSMutableDictionary * _associatedOperations;
    NSDictionary * _attributes;
    NSDate * _endTime;
    NSString * _eventName;
    bool  _isCKInternalMetric;
    bool  _isPushTriggerFired;
    NSUUID * _metricUUID;
    bool  _preferAnonymousRequests;
    NSDate * _startTime;
}

@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperationGroups;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperations;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isCKInternalMetric;
@property (nonatomic, readonly) bool isPushTriggerFired;
@property (nonatomic, readonly) NSUUID *metricUUID;
@property (nonatomic, readonly) bool preferAnonymousRequests;
@property (nonatomic, readonly) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsCellularAccess;
- (id)associatedOperationGroups;
- (id)associatedOperations;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventMetric:(id)arg1;
- (bool)isCKInternalMetric;
- (bool)isPushTriggerFired;
- (id)metricUUID;
- (bool)preferAnonymousRequests;
- (id)startTime;

@end
