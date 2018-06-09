/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _sourceZoneIDs;
    CKRecordZone * _targetZone;
}

@property (nonatomic, retain) NSArray *sourceZoneIDs;
@property (nonatomic, retain) CKRecordZone *targetZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSourceZoneIDs:(id)arg1;
- (void)setTargetZone:(id)arg1;
- (id)sourceZoneIDs;
- (id)targetZone;

@end
