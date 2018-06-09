/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener> {
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation> > { 
        struct Geolocation {} *m_ptr; 
    }  m_geolocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGeolocation:(struct Geolocation { int (**x1)(); struct ScriptExecutionContext {} *x2; unsigned int x3; struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_4_1_1; } x4; unsigned int x5; struct HashSet<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> >, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > > > { struct HashTable<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> >, WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > >, WTF::HashTraits<WTF::RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > > > { struct RefPtr<WebCore::GeoNotifier, WTF::DumbPtrTraits<WebCore::GeoNotifier> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_6_1_1; } x6; }*)arg1;
- (void)initializationAllowedWebView:(id)arg1;
- (void)initializationDeniedWebView:(id)arg1;

@end
