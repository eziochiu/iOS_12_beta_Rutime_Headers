/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDPersistence : NSObject {
    NSMutableSet * _bugSessionIdentifiers;
    NSObject<OS_os_log> * _log;
    NSUserDefaults * _userDefaults;
}

@property (retain) NSMutableSet *bugSessionIdentifiers;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSUserDefaults *userDefaults;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_indexKeyForBugSession:(id)arg1;
- (id)_indexKeyForBugSessionIdentifier:(id)arg1;
- (id)bugSessionIdentifiers;
- (bool)canProceedWithDevice:(id)arg1;
- (id)init;
- (id)loadSavedBugSessions;
- (id)loadSavedSessionsFromPlist:(id)arg1;
- (id)log;
- (void)removeBugSession:(id)arg1;
- (void)setBugSessionIdentifiers:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)updateBugSession:(id)arg1;
- (id)userDefaults;

@end
