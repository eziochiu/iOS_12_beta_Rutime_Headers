/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDevice : NSObject <NSSecureCoding> {
    NSMutableDictionary * _changeBlocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NRDevice * _me;
    NSMutableDictionary * _observers;
    NSMutableDictionary * _oldPropertiesForChangeNotifications;
    NSUUID * _pairingID;
    NSMutableArray * _promiscuousChangeBlocks;
    NSPointerArray * _promiscuousObservers;
    NSMutableDictionary * _properties;
    NRRegistry * _registry;
}

@property (nonatomic, retain) NSMutableDictionary *changeBlocks;
@property (nonatomic, retain) NSMutableDictionary *observers;
@property (nonatomic, retain) NSMutableDictionary *oldPropertiesForChangeNotifications;
@property (nonatomic, retain) NSUUID *pairingID;
@property (nonatomic, retain) NSMutableArray *promiscuousChangeBlocks;
@property (nonatomic, retain) NSPointerArray *promiscuousObservers;
@property (nonatomic, retain) NSMutableDictionary *properties;
@property (nonatomic, retain) NRRegistry *registry;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fireChangeNotificationsForDiff:(id)arg1 secureProperties:(id)arg2 notify:(bool)arg3;
- (void)_notifySecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_updateSelfRetain;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (bool)archived;
- (bool)canMigrate;
- (id)changeBlocks;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(bool)arg4;
- (void)invalidate;
- (bool)migrationConfirmed;
- (id)migrationError;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)observers;
- (id)oldPropertiesForChangeNotifications;
- (id)pairingID;
- (void)postNotification:(id)arg1 withUserInfo:(id)arg2;
- (id)promiscuousChangeBlocks;
- (id)promiscuousObservers;
- (id)properties;
- (id)propertyNames;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)registry;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)setChangeBlocks:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOldPropertiesForChangeNotifications:(id)arg1;
- (void)setPairingID:(id)arg1;
- (void)setPromiscuousChangeBlocks:(id)arg1;
- (void)setPromiscuousObservers:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRegistry:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)supportsCapability:(id)arg1;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (bool)activePairedDeviceSupportIsGreaterEqualVersion:(unsigned int)arg1;
+ (bool)activePairedDeviceSupportsAddBulletinReplyToken;
+ (bool)activePairedDeviceSupportsAttachmentFiles;
+ (bool)activePairedDeviceSupportsCriticalAndGroupingSettings;
+ (bool)activePairedDeviceSupportsDisplayingSubtitle;
+ (bool)activePairedDeviceSupportsFileBulletinAdd;
+ (bool)activePairedDeviceSupportsFileSettingSync;
+ (bool)activePairedDeviceSupportsMultiplteAttachments;
+ (bool)activePairedDeviceSupportsNSNullPListExtenion;
+ (bool)activePairedDeviceSupportsSendingOnlyCategoryID;
+ (bool)activePairedDeviceSupportsSiriActionAppList;

- (unsigned long long)bltVersion;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hd_isActive;
- (bool)hd_isPaired;
- (id)hd_lastActiveDate;
- (id)hd_lastInactiveDate;
- (id)hd_name;
- (id)hd_pairingID;
- (id)hd_productType;
- (id)hd_shortDescription;
- (id)hd_systemBuildVersion;

@end
