/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKSItemModifyContext : NSObject {
    id  _activityAssertion;
    struct _PCSIdentityData { } * _currentIdentity;
    NSData * _currentItemReference;
    NSString * _dsid;
    NSData * _existingItemReference;
    NSData * _existingItemSHA1;
    PCSLockAssertion * _lockAssertion;
    struct __PCSLogContext { } * _log;
    PCSMTT * _mtt;
    struct _PCSIdentityData { } * _relocateIdentity;
    int  _retryLeftCount;
    bool  _returnedExistingIdentity;
    bool  _roll;
    struct __CFDictionary { } * _rollAttributes;
    struct _PCSIdentityData { } * _rollIdentity;
    NSData * _rollItemReference;
    NSData * _rollItemSHA1;
    NSDate * _server_NextRollDate;
    NSString * _service;
    struct _PCSIdentitySetData { } * _set;
    bool  _sync;
    long long  _timeoutValue;
    NSObject<OS_os_transaction> * _transaction;
}

@property (retain) id activityAssertion;
@property struct _PCSIdentityData { }*currentIdentity;
@property (retain) NSData *currentItemReference;
@property (retain) NSString *dsid;
@property (retain) NSData *existingItemReference;
@property (retain) NSData *existingItemSHA1;
@property (retain) PCSLockAssertion *lockAssertion;
@property struct __PCSLogContext { }*log;
@property (readonly) PCSMTT *mtt;
@property struct _PCSIdentityData { }*relocateIdentity;
@property int retryLeftCount;
@property bool returnedExistingIdentity;
@property bool roll;
@property struct _PCSIdentityData { }*rollIdentity;
@property (retain) NSData *rollItemReference;
@property (retain) NSData *rollItemSHA1;
@property (retain) NSDate *server_NextRollDate;
@property (retain) NSString *service;
@property struct _PCSIdentitySetData { }*set;
@property bool sync;
@property long long timeoutValue;
@property (retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (id)activityAssertion;
- (struct _PCSIdentityData { }*)currentIdentity;
- (id)currentItemReference;
- (void)dealloc;
- (id)dsid;
- (id)existingItemReference;
- (id)existingItemSHA1;
- (id)init;
- (id)lockAssertion;
- (struct __PCSLogContext { }*)log;
- (id)mtt;
- (struct _PCSIdentityData { }*)relocateIdentity;
- (void)resetIdentities;
- (int)retryLeftCount;
- (bool)returnedExistingIdentity;
- (bool)roll;
- (struct _PCSIdentityData { }*)rollIdentity;
- (id)rollItemReference;
- (id)rollItemSHA1;
- (id)server_NextRollDate;
- (id)service;
- (struct _PCSIdentitySetData { }*)set;
- (void)setActivityAssertion:(id)arg1;
- (void)setCurrentIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setCurrentItemReference:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setExistingItemReference:(id)arg1;
- (void)setExistingItemSHA1:(id)arg1;
- (void)setLockAssertion:(id)arg1;
- (void)setLog:(struct __PCSLogContext { }*)arg1;
- (void)setRelocateIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setRetryLeftCount:(int)arg1;
- (void)setReturnedExistingIdentity:(bool)arg1;
- (void)setRoll:(bool)arg1;
- (void)setRollIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setRollItemReference:(id)arg1;
- (void)setRollItemSHA1:(id)arg1;
- (void)setServer_NextRollDate:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSet:(struct _PCSIdentitySetData { }*)arg1;
- (void)setSync:(bool)arg1;
- (void)setTimeoutValue:(long long)arg1;
- (void)setTransaction:(id)arg1;
- (bool)sync;
- (long long)timeoutValue;
- (id)transaction;

@end
