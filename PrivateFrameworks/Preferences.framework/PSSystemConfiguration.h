/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfiguration : NSObject {
    struct __SCPreferences { } * _prefs;
}

+ (id)sharedInstance;

- (void)cleanupPrefs;
- (struct __CFString { }*)dataServiceID;
- (void)dealloc;
- (struct __CFString { }*)getServiceIDForPDPContext:(unsigned int)arg1;
- (id)interfaceConfigurationValueForKey:(struct __CFString { }*)arg1 serviceID:(struct __CFString { }*)arg2;
- (id)protocolConfiguration:(struct __CFString { }*)arg1 serviceID:(struct __CFString { }*)arg2;
- (id)protocolConfigurationValueForKey:(struct __CFString { }*)arg1 protocolType:(struct __CFString { }*)arg2 serviceID:(struct __CFString { }*)arg3;
- (void)setInterfaceConfigurationValue:(id)arg1 forKey:(struct __CFString { }*)arg2 serviceID:(struct __CFString { }*)arg3;
- (void)setProtocolConfiguration:(id)arg1 protocolType:(struct __CFString { }*)arg2 serviceID:(struct __CFString { }*)arg3;
- (void)setProtocolConfigurationValue:(id)arg1 forKey:(struct __CFString { }*)arg2 protocolType:(struct __CFString { }*)arg3 serviceID:(struct __CFString { }*)arg4;
- (unsigned char)synchronizeForWriting:(bool)arg1;
- (struct __CFString { }*)voicemailServiceID;

@end
