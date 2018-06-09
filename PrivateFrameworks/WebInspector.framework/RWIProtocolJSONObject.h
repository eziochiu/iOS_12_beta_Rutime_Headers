/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolJSONObject : NSObject {
    struct RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> > { 
        struct Object {} *m_ptr; 
    }  _object;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> > { struct Array {} *x1; })JSONArrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithJSONObject:(const struct Object { int (**x1)(); unsigned int x2; int x3; union { bool x_4_1_1; double x_4_1_2; struct StringImpl {} *x_4_1_3; } x4; struct HashMap<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<WTF::JSONImpl::Value, WTF::DumbPtrTraits<WTF::JSONImpl::Value> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_5_1_1; } x5; }*)arg1;
- (int)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setJSONArray:(struct RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> > { struct Array {} *x1; }*)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (struct RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> > { struct Object {} *x1; })toJSONObject;

@end
