/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFollowUpAction : NSObject {
    NSObject<OS_dispatch_queue> * _actionQueue;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _label;
    NSURL * _url;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool requiresFollowUpUI;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)actionQueue;
- (id)generateAction;
- (id)identifier;
- (id)initWithAction:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)internalQueue;
- (id)label;
- (id)logKey;
- (id)metrics;
- (id)performActionsWithContract:(id)arg1 account:(id)arg2;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)request;
- (bool)requiresFollowUpUI;
- (void)setActionQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequiresFollowUpUI:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)url;
- (id)userInfo;

@end
