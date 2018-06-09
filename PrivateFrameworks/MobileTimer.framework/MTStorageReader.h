/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTStorageReader : NSCoder <MTCoder> {
    NSMutableArray * _stack;
}

@property (nonatomic, retain) NSMutableArray *stack;

+ (bool)_dictionaryIsForSerializableObject:(id)arg1;
+ (id)_unwrap:(id)arg1;

- (void).cxx_destruct;
- (id)_decodeObject:(id)arg1;
- (id)_objectForDictionary:(id)arg1;
- (bool)allowsKeyedCoding;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (bool)mt_isReadingFromPersistence;
- (bool)mt_isWritingToPersistence;
- (bool)mt_isWritingToStorage;
- (void)setStack:(id)arg1;
- (id)stack;

@end
