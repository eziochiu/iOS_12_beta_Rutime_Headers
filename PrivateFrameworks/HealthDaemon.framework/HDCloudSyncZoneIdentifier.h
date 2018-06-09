/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying> {
    NSString * _containerIdentifier;
    CKRecordZoneID * _zoneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneIdentifier;

+ (id)identifierForZone:(id)arg1 container:(id)arg2;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initForZone:(id)arg1 container:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)zoneIdentifier;

@end
