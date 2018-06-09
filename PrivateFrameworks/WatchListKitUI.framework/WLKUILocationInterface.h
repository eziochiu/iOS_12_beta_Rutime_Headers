/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUILocationInterface : IKJSObject <WLKUILocationInterface>

- (void)_authorizationStatusDidChange:(id)arg1;
- (void)_locationDidChange:(id)arg1;
- (id)authorizationStatus;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (void)requestAuthorization;
- (void)shouldUpdateUserLocation;

@end
