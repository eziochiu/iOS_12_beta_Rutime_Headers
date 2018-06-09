/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleAuthKeychainHelper : NSObject

+ (id)sharedInstance;

- (bool)saveValueToKeychain:(id)arg1 forKey:(struct __CFString { }*)arg2;
- (id)valueFromKeychainForKey:(struct __CFString { }*)arg1;

@end
