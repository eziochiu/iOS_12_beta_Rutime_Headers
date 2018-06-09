/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebViewPrivate : NSObject {
    id  UIDelegate;
    id  UIDelegateForwarder;
    id  UIKitDelegate;
    id  UIKitDelegateForwarder;
    id  WebMailDelegate;
    <WebCaretChangeListener> * _caretChangeListener;
    NSMutableSet * _caretChangeListeners;
    bool  _didPerformFirstNavigation;
    WebFixedPositionContent * _fixedPositionContent;
    <WebGeolocationProvider> * _geolocationProvider;
    struct RefPtr<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> > { 
        struct HistoryItem {} *m_ptr; 
    }  _globalHistoryItem;
    int  _keyboardUIMode;
    bool  _keyboardUIModeAccessed;
    <WebNotificationProvider> * _notificationProvider;
    bool  allowsMessaging;
    bool  allowsUndo;
    NSString * applicationNameForUserAgent;
    struct CGColor { } * backgroundColor;
    bool  becomingFirstResponder;
    bool  becomingFirstResponderFromOutside;
    bool  closed;
    bool  closing;
    WebNodeHighlight * currentNodeHighlight;
    float  customDeviceScaleFactor;
    struct RetainPtr<WebUITextIndicatorData> { 
        void *m_ptr; 
    }  dataOperationTextIndicator;
    unsigned long long  deviceOrientation;
    int  didDrawTiles;
    id  downloadDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  dragPreviewFrameInRootViewCoordinates;
    unsigned long long  dragSourceAction;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  draggedLinkTitle;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  draggedLinkURL;
    bool  drawsBackground;
    id  editingDelegate;
    id  editingDelegateForwarder;
    struct CGSize { 
        double width; 
        double height; 
    }  fixedLayoutSize;
    <WebFormDelegate> * formDelegate;
    id  formDelegateForwarder;
    struct RefPtr<WebCore::ValidationBubble, WTF::DumbPtrTraits<WebCore::ValidationBubble> > { 
        struct ValidationBubble {} *m_ptr; 
    }  formValidationBubble;
    id  frameLoadDelegate;
    id  frameLoadDelegateForwarder;
    struct WebFrameLoadDelegateImplementationCache { 
        int (*didCreateJavaScriptContextForFrameFunc)(); 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*didClearWindowObjectForFrameInScriptWorldFunc)(); 
        int (*didClearInspectorWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*didPushStateWithinPageForFrameFunc)(); 
        int (*didReplaceStateWithinPageForFrameFunc)(); 
        int (*didPopStateWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didLayoutFunc)(); 
        int (*didReceiveIconForFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
        int (*didDisplayInsecureContentFunc)(); 
        int (*didRunInsecureContentFunc)(); 
        int (*didDetectXSSFunc)(); 
        int (*didRemoveFrameFromHierarchyFunc)(); 
        int (*webThreadDidLayoutFunc)(); 
    }  frameLoadDelegateImplementations;
    WebVideoFullscreenController * fullscreenController;
    struct RefPtr<WebViewGroup, WTF::DumbPtrTraits<WebViewGroup> > { 
        struct WebViewGroup {} *m_ptr; 
    }  group;
    bool  hasSpellCheckerDocumentTag;
    id  historyDelegate;
    struct WebHistoryDelegateImplementationCache { 
        int (*navigatedFunc)(); 
        int (*clientRedirectFunc)(); 
        int (*serverRedirectFunc)(); 
        int (*deprecatedSetTitleFunc)(); 
        int (*setTitleFunc)(); 
        int (*populateVisitedLinksFunc)(); 
    }  historyDelegateImplementations;
    WAKWindow * hostWindow;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > > { 
        struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { 
            struct KeyValuePair<unsigned long, WTF::RetainPtr<id> > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  identifierMap;
    WebIndicateLayer * indicateLayer;
    WebInspector * inspector;
    bool  interactiveFormValidationEnabled;
    bool  isStopping;
    struct CGSize { 
        double width; 
        double height; 
    }  lastLayoutSize;
    struct RefPtr<LayerFlushController, WTF::DumbPtrTraits<LayerFlushController> > { 
        struct LayerFlushController {} *m_ptr; 
    }  layerFlushController;
    <WebDeviceOrientationProvider> * m_deviceOrientationProvider;
    bool  mainFrameDocumentReady;
    bool  mainViewIsScrollingOrZooming;
    NSString * mediaStyle;
    bool  needsOneShotDrawingSynchronization;
    WebFullScreenController * newFullscreenController;
    struct Page { } * page;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  pendingFixedPositionLayoutRect;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                unsigned char __a_; 
            } value; 
        } m_byte; 
    }  pendingFixedPositionLayoutRectMutex;
    id  policyDelegate;
    id  policyDelegateForwarder;
    bool  postsAcceleratedCompositingNotifications;
    WebPreferences * preferences;
    int  programmaticFocusCount;
    struct WebResourceDelegateImplementationCache { 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*connectionPropertiesFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*webThreadDidLoadResourceFromMemoryCacheFunc)(); 
        int (*webThreadWillSendRequestFunc)(); 
        int (*webThreadDidReceiveResponseFunc)(); 
        int (*webThreadDidReceiveContentLengthFunc)(); 
        int (*webThreadWillCacheResponseFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
        int (*shouldPaintBrokenImageForURLFunc)(); 
    }  resourceLoadDelegateImplementations;
    id  resourceProgressDelegate;
    id  resourceProgressDelegateForwarder;
    id  scriptDebugDelegate;
    struct WebScriptDebugDelegateImplementationCache { 
        bool didParseSourceExpectsBaseLineNumber; 
        bool exceptionWasRaisedExpectsHasHandlerFlag; 
        int (*didParseSourceFunc)(); 
        int (*failedToParseSourceFunc)(); 
        int (*exceptionWasRaisedFunc)(); 
    }  scriptDebugDelegateImplementations;
    bool  shouldCloseWithWindow;
    bool  shouldMaintainInactiveSelection;
    bool  shouldUpdateWhileOffscreen;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  sourceApplicationAuditData;
    long long  spellCheckerDocumentTag;
    bool  tabKeyCyclesThroughElementsChanged;
    struct RetainPtr<WebUITextIndicatorData> { 
        void *m_ptr; 
    }  textIndicatorData;
    bool  useSiteSpecificSpoofing;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  userAgent;
    bool  userAgentOverridden;
    NSURL * userStyleSheetLocation;
    bool  usesPageCache;
    int  validationMessageTimerMagnification;
    float  zoomMultiplier;
    bool  zoomsTextOnly;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
