/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    unsigned long long  _count;
    long long * _persistentIDs;
    bool  _shouldContain;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const long long*persistentIDs;
@property (nonatomic, readonly) bool shouldContain;
@property (readonly) Class superclass;

+ (id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(bool)arg3;
+ (bool)supportsSecureCoding;

- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (const long long*)persistentIDs;
- (id)protobufferEncodableObject;
- (bool)shouldContain;

@end
