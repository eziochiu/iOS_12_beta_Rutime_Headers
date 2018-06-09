/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModeAssertionRecord : NSObject <DNDSBackingStoreRecord, DNDSSyncRecord, NSCopying, NSMutableCopying> {
    NSString * _assertionClientIdentifier;
    NSString * _assertionDetailsCalendarEventLifetimeEventIdentifier;
    NSNumber * _assertionDetailsCalendarEventLifetimeOnlyDuringEvent;
    NSNumber * _assertionDetailsDateIntervalLifetimeEndDateTimestamp;
    NSNumber * _assertionDetailsDateIntervalLifetimeStartDateTimestamp;
    NSString * _assertionDetailsIdentifier;
    NSString * _assertionDetailsLifetimeType;
    NSString * _assertionDetailsModeIdentifier;
    NSNumber * _assertionStartDateTimestamp;
    NSString * _assertionUUID;
}

@property (nonatomic, readonly, copy) NSString *assertionClientIdentifier;
@property (nonatomic, readonly, copy) NSString *assertionDetailsCalendarEventLifetimeEventIdentifier;
@property (nonatomic, readonly, copy) NSNumber *assertionDetailsCalendarEventLifetimeOnlyDuringEvent;
@property (nonatomic, readonly, copy) NSNumber *assertionDetailsDateIntervalLifetimeEndDateTimestamp;
@property (nonatomic, readonly, copy) NSNumber *assertionDetailsDateIntervalLifetimeStartDateTimestamp;
@property (nonatomic, readonly, copy) NSString *assertionDetailsIdentifier;
@property (nonatomic, readonly, copy) NSString *assertionDetailsLifetimeType;
@property (nonatomic, readonly, copy) NSString *assertionDetailsModeIdentifier;
@property (nonatomic, readonly, copy) NSNumber *assertionStartDateTimestamp;
@property (nonatomic, readonly, copy) NSString *assertionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentations:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithAssertionUUID:(id)arg1 assertionStartDateTimestamp:(id)arg2 assertionClientIdentifier:(id)arg3 assertionDetailsIdentifier:(id)arg4 assertionDetailsModeIdentifier:(id)arg5 assertionDetailsLifetimeType:(id)arg6 assertionDetailsCalendarEventLifetimeEventIdentifier:(id)arg7 assertionDetailsCalendarEventLifetimeOnlyDuringEvent:(id)arg8 assertionDetailsDateIntervalLifetimeStartDateTimestamp:(id)arg9 assertionDetailsDateIntervalLifetimeEndDateTimestamp:(id)arg10;
- (id)_initWithRecord:(id)arg1;
- (id)assertionClientIdentifier;
- (id)assertionDetailsCalendarEventLifetimeEventIdentifier;
- (id)assertionDetailsCalendarEventLifetimeOnlyDuringEvent;
- (id)assertionDetailsDateIntervalLifetimeEndDateTimestamp;
- (id)assertionDetailsDateIntervalLifetimeStartDateTimestamp;
- (id)assertionDetailsIdentifier;
- (id)assertionDetailsLifetimeType;
- (id)assertionDetailsModeIdentifier;
- (id)assertionStartDateTimestamp;
- (id)assertionUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSyncDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)syncDictionaryRepresentation;

@end
