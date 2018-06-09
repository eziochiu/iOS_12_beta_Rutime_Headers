/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingStateRestorationArchiver : NSCoder {
    bool  _finished;
    NSMutableDictionary * _values;
}

@property (nonatomic, readonly) NSDictionary *values;

+ (id)_specificTypeForObject:(id)arg1;
+ (id)_wrapObject:(id)arg1;
+ (void)cleanupStoryboardInfoForObject:(id)arg1 dictionary:(id)arg2;
+ (bool)objectSupportsStateRestoration:(id)arg1;
+ (void)setObjectMetadataForRestorableObject:(id)arg1 dictionary:(id)arg2;
+ (void)setRestorationMetadataForRestorableObject:(id)arg1 dictionary:(id)arg2;
+ (id)stateRestorationDictionaryForObject:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryForValue:(id)arg1 withType:(id)arg2 forKey:(id)arg3;
- (bool)allowsKeyedCoding;
- (id)decodeDataObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)finishEncoding;
- (id)init;
- (id)values;
- (long long)versionForClassName:(id)arg1;

@end
