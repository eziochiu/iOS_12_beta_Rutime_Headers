/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging> {
    HMFVersion * _bsoDataVersion;
    bool  _bsoDataVersionOverride;
    <HMDBackingStoreObjectProtocol> * _bsoDelegate;
    unsigned long long  _bsoLogRowID;
    CKRecord * _bsoRecord;
    NSString * _bsoType;
    unsigned long long  _objectChangeType;
    NSUUID * _parentUUID;
    NSMutableDictionary * _reserved;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMFVersion *bsoDataVersion;
@property bool bsoDataVersionOverride;
@property (nonatomic) <HMDBackingStoreObjectProtocol> *bsoDelegate;
@property (readonly) unsigned long long bsoLogRowID;
@property (nonatomic, readonly) CKRecord *bsoRecord;
@property (nonatomic, retain) NSString *bsoType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isGenericRepresentation, nonatomic, readonly) bool isGenericRepresentation;
@property (getter=isReadOnly, nonatomic, readonly) bool isReadOnly;
@property (nonatomic) unsigned long long objectChangeType;
@property (nonatomic, retain) NSUUID *parentUUID;
@property (getter=isReplayable, nonatomic, readonly) bool replayable;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)bsoSchemaHash;
+ (id)formatValue:(id)arg1;
+ (Class)genericRepresentation;
+ (id)logCategory;
+ (id)objectFromCloud:(id)arg1 error:(id*)arg2;
+ (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 record:(id)arg3 error:(id*)arg4;
+ (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 rowID:(unsigned long long)arg3 error:(id*)arg4;
+ (id)objectFromDictionaryData:(id)arg1 error:(id*)arg2;
+ (id)objectFromDictionaryData:(id)arg1 type:(id)arg2 error:(id*)arg3;
+ (id)properties;
+ (id)readonlyBefore;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (id)schemaHashRoot;

- (void).cxx_destruct;
- (bool)_validateType:(id)arg1 error:(id*)arg2;
- (id)bsoDataVersion;
- (bool)bsoDataVersionOverride;
- (id)bsoDelegate;
- (unsigned long long)bsoLogRowID;
- (id)bsoRecord;
- (id)bsoType;
- (void)clearVersionOverride;
- (id)debugString:(bool)arg1;
- (id)defaultValueForPropertyNamed:(id)arg1 isSet:(bool*)arg2;
- (id)dependentUUIDs;
- (id)description;
- (bool)diff:(id)arg1 differingFields:(id*)arg2;
- (void)dumpDebug;
- (void)dumpDebug:(id)arg1;
- (id)encodeAsNSDictionaryFor:(unsigned long long)arg1 error:(id*)arg2;
- (id)encodeFor:(unsigned long long)arg1 error:(id*)arg2;
- (id)encodeForCloud:(id*)arg1;
- (id)encodeWithEncoding:(unsigned long long)arg1 error:(id*)arg2;
- (id)encodeWithEncoding:(unsigned long long)arg1 for:(unsigned long long)arg2 error:(id*)arg3;
- (id)encodeWithError:(id*)arg1;
- (unsigned long long)hash;
- (id)initWithObjectChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 parentUUID:(id)arg2;
- (id)initWithVersion:(id)arg1 changeType:(unsigned long long)arg2 uuid:(id)arg3 parentUUID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isGenericRepresentation;
- (bool)isReadOnly;
- (bool)isReplayable;
- (id)logIdentifier;
- (id)merge:(id)arg1;
- (id)merge:(id)arg1 from:(unsigned long long)arg2;
- (unsigned long long)objectChangeType;
- (id)parentUUID;
- (id)prepareFor:(unsigned long long)arg1;
- (bool)propertyIsAvailable:(id)arg1;
- (bool)propertyIsReadOnly:(id)arg1;
- (bool)propertyWasSet:(id)arg1;
- (void)setBsoDataVersionOverride:(bool)arg1;
- (void)setBsoDelegate:(id)arg1;
- (void)setBsoType:(id)arg1;
- (void)setObjectChangeType:(unsigned long long)arg1;
- (void)setParentUUID:(id)arg1;
- (void)setParentUUIDIfNotNil:(id)arg1;
- (id)setProperties;
- (void)setPropertyIfNotNil:(id)arg1 named:(id)arg2;
- (void)setUuid:(id)arg1;
- (id)typeNameForDebug;
- (id)uuid;
- (bool)validForStorage;
- (id)validateType:(id)arg1 path:(id)arg2;

@end
