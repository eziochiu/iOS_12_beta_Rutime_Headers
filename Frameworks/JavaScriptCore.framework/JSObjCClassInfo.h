/* made by EzioChiu
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSObjCClassInfo : NSObject {
    bool  m_block;
    Class  m_class;
    struct OpaqueJSClass { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct OpaqueJSClass {} *x2; struct OpaqueJSClass {} *x3; int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_15_1_1; } x15; struct unique_ptr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > >, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > > > { struct __compressed_pair<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > *, std::__1::default_delete<WTF::HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > > > { struct HashMap<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >, std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> >, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > >, WTF::HashTraits<std::__1::unique_ptr<StaticValueEntry, std::__1::default_delete<StaticValueEntry> > > > {} *x_1_2_1; } x_16_1_1; } x16; } * m_classRef;
    struct Weak<JSC::JSObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_constructor;
    struct Weak<JSC::JSObject> { 
        struct WeakImpl {} *m_impl; 
    }  m_prototype;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct pair<JSC::JSObject *, JSC::JSObject *> { struct JSObject {} *x1; struct JSObject {} *x2; })allocateConstructorAndPrototypeInContext:(id)arg1;
- (struct JSObject { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly {} *x_6_1_1; } x6; }*)constructorInContext:(id)arg1;
- (void)dealloc;
- (id)initForClass:(Class)arg1;
- (struct JSObject { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly {} *x_6_1_1; } x6; }*)prototypeInContext:(id)arg1;
- (struct JSObject { unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct AuxiliaryBarrier<JSC::Butterfly *> { struct Butterfly {} *x_6_1_1; } x6; }*)wrapperForObject:(id)arg1 inContext:(id)arg2;

@end
