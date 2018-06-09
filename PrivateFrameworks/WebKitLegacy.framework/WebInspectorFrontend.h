/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebInspectorFrontend : NSObject {
    struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct RefPtr<WebCore::InspectorFrontendHost, WTF::DumbPtrTraits<WebCore::InspectorFrontendHost> > { struct InspectorFrontendHost {} *x_4_1_1; } x4; struct unique_ptr<WebCore::InspectorFrontendClientLocal::Settings, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> > { struct __compressed_pair<WebCore::InspectorFrontendClientLocal::Settings *, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> > { struct Settings {} *x_1_2_1; } x_5_1_1; } x5; bool x6; int x7; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct Ref<WebCore::InspectorBackendDispatchTask, WTF::DumbPtrTraits<WebCore::InspectorBackendDispatchTask> > { struct InspectorBackendDispatchTask {} *x_9_1_1; } x9; } * m_frontendClient;
}

- (void)attach;
- (void)close;
- (void)detach;
- (id)initWithFrontendClient:(struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct RefPtr<WebCore::InspectorFrontendHost, WTF::DumbPtrTraits<WebCore::InspectorFrontendHost> > { struct InspectorFrontendHost {} *x_4_1_1; } x4; struct unique_ptr<WebCore::InspectorFrontendClientLocal::Settings, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> > { struct __compressed_pair<WebCore::InspectorFrontendClientLocal::Settings *, std::__1::default_delete<WebCore::InspectorFrontendClientLocal::Settings> > { struct Settings {} *x_1_2_1; } x_5_1_1; } x5; bool x6; int x7; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct Ref<WebCore::InspectorBackendDispatchTask, WTF::DumbPtrTraits<WebCore::InspectorBackendDispatchTask> > { struct InspectorBackendDispatchTask {} *x_9_1_1; } x9; }*)arg1;
- (bool)isDebuggingEnabled;
- (bool)isProfilingJavaScript;
- (bool)isTimelineProfilingEnabled;
- (void)setDebuggingEnabled:(bool)arg1;
- (void)setTimelineProfilingEnabled:(bool)arg1;
- (void)showConsole;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
