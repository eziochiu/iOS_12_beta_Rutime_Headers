/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentCapabilities : NSObject

+ (bool)_isMailDropDevice;
+ (bool)_limitMailDropOverCellular;
+ (unsigned long long)_mailDropLimit;
+ (id)capabilitiesDictionary;
+ (unsigned long long)currentDownloadLimit;
+ (unsigned long long)currentMessageLimit;
+ (unsigned long long)currentPlaceholderThreshold;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentUploadLimitForAccount:(id)arg1;
+ (bool)mailDropAvailable;
+ (bool)mailDropAvailableForAccount:(id)arg1;
+ (bool)mailDropConfigured;
+ (double)mailDropExpiration;
+ (id)mailDropPreferences;
+ (unsigned long long)mailDropThreshold;
+ (id)mailDropWhitelistedDownloadDomains;
+ (bool)placeholdersAvailable;

@end
