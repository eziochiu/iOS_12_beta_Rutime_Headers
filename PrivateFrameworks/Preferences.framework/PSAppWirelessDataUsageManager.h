/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppWirelessDataUsageManager : NSObject <CoreTelephonyClientSubscriberDelegate> {
    bool  _cancelled;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _showInternalDetails;
}

@property (getter=isCancelled) bool cancelled;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showInternalDetails;
@property (readonly) Class superclass;

+ (id)coverBundleIdentifiersForBundleIdentifierDict;
+ (id)coverDisplayNameForAppProxy:(id)arg1;
+ (id)dataUsageWorkspace;
+ (id)displayNameForAppProxy:(id)arg1;
+ (id)displayNameForBundleIdentifier:(id)arg1;
+ (id)displayNameForBundleIdentifiers:(id)arg1;
+ (id)forcedBundleIdentiferForBundleIdentifier:(id)arg1;
+ (id)omittedBundleIdentifiers;
+ (void)retrieveDataUsageWorkspaceInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_categorizeApps:(id)arg1 callback:(id /* block */)arg2;
- (void)_handleDataUsageInfoChanged;
- (id)alwaysDisplayedBundleIdentifiers;
- (void)calculateDataUsageWithWorkspace:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancel;
- (id)coreTelephonyClient;
- (void)dealloc;
- (id)init;
- (bool)isCancelled;
- (void)setCancelled:(bool)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (bool)showInternalDetails;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;

@end
