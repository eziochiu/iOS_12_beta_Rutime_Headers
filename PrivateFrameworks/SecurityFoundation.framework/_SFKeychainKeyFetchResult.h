/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFKeychainKeyFetchResult : _SFKeychainFetchResult {
    id  _keyFetchResult;
}

@property (readonly) _SFSymmetricKey *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(id /* block */)arg2;

@end
