/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIPreferences : NSObject {
    bool  _alertAfterDownload;
}

@property (nonatomic, readonly) bool alertAfterDownload;

+ (id)sharedInstance;

- (id)_copyNumberPreferenceForKey:(id)arg1;
- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long long)arg2;
- (id)_copyStringPreferenceForKey:(id)arg1;
- (bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (void)_loadPreferences;
- (bool)alertAfterDownload;
- (void)dealloc;
- (id)init;

@end
