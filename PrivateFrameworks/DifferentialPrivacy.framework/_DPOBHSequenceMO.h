/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPOBHSequenceMO : _DPOBHRecordMO

@property (nonatomic, copy) NSString *plainSequence;
@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) bool sequenceBitValue;

+ (id)fetchRequest;

@end
