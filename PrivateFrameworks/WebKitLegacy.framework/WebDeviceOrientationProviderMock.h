/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
    WebDeviceOrientationProviderMockInternal * m_internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (void)setOrientation:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;

@end
