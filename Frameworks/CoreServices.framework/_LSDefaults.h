/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDefaults : NSObject {
    bool  _appleInternal;
    long long  _currentDisplayGamut;
    NSMutableDictionary * _darwinNotificationNames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _darwinNotificationNamesLock;
    unsigned int  _darwinNotificationNamesUID;
    bool  _hasPersistentPreferences;
    bool  _hasServer;
    NSData * _hmacSecret;
    bool  _inEducationMode;
    bool  _inSyncBubble;
    bool  _inXCTestRigInsecure;
    bool  _isServer;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSURL * _systemContainerURL;
    NSURL * _systemGroupContainerURL;
    NSURL * _userContainerURL;
}

@property (readonly) NSData *HMACSecret;
@property (nonatomic, readonly) bool abortIfMayNotMapDatabase;
@property (nonatomic, readonly) bool allowsAlternateIcons;
@property (getter=isAppleInternal, nonatomic, readonly) bool appleInternal;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) bool hasPersistentPreferences;
@property bool hasServer;
@property (readonly) NSURL *identifiersFileURL;
@property (getter=isInEducationMode, readonly) bool inEducationMode;
@property (getter=isInSyncBubble, readonly) bool inSyncBubble;
@property (getter=isInXCTestRigInsecure, nonatomic, readonly) bool inXCTestRigInsecure;
@property (nonatomic, readonly) bool issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *securePeferencesFileURL;
@property (getter=isServer) bool server;
@property (getter=isSimulator, readonly) bool simulator;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *userContainerURL;

+ (bool)appleInternal;
+ (bool)hasPersistentPreferences;
+ (bool)hasServer;
+ (bool)inSyncBubble;
+ (bool)inXCTestRigInsecure;
+ (id)sharedInstance;
+ (id)systemContainerURL;
+ (id)systemGroupContainerURL;
+ (id)userContainerURL;

- (id)HMACSecret;
- (bool)abortIfMayNotMapDatabase;
- (bool)allowsAlternateIcons;
- (id)classesWithNameForXCTests:(const char *)arg1;
- (long long)concurrentInstallOperations;
- (unsigned int)currentSchemaVersion;
- (id)darwinNotificationNameForCurrentUser:(id)arg1;
- (double)databaseSaveInterval;
- (double)databaseSaveLatency;
- (unsigned short)databaseStoreFileMode;
- (id)databaseStoreFileURL;
- (id)databaseUpdateNotificationName;
- (id)dbRecoveryFileURL;
- (id)dbSentinelFileURL;
- (void)dealloc;
- (id)debugDescription;
- (bool)hasPersistentPreferences;
- (bool)hasServer;
- (id)identifiersFileURL;
- (id)init;
- (bool)isAppleInternal;
- (bool)isInEducationMode;
- (bool)isInSyncBubble;
- (bool)isInXCTestRigInsecure;
- (bool)isServer;
- (bool)isSimulator;
- (bool)issueSandboxExceptionsIfMayNotMapDatabase;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesFileURL;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
- (id)queriedSchemesMapFileURL;
- (id)securePeferencesFileURL;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
- (void)setHasServer:(bool)arg1;
- (void)setServer:(bool)arg1;
- (id)systemContainerURL;
- (id)systemGroupContainerURL;
- (id)userContainerURL;
- (id)userPreferencesURL;

@end
