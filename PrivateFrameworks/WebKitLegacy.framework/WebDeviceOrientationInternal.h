/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationInternal : NSObject {
    struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { 
        struct DeviceOrientationData {} *m_ptr; 
    }  m_orientation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoreDeviceOrientation:(struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData {} *x1; }*)arg1;

@end
