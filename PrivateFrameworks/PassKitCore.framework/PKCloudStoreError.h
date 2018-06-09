/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudStoreError : NSError

+ (bool)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

- (id)_allPartialErrors;
- (long long)_code;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithError:(id)arg1;
- (bool)isChangeTokenExpired;
- (bool)isInitializationTimeOutError;
- (bool)isKeychainSyncingInProgress;
- (bool)isManateeNotAvailableError;
- (bool)isNetworkUnavailable;
- (bool)isPCSError;
- (bool)isPartialError;
- (bool)isUnrecoverableDecryptionError;

@end
