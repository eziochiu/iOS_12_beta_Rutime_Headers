/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookPostPrivacyManager : NSObject {
    ACAccount * _account;
    NSArray * _privacySettings;
}

@property (retain) SLFacebookPostPrivacySetting *privacySetting;

- (void).cxx_destruct;
- (void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(id /* block */)arg4;
- (id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1;
- (void)_setPrivacySettings:(id)arg1;
- (id)_userDefaultsDict;
- (id)defaultPrivacySetting;
- (id)initWithAccount:(id)arg1;
- (id)privacySetting;
- (id)privacySettings;
- (void)setPrivacySetting:(id)arg1;
- (void)updatePrivacySettingsWithCompletionHandler:(id /* block */)arg1;

@end
