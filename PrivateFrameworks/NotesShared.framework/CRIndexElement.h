/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRIndexElement : NSObject <NSCopying> {
    long long  _integer;
    NSUUID * _replica;
}

@property (nonatomic) long long integer;
@property (nonatomic, retain) NSUUID *replica;

+ (id)elementWithInteger:(long long)arg1 replica:(id)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hashValue;
- (id)initWithInteger:(long long)arg1 replica:(id)arg2;
- (long long)integer;
- (bool)isEqual:(id)arg1;
- (id)replica;
- (void)setInteger:(long long)arg1;
- (void)setReplica:(id)arg1;

@end
