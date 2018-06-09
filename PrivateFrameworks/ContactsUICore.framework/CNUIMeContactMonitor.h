/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIMeContactMonitor : NSObject {
    CNContactStore * _contactStore;
    <CNReaderWriterScheduler> * _lock;
    <CNCancelable> * _meNotificationToken;
    NSNotificationCenter * _notificationCenter;
    <CNMeContactComparisonStrategy> * _strategy;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) <CNReaderWriterScheduler> *lock;
@property (nonatomic, readonly) NSArray *meContactIdentifiers;
@property (nonatomic, retain) <CNCancelable> *meNotificationToken;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) <CNMeContactComparisonStrategy> *strategy;

+ (id)makeMeContactMonitor;
+ (id)makeUnifiedMeContactMonitor;
+ (id)meContactMonitor;
+ (id)unifiedMeContactMonitor;

- (void).cxx_destruct;
- (id)contactStore;
- (void)dealloc;
- (id)init;
- (id)initWithComparisonStrategy:(id)arg1;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithContactStore:(id)arg1;
- (bool)isMeContact:(id)arg1;
- (id)lock;
- (void)meChanged:(id)arg1;
- (id)meContactIdentifiers;
- (id)meNotificationToken;
- (id)notificationCenter;
- (void)setContactStore:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setMeNotificationToken:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setStrategy:(id)arg1;
- (void)startMonitoring;
- (id)strategy;

@end
