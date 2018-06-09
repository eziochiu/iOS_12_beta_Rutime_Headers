/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSortRuleReferenceTrackerReference : NSObject {
    unsigned char  _columnIndex;
    TSCETrackedReference * _trackedReference;
}

@property (nonatomic) unsigned char columnIndex;
@property (nonatomic, retain) TSCETrackedReference *trackedReference;

+ (id)referenceWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;

- (void).cxx_destruct;
- (unsigned char)columnIndex;
- (bool)hasTrackedReferenceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setColumnIndex:(unsigned char)arg1;
- (void)setTrackedReference:(id)arg1;
- (id)trackedReference;

@end
