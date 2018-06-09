/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNodeHighlight : NSObject {
    id  _delegate;
    WebHighlightLayer * _highlightLayer;
    WebNodeHighlightView * _highlightView;
    struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents, WTF::DumbPtrTraits<WebCore::InstrumentingAgents> > { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter, WTF::DumbPtrTraits<Inspector::FrontendRouter> > { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher, WTF::DumbPtrTraits<Inspector::BackendDispatcher> > { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch, WTF::DumbPtrTraits<WTF::Stopwatch> > { struct Stopwatch {} *x_7_1_1; } x7; } * _inspectorController;
    WAKView * _targetView;
}

- (void)attach;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)highlightView;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents, WTF::DumbPtrTraits<WebCore::InstrumentingAgents> > { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter, WTF::DumbPtrTraits<Inspector::FrontendRouter> > { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher, WTF::DumbPtrTraits<Inspector::BackendDispatcher> > { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch, WTF::DumbPtrTraits<WTF::Stopwatch> > { struct Stopwatch {} *x_7_1_1; } x7; }*)arg2;
- (struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents, WTF::DumbPtrTraits<WebCore::InstrumentingAgents> > { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter, WTF::DumbPtrTraits<Inspector::FrontendRouter> > { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher, WTF::DumbPtrTraits<Inspector::BackendDispatcher> > { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch, WTF::DumbPtrTraits<WTF::Stopwatch> > { struct Stopwatch {} *x_7_1_1; } x7; }*)inspectorController;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (id)targetView;

@end
