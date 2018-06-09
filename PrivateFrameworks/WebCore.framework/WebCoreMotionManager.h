/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreMotionManager : NSObject {
    struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > { 
        struct HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > { 
            struct DeviceMotionClientIOS {} **m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  m_deviceMotionClients;
    struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > { 
        struct HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > { 
            struct DeviceOrientationClientIOS {} **m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  m_deviceOrientationClients;
    bool  m_gyroAvailable;
    bool  m_headingAvailable;
    bool  m_initialized;
    CLLocationManager * m_locationManager;
    CMMotionManager * m_motionManager;
    NSTimer * m_updateTimer;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct DeviceMotionClientIOS { int (**x1)(); id x2; struct DeviceMotionController {} x3; struct RefPtr<WebCore::DeviceMotionData, WTF::DumbPtrTraits<WebCore::DeviceMotionData> > { struct DeviceMotionData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)addOrientationClient:(struct DeviceOrientationClientIOS { int (**x1)(); id x2; struct DeviceOrientationController {} x3; struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (bool)gyroAvailable;
- (bool)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(struct DeviceMotionClientIOS { int (**x1)(); id x2; struct DeviceMotionController {} x3; struct RefPtr<WebCore::DeviceMotionData, WTF::DumbPtrTraits<WebCore::DeviceMotionData> > { struct DeviceMotionData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)removeOrientationClient:(struct DeviceOrientationClientIOS { int (**x1)(); id x2; struct DeviceOrientationController {} x3; struct RefPtr<WebCore::DeviceOrientationData, WTF::DumbPtrTraits<WebCore::DeviceOrientationData> > { struct DeviceOrientationData {} *x_4_1_1; } x4; bool x5; }*)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

@end
