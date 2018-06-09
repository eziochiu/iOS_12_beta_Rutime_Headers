/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCTSMSUtilities : NSObject

+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1;
+ (bool)IMMMSEnabledForPhoneNumber:(id)arg1;
+ (bool)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1;
+ (double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1;
+ (bool)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1;
+ (bool)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1;
+ (bool)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1;
+ (bool)IMMessagesFilteringSettingForPreferedSubscription;
+ (bool)IMReadMMSUserOverrideForPhoneNumber:(id)arg1;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4;
+ (bool)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 reset:(bool)arg2;

@end
