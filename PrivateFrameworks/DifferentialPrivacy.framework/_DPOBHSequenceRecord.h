/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPOBHSequenceRecord : _DPOBHRecord {
    NSString * _plainSequence;
    long long  _sequenceBitPosition;
    bool  _sequenceBitValue;
}

@property (nonatomic, retain) NSString *plainSequence;
@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) bool sequenceBitValue;

+ (id)entityName;
+ (id)recordWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(bool)arg4 creationDate:(double)arg5 submitted:(bool)arg6 objectId:(id)arg7;

- (void).cxx_destruct;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(bool)arg4 creationDate:(double)arg5 submitted:(bool)arg6 objectId:(id)arg7;
- (id)jsonString;
- (id)plainSequence;
- (long long)sequenceBitPosition;
- (bool)sequenceBitValue;
- (void)setPlainSequence:(id)arg1;
- (void)setSequenceBitPosition:(long long)arg1;
- (void)setSequenceBitValue:(bool)arg1;

@end
