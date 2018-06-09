/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSMutableModeAssertionRecord : DNDSModeAssertionRecord

@property (nonatomic, copy) NSString *assertionClientIdentifier;
@property (nonatomic, copy) NSString *assertionDetailsCalendarEventLifetimeEventIdentifier;
@property (nonatomic, copy) NSNumber *assertionDetailsCalendarEventLifetimeOnlyDuringEvent;
@property (nonatomic, copy) NSNumber *assertionDetailsDateIntervalLifetimeEndDateTimestamp;
@property (nonatomic, copy) NSNumber *assertionDetailsDateIntervalLifetimeStartDateTimestamp;
@property (nonatomic, copy) NSString *assertionDetailsIdentifier;
@property (nonatomic, copy) NSString *assertionDetailsLifetimeType;
@property (nonatomic, copy) NSString *assertionDetailsModeIdentifier;
@property (nonatomic, copy) NSNumber *assertionStartDateTimestamp;
@property (nonatomic, copy) NSString *assertionUUID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssertionClientIdentifier:(id)arg1;
- (void)setAssertionDetailsCalendarEventLifetimeEventIdentifier:(id)arg1;
- (void)setAssertionDetailsCalendarEventLifetimeOnlyDuringEvent:(id)arg1;
- (void)setAssertionDetailsDateIntervalLifetimeEndDateTimestamp:(id)arg1;
- (void)setAssertionDetailsDateIntervalLifetimeStartDateTimestamp:(id)arg1;
- (void)setAssertionDetailsIdentifier:(id)arg1;
- (void)setAssertionDetailsLifetimeType:(id)arg1;
- (void)setAssertionDetailsModeIdentifier:(id)arg1;
- (void)setAssertionStartDateTimestamp:(id)arg1;
- (void)setAssertionUUID:(id)arg1;

@end
