/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBProperties : NSObject {
    double  _maxSupportedVersion;
    double  _minSupportedVersion;
    id  _plist;
    bool  _protect;
    bool  _protected;
}

@property (nonatomic, retain) NSString *activeAppleID;
@property (nonatomic, readonly) NSDictionary *appleIDs;
@property (nonatomic, retain) NSData *buddyStashData;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSDictionary *containers;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic) bool encrypted;
@property (nonatomic, readonly) bool hasCorruptSQLiteDBs;
@property (nonatomic, readonly) bool hasEncryptedManifestDB;
@property (nonatomic, readonly) bool hasManifestDB;
@property (nonatomic, retain) NSData *keybagData;
@property (nonatomic, retain) NSDictionary *lockdownKeys;
@property (nonatomic) NSData *manifestEncryptionKey;
@property (nonatomic) double maxSupportedVersion;
@property (nonatomic) double minSupportedVersion;
@property (getter=wasPasscodeSet, nonatomic) bool passcodeSet;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) id propertyList;
@property (getter=isProtected, nonatomic) bool protected;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic) double systemDomainsVersion;
@property (nonatomic) double version;

+ (id)properties;
+ (id)propertiesWithFile:(id)arg1 error:(id*)arg2;

- (bool)_boolForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (void)_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)_stringForLockdownKey:(id)arg1;
- (id)activeAppleID;
- (void)addAppleIDsFromSet:(id)arg1 dataClass:(id)arg2;
- (void)addAssetDescriptionForAppleID:(id)arg1 assetDescription:(id)arg2;
- (void)addContainer:(id)arg1;
- (void)addContainersFromArray:(id)arg1;
- (void)addUniqueIdentiferForAppleID:(id)arg1 dsid:(id)arg2 altDSID:(id)arg3;
- (id)appleIDs;
- (id)buddyStashData;
- (id)buildVersion;
- (id)containerWithIdentifier:(id)arg1;
- (id)containers;
- (id)dataWithError:(id*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (bool)encrypted;
- (bool)hasCorruptSQLiteDBs;
- (bool)hasEncryptedManifestDB;
- (bool)hasManifestDB;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithFile:(id)arg1 error:(id*)arg2;
- (id)initWithVersion:(double)arg1 minVersion:(double)arg2 maxVersion:(double)arg3;
- (bool)isProtected;
- (id)keybagData;
- (id)lockdownKeys;
- (id)manifestEncryptionKey;
- (double)maxSupportedVersion;
- (double)minSupportedVersion;
- (id)objectForKey:(id)arg1;
- (id)productType;
- (id)propertyList;
- (void)removeAllContainers;
- (void)removeObjectForKey:(id)arg1;
- (id)serialNumber;
- (void)setActiveAppleID:(id)arg1;
- (void)setBuddyStashData:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEncrypted:(bool)arg1;
- (void)setKeybagData:(id)arg1;
- (void)setLockdownKeys:(id)arg1;
- (void)setManifestEncryptionKey:(id)arg1;
- (void)setMaxSupportedVersion:(double)arg1;
- (void)setMinSupportedVersion:(double)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPasscodeSet:(bool)arg1;
- (void)setProtected:(bool)arg1;
- (void)setSystemDomainsVersion:(double)arg1;
- (void)setVersion:(double)arg1;
- (double)systemDomainsVersion;
- (double)version;
- (bool)wasPasscodeSet;
- (bool)writeToFile:(id)arg1 error:(id*)arg2;

@end
