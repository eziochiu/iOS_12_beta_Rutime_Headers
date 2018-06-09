/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAESKeyManager : NSObject

+ (bool)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1;
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3;
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (id)getVoiceTriggerProfilesAESKey;
+ (bool)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3;

@end
