/* made by EzioChiu
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSWrapperMap : NSObject {
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > > { 
        struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > *, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > > { 
            struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > {} *__value_; 
        } __ptr_; 
    }  m_cachedJSWrappers;
    NSMapTable * m_cachedObjCWrappers;
    NSMutableDictionary * m_classMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classInfoForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (id)jsWrapperForObject:(id)arg1 inContext:(id)arg2;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue { }*)arg1 inContext:(id)arg2;

@end
