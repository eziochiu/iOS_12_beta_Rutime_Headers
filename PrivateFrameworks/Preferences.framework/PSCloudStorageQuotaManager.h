/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCloudStorageQuotaManager : NSObject

+ (id)sharedManager;

- (void)getQuotaInfoForPrimaryAccountCompletion:(id /* block */)arg1;

@end
