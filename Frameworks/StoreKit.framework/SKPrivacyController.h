/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPrivacyController : NSObject

+ (id)sharedInstance;

- (long long)authorizationStatus;
- (void)requestAuthorization:(id /* block */)arg1;

@end
