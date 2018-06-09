/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFollowUpItem : NSObject {
    ACAccount * _account;
    NSArray * _actions;
    long long  _displayStyle;
    NSString * _identifier;
    NSString * _informativeText;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _metricsQueue;
    bool  _shouldPostNotification;
    NSString * _title;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, readonly) NSString *backingIdentifier;
@property (nonatomic) long long displayStyle;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) bool hasPostedMetrics;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *informativeText;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) long long priority;
@property (nonatomic) bool shouldPostNotification;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

+ (id)backingIdentifierForIdentifier:(id)arg1 account:(id)arg2;
+ (id)componentsFromBackingIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)actions;
- (id)backingIdentifier;
- (long long)displayStyle;
- (id)generateItem;
- (id)groupIdentifier;
- (bool)hasPostedMetrics;
- (id)identifier;
- (id)informativeText;
- (id)initWithFollowUpItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3;
- (id)internalQueue;
- (id)logKey;
- (id)metrics;
- (id)metricsQueue;
- (id)postMetricsWithBagContract:(id)arg1;
- (long long)priority;
- (void)setAccount:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setHasPostedMetrics:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setMetricsQueue:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setShouldPostNotification:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldOverwriteItem:(id)arg1;
- (bool)shouldPostNotification;
- (id)title;
- (id)userInfo;

@end