/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUITrustManager : NSObject {
    NSString * _access;
}

+ (void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2;
+ (id)defaultTrustManager;
+ (void)migrateFromVersionOne;
+ (void)migrateFromVersionZero;

- (void).cxx_destruct;
- (int)_actionForTrust:(struct __SecTrust { }*)arg1 exceptions:(id)arg2;
- (id)_getExceptionsForSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (bool)_hasExceptionsForSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (unsigned int)_rawTrustResultForTrust:(struct __SecTrust { }*)arg1 exceptions:(id)arg2;
- (int)actionForSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (int)actionForSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)actionForTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 andService:(id)arg3;
- (void)addSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (void)addSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (void)allowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 service:(id)arg3;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (id)init;
- (id)initWithAccessGroup:(id)arg1;
- (unsigned int)rawTrustResultForSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;
- (void)removeAllTrusts;
- (void)removeSMIMETrust:(struct __SecTrust { }*)arg1 sender:(id)arg2;
- (void)removeSSLTrust:(struct __SecTrust { }*)arg1 hostname:(id)arg2 service:(id)arg3;

@end
