/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolAction : NSObject <AMSURLProtocolActionHandling> {
    NSURL * _URL;
    ACAccount * _account;
    NSString * _creditString;
    long long  _kind;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *creditString;
@property (nonatomic) long long kind;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;

+ (id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2;
+ (id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3;

- (void).cxx_destruct;
- (id)URL;
- (id)_performCreditDisplayUpdate;
- (id)_performGotoURL;
- (id)_performOpenURL;
- (id)account;
- (id)creditString;
- (id)initWithTaskInfo:(id)arg1;
- (long long)kind;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setCreditString:(id)arg1;
- (void)setKind:(long long)arg1;
- (void)setTaskInfo:(id)arg1;
- (void)setURL:(id)arg1;
- (id)taskInfo;

@end
