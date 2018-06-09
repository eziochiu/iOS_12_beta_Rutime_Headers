/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMergableDictionary : NSObject {
    CRDictionary * _underlyingDictionary;
    CRDocument * _underlyingDocument;
}

@property (nonatomic, retain) CRDictionary *underlyingDictionary;
@property (nonatomic, retain) CRDocument *underlyingDocument;

+ (id)decodeDictionaryFromData:(id)arg1;
+ (id)encodedDataWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReplicaID:(id)arg1;
- (bool)mergeWithMergableDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setUnderlyingDictionary:(id)arg1;
- (void)setUnderlyingDocument:(id)arg1;
- (id)underlyingDictionary;
- (id)underlyingDocument;

@end
