/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPHCMSSequenceRecord : _DPCMSSequenceRecord {
    int  _sequenceBitIndex;
}

@property (nonatomic) int sequenceBitIndex;

+ (id)entityName;

- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned int)arg5 creationDate:(double)arg6 submitted:(bool)arg7 objectId:(id)arg8;
- (id)jsonString;
- (int)sequenceBitIndex;
- (void)setSequenceBitIndex:(int)arg1;

@end
