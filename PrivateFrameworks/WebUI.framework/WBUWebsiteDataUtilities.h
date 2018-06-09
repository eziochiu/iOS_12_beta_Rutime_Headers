/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUWebsiteDataUtilities : NSObject

+ (void)getApplicationCacheQuotaForOrigin:(id)arg1 currentQuota:(unsigned long long)arg2 totalBytesNeeded:(unsigned long long)arg3 viewController:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)getDatabaseQuotaForOrigin:(id)arg1 currentQuota:(unsigned long long)arg2 currentOriginUsage:(unsigned long long)arg3 currentDatabaseUsage:(unsigned long long)arg4 expectedUsage:(unsigned long long)arg5 viewController:(id)arg6 completionHandler:(id /* block */)arg7;

@end
