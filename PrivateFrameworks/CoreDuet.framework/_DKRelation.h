/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKRelation : _DKObject {
    _DKObject * _object;
    _DKObject * _subject;
    NSString * _verbPhrase;
}

@property (readonly) _DKObject *object;
@property (readonly) _DKObject *subject;
@property (readonly) NSString *verbPhrase;

+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;
- (id)object;
- (id)stringValue;
- (id)subject;
- (id)verbPhrase;

@end
