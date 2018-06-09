/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKObjectMOConverter : NSObject {
    NSCache * _cache;
    bool  _deduplicateValues;
    bool  _readMetadata;
}

@property (retain) NSCache *cache;
@property bool deduplicateValues;
@property bool readMetadata;

- (void).cxx_destruct;
- (id)cache;
- (bool)copyObject:(id)arg1 intoManagedObject:(id)arg2;
- (id)dataIntervalsFromManagedObjects:(id)arg1;
- (bool)deduplicateValues;
- (id)init;
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)objectsFromManagedObjects:(id)arg1;
- (bool)readMetadata;
- (void)setCache:(id)arg1;
- (void)setDeduplicateValues:(bool)arg1;
- (void)setReadMetadata:(bool)arg1;

@end
