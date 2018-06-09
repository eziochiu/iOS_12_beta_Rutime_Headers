/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPCMSWordRecord : _DPCMSSequenceRecord {
    NSData * _fragment;
    short  _fragmentHashIndex;
    short  _fragmentPosition;
    NSString * _plainFragment;
}

@property (nonatomic, retain) NSData *fragment;
@property (nonatomic) short fragmentHashIndex;
@property (nonatomic) short fragmentPosition;
@property (nonatomic, copy) NSString *plainFragment;

+ (id)entityName;

- (void).cxx_destruct;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (id)fragment;
- (short)fragmentHashIndex;
- (short)fragmentPosition;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 plainFragment:(id)arg5 fragment:(id)arg6 fragmentHashIndex:(unsigned short)arg7 fragmentPosition:(unsigned short)arg8 creationDate:(double)arg9 submitted:(bool)arg10 objectId:(id)arg11;
- (id)jsonString;
- (id)plainFragment;
- (void)setFragment:(id)arg1;
- (void)setFragmentHashIndex:(short)arg1;
- (void)setFragmentPosition:(short)arg1;
- (void)setPlainFragment:(id)arg1;

@end
