/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation> > { 
        struct Geolocation {} *m_ptr; 
    }  _geolocation;
    struct RetainPtr<WebView *> { 
        void *m_ptr; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:(struct Geolocation { int (**x1)(); struct ScriptExecutionContext {} *x2; unsigned int x3; struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_4_1_1; } x4; unsigned int x5; struct HashSet<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> >, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > > > { struct HashTable<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> >, WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > > > { struct RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_6_1_1; } x6; }*)arg1 forWebView:(id)arg2;
- (bool)shouldClearCache;

@end
