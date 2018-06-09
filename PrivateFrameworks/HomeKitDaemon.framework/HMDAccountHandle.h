/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccountHandle : HMFObject <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMDRemoteAddressable, HMFLogging, NSCopying, NSSecureCoding> {
    IDSURI * _URI;
    NSUUID * _identifier;
    bool  _locallyTracked;
    NSUUID * _modelIdentifier;
    NSUUID * _modelParentIdentifier;
}

@property (readonly, copy) IDSURI *URI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (getter=isLocallyTracked) bool locallyTracked;
@property (nonatomic, readonly) NSUUID *modelIdentifier;
@property (nonatomic, retain) NSUUID *modelParentIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long type;

+ (id)accountHandleForDestination:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URI;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)initWithURI:(id)arg1 accountModelIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocallyTracked;
- (id)logIdentifier;
- (id)modelBackedObjects;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (id)remoteDestinationString;
- (void)setLocallyTracked:(bool)arg1;
- (void)setModelParentIdentifier:(id)arg1;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (long long)type;

@end
