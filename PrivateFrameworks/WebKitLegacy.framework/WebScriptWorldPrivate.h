/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebScriptWorldPrivate : NSObject {
    struct RefPtr<WebCore::DOMWrapperWorld, WTF::DumbPtrTraits<WebCore::DOMWrapperWorld> > { 
        struct DOMWrapperWorld {} *m_ptr; 
    }  world;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
