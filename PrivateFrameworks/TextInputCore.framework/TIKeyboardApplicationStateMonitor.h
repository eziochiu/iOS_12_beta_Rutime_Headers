/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardApplicationStateMonitor : NSObject {
    NSString * _activeAppBundleID;
    NSDate * _activeAppStartDate;
    double  _activeAppStartTime;
    double  _activeKeyboardStartTime;
    NSLock * _activeStateDataLock;
    NSDictionary * _applicationStateDatabase;
    BKSApplicationStateMonitor * _applicationStateMonitor;
    NSLock * _databaseInUseLock;
    NSObject<TIKeyboardApplicationStateResponses> * _delegate;
    NSMutableSet * _foregroundApps;
    NSMutableSet * _imSuppressingBundleIDs;
    NSMutableArray * _keyboardUsageTimes;
}

@property (nonatomic, retain) NSString *activeAppBundleID;
@property (nonatomic, retain) NSDate *activeAppStartDate;
@property (nonatomic) double activeAppStartTime;
@property (nonatomic) double activeKeyboardStartTime;
@property (nonatomic, retain) NSLock *activeStateDataLock;
@property (nonatomic, retain) NSDictionary *applicationStateDatabase;
@property (nonatomic, retain) BKSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, retain) NSLock *databaseInUseLock;
@property (nonatomic) NSObject<TIKeyboardApplicationStateResponses> *delegate;
@property (nonatomic, retain) NSMutableSet *foregroundApps;
@property (nonatomic, retain) NSMutableSet *imSuppressingBundleIDs;
@property (nonatomic, retain) NSMutableArray *keyboardUsageTimes;

- (void).cxx_destruct;
- (id)activeAppBundleID;
- (id)activeAppStartDate;
- (double)activeAppStartTime;
- (double)activeKeyboardStartTime;
- (id)activeStateDataLock;
- (id)applicationStateDatabase;
- (id)applicationStateMonitor;
- (void)applicationUninstalled:(id)arg1;
- (id)databaseInUseLock;
- (id)databaseLocation;
- (void)dealloc;
- (id)delegate;
- (id)foregroundApps;
- (void)handleApplicationStateChange:(id)arg1;
- (bool)ignoreAppExtension:(id)arg1;
- (id)imSuppressingBundleIDs;
- (id)init;
- (void)keyboardInUse;
- (void)keyboardNoLongerInUse;
- (id)keyboardUsageTimes;
- (void)logOutKeyboardActivity:(double)arg1;
- (void)setActiveAppBundleID:(id)arg1;
- (void)setActiveAppStartDate:(id)arg1;
- (void)setActiveAppStartTime:(double)arg1;
- (void)setActiveKeyboardStartTime:(double)arg1;
- (void)setActiveStateDataLock:(id)arg1;
- (void)setApplicationStateDatabase:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setDatabaseInUseLock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundApps:(id)arg1;
- (void)setImSuppressingBundleIDs:(id)arg1;
- (void)setKeyboardUsageTimes:(id)arg1;
- (void)startANewKeyboardActivity:(id)arg1;

@end
