/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCRecordZoneInfo : NSObject {
    CKRecordZoneID * _activeZoneID;
    NSString * _nextZoneName;
    NSArray * _staleReadableZoneIDs;
    NSError * _zoneAccessError;
}

@property (nonatomic, readonly) CKRecordZoneID *activeZoneID;
@property (nonatomic, readonly) NSString *nextZoneName;
@property (nonatomic, readonly) NSArray *staleReadableZoneIDs;
@property (nonatomic, readonly) NSError *zoneAccessError;

+ (id)ignoredZoneNames;
+ (long long)indexFromZoneID:(id)arg1;
+ (id)indexedZoneIDsFromZoneIDs:(id)arg1;
+ (id)nextZoneNameFromAllZoneIDs:(id)arg1;
+ (id)sortedZoneIDsFromZoneIDs:(id)arg1;
+ (id)zoneAccessErrorFromZoneFailures:(id)arg1;
+ (id)zoneNameFromIndex:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)activeZoneID;
- (id)initWithReadableZones:(id)arg1 zoneFetchError:(id)arg2;
- (id)nextZoneName;
- (id)staleReadableZoneIDs;
- (id)zoneAccessError;

@end
