/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMerging, HMFMessageReceiver, NSSecureCoding> {
    HMAccessorySettings * _accessorySettings;
    NSMutableOrderedSet * _constraints;
    _HMContext * _context;
    <_HMAccesorySettingDelegate> * _delegate;
    NSUUID * _identifier;
    NSString * _name;
    unsigned long long  _properties;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _reflected;
    long long  _type;
    <NSCopying><NSSecureCoding> * _value;
}

@property (nonatomic, retain) HMAccessorySettings *accessorySettings;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSArray *constraints;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <_HMAccesorySettingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long properties;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReflected, readonly) bool reflected;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (copy) <NSCopying><NSSecureCoding> *value;

+ (id)_encodedConstraintsToAdd:(id)arg1;
+ (id)_encodedConstraintsToRemove:(id)arg1;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2;
+ (id)logCategory;
+ (id)shortDescription;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAddedConstraint:(id)arg1;
- (void)_handleReflectedUpdate:(id)arg1;
- (void)_handleRemovedConstraint:(id)arg1;
- (void)_handleUpdatedValue:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)accessorySettings;
- (void)addConstraint:(id)arg1;
- (void)addConstraint:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (id)constraintWithType:(long long)arg1;
- (id)constraints;
- (id)context;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isReflected;
- (id)logIdentifier;
- (bool)mergeConstraints:(id)arg1;
- (bool)mergeObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (void)notifyDelegateOfAddedConstraint:(id)arg1;
- (void)notifyDelegateOfRemovedConstraint:(id)arg1;
- (unsigned long long)properties;
- (id)propertyQueue;
- (void)removeConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAccessorySettings:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReflected:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)shortDescription;
- (long long)type;
- (void)updateConstraints:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;

@end
