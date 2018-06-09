/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObject : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    double  _creationTimestamp;
    HKDevice * _device;
    NSDictionary * _metadata;
    long long  _provenanceID;
    NSString * _sourceBundleIdentifier;
    HKSourceRevision * _sourceRevision;
}

@property (readonly) NSUUID *UUID;
@property (getter=_creationDate, setter=_setCreationDate:, nonatomic) NSDate *creationDate;
@property (getter=_creationTimestamp, setter=_setCreationTimestamp:, nonatomic) double creationTimestamp;
@property (readonly) HKDevice *device;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) HKSource *source;
@property (getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:, nonatomic, copy) NSString *sourceBundleIdentifier;
@property (readonly) HKSourceRevision *sourceRevision;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(id /* block */)arg3;
+ (id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_copyByArchiving;
- (id)_creationDate;
- (double)_creationTimestamp;
- (long long)_externalSyncObjectCode;
- (id)_init;
- (void)_setCreationDate:(id)arg1;
- (void)_setCreationTimestamp:(double)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setSourceBundleIdentifier:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (void)_setUUID:(id)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_source;
- (id)_sourceBundleIdentifier;
- (id)_validateConfiguration;
- (id)_validateConfigurationAllowingPrivateMetadata:(bool)arg1;
- (void)_validateForCreation;
- (bool)_validateForSavingWithClientEntitlements:(id)arg1 error:(id*)arg2;
- (id)_valueDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)hk_integerValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (bool)prepareForDelivery:(id*)arg1;
- (bool)prepareForSaving:(id*)arg1;
- (id)source;
- (id)sourceRevision;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (id)codableRepresentationForSync;
- (long long)entityType;
- (id)hd_associatedObjects;
- (id)hd_associatedSampleTypes;
- (Class)hd_dataEntityClass;
- (bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5;
- (id)hd_relatedJournalEntries;
- (id)hd_sampleType;

@end
