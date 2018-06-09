/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {
    struct RetainPtr<WebGeolocationCoreLocationProvider> { 
        void *m_ptr; 
    }  _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> { 
        void *m_ptr; 
    }  _coreLocationUpdateListenerProxy;
    bool  _enableHighAccuracy;
    bool  _isSuspended;
    struct RetainPtr<WebGeolocationPosition> { 
        void *m_ptr; 
    }  _lastPosition;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"I"m_tableSizeMask"I"m_keyCount"I"m_deletedCount"I}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    }  _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"I"m_tableSizeMask"I"m_keyCount"I"m_deletedCount"I}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    }  _registeredWebViews;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _sendLastPositionAsynchronouslyTimer;
    bool  _shouldResetOnResume;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"I"m_tableSizeMask"I"m_keyCount"I"m_deletedCount"I}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    }  _trackedWebViews;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > > { 
        struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView> > > { 
            struct KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _webViewsWaitingForCoreLocationAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedGeolocationProvider;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handlePendingInitialPosition:(id)arg1;
- (void)dealloc;
- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (id)lastPosition;
- (void)positionChanged:(id)arg1;
- (void)registerWebView:(id)arg1;
- (void)resetGeolocation;
- (void)resume;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)stopTrackingWebView:(id)arg1;
- (void)suspend;
- (void)unregisterWebView:(id)arg1;

@end
