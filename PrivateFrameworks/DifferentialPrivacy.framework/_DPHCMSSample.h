/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPHCMSSample : NSObject {
    unsigned long long  _bitIndex;
    NSData * _bitString;
    unsigned long long  _hashFunctionIndex;
}

@property (nonatomic, readonly) unsigned long long bitIndex;
@property (nonatomic, readonly) NSData *bitString;
@property (nonatomic, readonly) unsigned long long hashFunctionIndex;

+ (id)convertDataToString:(id)arg1;
+ (id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 epsilon:(double)arg3 bitCount:(unsigned long long)arg4 bitIndex:(unsigned long long)arg5;
+ (id)hcmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;
+ (id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2 bitIndex:(unsigned long long)arg3;
+ (id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 sequencebitIndex:(unsigned long long)arg3 fragment:(id)arg4 fragmentHashIndex:(unsigned short)arg5 fragmentbitIndex:(unsigned long long)arg6 fragmentPosition:(unsigned short)arg7;

- (void).cxx_destruct;
- (unsigned long long)bitIndex;
- (id)bitString;
- (unsigned long long)hashFunctionIndex;
- (id)init;
- (id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;

@end
