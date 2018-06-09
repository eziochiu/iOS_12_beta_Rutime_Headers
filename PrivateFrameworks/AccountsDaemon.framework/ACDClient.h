/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDClient : NSObject {
    struct __CFBundle { } * _bundle;
    NSString * _bundleID;
    NSXPCConnection * _connection;
    ACDDatabase * _database;
    bool  _didManuallySetBundleID;
    NSMutableDictionary * _entitlementChecks;
    NSString * _localizedAppName;
    NSString * _name;
    NSNumber * _pid;
}

@property (nonatomic, readonly) NSString *adamOrDisplayID;
@property (nonatomic, readonly) struct __CFBundle { }*bundle;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) ACDDatabase *database;
@property (nonatomic, readonly) NSString *localizedAppName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *pid;

+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromLaunchServicesForPID:(int)arg1;
- (id)adamOrDisplayID;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (id)connection;
- (id)database;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)localizedAppName;
- (id)longDebugDescription;
- (id)name;
- (id)pid;
- (void)setBundleID:(id)arg1;
- (id)shortDebugDescription;

@end
