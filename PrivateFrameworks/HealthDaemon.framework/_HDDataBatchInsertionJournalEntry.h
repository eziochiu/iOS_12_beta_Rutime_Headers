/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry {
    HDCodableObjectCollection * _collection;
    HDDataOriginProvenance * _provenance;
}

@property (nonatomic, readonly) HDCodableObjectCollection *collection;
@property (nonatomic, readonly) HDDataOriginProvenance *provenance;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collection;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableObjectCollection:(id)arg1 provenance:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)provenance;

@end
