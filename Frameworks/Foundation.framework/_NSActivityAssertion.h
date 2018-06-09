/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSActivityAssertion : NSObject {
    unsigned char  _adoptPreviousVoucher;
    bool  _ended;
    id /* block */  _expirationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _options;
    NSObject<OS_voucher> * _previousVoucher;
    BKSProcessAssertion * _processAssertion;
    NSString * _reason;
    unsigned int  _systemSleepAssertionID;
    NSObject<OS_voucher> * _voucher;
    <NSObject> * _xpcBoost;
}

+ (void)_dumpExpiringActivitives;
+ (id)_expirationHandlerExecutionQueue;
+ (void)_expireAllActivies;
+ (id)_expiringActivities;
+ (id)_expiringAssertionManagementQueue;
+ (id)_expiringTaskExecutionQueue;
+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(id /* block */)arg3;
+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(id /* block */)arg2;

- (void)_end;
- (void)_fireExpirationHandler;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(id /* block */)arg3;
- (void)_reactivate;
- (void)dealloc;
- (id)debugDescription;

@end
