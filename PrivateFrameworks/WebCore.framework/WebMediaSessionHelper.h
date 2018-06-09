/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebMediaSessionHelper : NSObject {
    struct RetainPtr<MPAVRoutingController> { 
        void *m_ptr; 
    }  _airPlayPresenceRoutingController;
    struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); unsigned int x4[6]; struct Vector<WebCore::PlatformMediaSession *, 0, WTF::CrashOnOverflow, 16> { struct PlatformMediaSession {} **x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<PAL::SystemSleepListener, std::__1::default_delete<PAL::SystemSleepListener> > { struct __compressed_pair<PAL::SystemSleepListener *, std::__1::default_delete<PAL::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_7_1_1; } x7; struct RefPtr<WebCore::AudioHardwareListener, WTF::DumbPtrTraits<WebCore::AudioHardwareListener> > { struct AudioHardwareListener {} *x_8_1_1; } x8; bool x9; bool x10; bool x11; int x12; struct RetainPtr<WebMediaSessionHelper> { void *x_13_1_1; } x13; } * _callback;
    bool  _monitoringAirPlayRoutes;
    bool  _startMonitoringAirPlayRoutesPending;
    struct RetainPtr<MPVolumeView> { 
        void *m_ptr; 
    }  _volumeView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)clearCallback;
- (void)dealloc;
- (bool)hasWirelessTargetsAvailable;
- (id)initWithCallback:(struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); unsigned int x4[6]; struct Vector<WebCore::PlatformMediaSession *, 0, WTF::CrashOnOverflow, 16> { struct PlatformMediaSession {} **x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<PAL::SystemSleepListener, std::__1::default_delete<PAL::SystemSleepListener> > { struct __compressed_pair<PAL::SystemSleepListener *, std::__1::default_delete<PAL::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_7_1_1; } x7; struct RefPtr<WebCore::AudioHardwareListener, WTF::DumbPtrTraits<WebCore::AudioHardwareListener> > { struct AudioHardwareListener {} *x_8_1_1; } x8; bool x9; bool x10; bool x11; int x12; struct RetainPtr<WebMediaSessionHelper> { void *x_13_1_1; } x13; }*)arg1;
- (void)interruption:(id)arg1;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;

@end
