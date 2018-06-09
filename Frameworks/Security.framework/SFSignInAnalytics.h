/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFSignInAnalytics : SFAnalytics <NSSecureCoding> {
    NSMutableArray * _builtDependencyChains;
    bool  _canceled;
    NSString * _category;
    NSMutableDictionary * _eventDependencyList;
    NSString * _eventName;
    NSObject<OS_os_log> * _logObject;
    NSNumber * _measurement;
    NSString * _my_uuid;
    NSString * _parent_uuid;
    NSURL * _persistedEventPlist;
    NSString * _persistencePath;
    NSObject<OS_dispatch_queue> * _queue;
    SFSignInAnalytics * _root;
    NSString * _signin_uuid;
    bool  _stopped;
    SFAnalyticsActivityTracker * _tracker;
}

@property (nonatomic, retain) NSMutableArray *builtDependencyChains;
@property (nonatomic) bool canceled;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) NSMutableDictionary *eventDependencyList;
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, retain) NSObject<OS_os_log> *logObject;
@property (nonatomic, retain) NSNumber *measurement;
@property (nonatomic, copy) NSString *my_uuid;
@property (nonatomic, copy) NSString *parent_uuid;
@property (nonatomic, retain) NSURL *persistedEventPlist;
@property (nonatomic, copy) NSString *persistencePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SFSignInAnalytics *root;
@property (nonatomic, copy) NSString *signin_uuid;
@property (nonatomic) bool stopped;
@property (nonatomic, retain) SFAnalyticsActivityTracker *tracker;

+ (id)databasePath;
+ (id)logger;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)builtDependencyChains;
- (void)cancel;
- (bool)canceled;
- (id)category;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDependencyList;
- (id)eventName;
- (id)initChildWithSignInUUID:(id)arg1 andCategory:(id)arg2 andEventName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignInUUID:(id)arg1 category:(id)arg2 eventName:(id)arg3;
- (id)logForCategoryName:(id)arg1;
- (id)logObject;
- (void)logRecoverableError:(id)arg1;
- (void)logUnrecoverableError:(id)arg1;
- (id)measurement;
- (id)my_uuid;
- (id)newLogForCategoryName:(id)arg1;
- (id)newSubTaskForEvent:(id)arg1;
- (id)parent_uuid;
- (id)persistedEventPlist;
- (id)persistencePath;
- (void)processEventChainForUUID:(id)arg1 dependencyChain:(id)arg2;
- (id)queue;
- (id)root;
- (void)setBuiltDependencyChains:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCategory:(id)arg1;
- (void)setEventDependencyList:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setLogObject:(id)arg1;
- (void)setMeasurement:(id)arg1;
- (void)setMy_uuid:(id)arg1;
- (void)setParent_uuid:(id)arg1;
- (void)setPersistedEventPlist:(id)arg1;
- (void)setPersistencePath:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRoot:(id)arg1;
- (void)setSignin_uuid:(id)arg1;
- (void)setStopped:(bool)arg1;
- (void)setTracker:(id)arg1;
- (void)signInCompleted;
- (id)signin_uuid;
- (void)stopWithAttributes:(id)arg1;
- (bool)stopped;
- (id)tracker;
- (bool)writeDependencyList:(id*)arg1;
- (bool)writeResultsToTmp;

@end
