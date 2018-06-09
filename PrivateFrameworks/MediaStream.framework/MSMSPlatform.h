/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSMSPlatform : NSObject <MSPlatform> {
    ACAccountStore * _accountStore;
    bool  _isPerfLoggingEnabled;
    NSData * _pushToken;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPerfLoggingEnabled;
@property (nonatomic, retain) NSData *pushToken;
@property (readonly) Class superclass;

+ (id)thePlatform;

- (void).cxx_destruct;
- (id)OSString;
- (id)OSVersion;
- (id)UDID;
- (id)_accountForPersonID:(id)arg1;
- (struct __CFString { }*)_facilityStringForFacility:(int)arg1;
- (bool)_mayPerformFileTransfer;
- (void)_rereadDefaults;
- (id)accountStore;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)contentURLForPersonID:(id)arg1;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (id)hardwareString;
- (id)init;
- (bool)isPerfLoggingEnabled;
- (bool)isPerformanceLoggingEnabled;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char *)arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char *)arg7;
- (id)pathMediaStreamDir;
- (bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (bool)policyMayDownload;
- (bool)policyMayUpload;
- (Class)publisherPluginClass;
- (id)pushToken;
- (id)pushTokenForPersonID:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setIsPerfLoggingEnabled:(bool)arg1;
- (void)setPushToken:(id)arg1;
- (Class)sharingPluginClass;
- (bool)shouldEnableNewFeatures;
- (bool)shouldLogAtLevel:(int)arg1;
- (id)socketOptions;
- (Class)subscriberPluginClass;
- (id)theDaemon;

@end
