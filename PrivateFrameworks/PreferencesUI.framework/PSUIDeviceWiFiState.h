/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIDeviceWiFiState : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)initPrivate;
- (bool)isConnectedOverWiFi;

@end
