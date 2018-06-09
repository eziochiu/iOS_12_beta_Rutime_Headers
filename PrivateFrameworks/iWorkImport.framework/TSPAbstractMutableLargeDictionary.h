/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAbstractMutableLargeDictionary : TSPObject <TSPMutableLargeDictionarySegmentDelegate> {
    long long  _bisectedSegmentIdentifier;
    unsigned long long  _bisectedSegmentIndex;
    unsigned long long  _count;
    unsigned int  _delayedArchivingPriority;
    unsigned long long  _maxSegmentObjectCount;
    unsigned long long  _maxSegmentSize;
    unsigned long long  _mergingSegmentIndex;
    struct vector<_NSRange, std::__1::allocator<_NSRange> > { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  _segmentRanges;
    NSMutableArray * _segments;
    bool  _shouldDelayArchiving;
    bool  _storeOutsideObjectArchive;
}

@property (readonly) unsigned long long count;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (nonatomic, readonly) bool hasDelayedArchivingPriority;
@property (nonatomic, readonly) bool hasMaxSegmentObjectCount;
@property (nonatomic, readonly) bool hasMaxSegmentSize;
@property (nonatomic) unsigned long long maxSegmentObjectCount;
@property (nonatomic) unsigned long long maxSegmentSize;
@property (nonatomic, readonly) unsigned long long segmentCount;
@property (nonatomic) bool shouldDelayArchiving;
@property (nonatomic) bool storeOutsideObjectArchive;

+ (Class)dictionarySegmentClass;
+ (unsigned long long)hashForKey:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)bisectSegmentIfNeeded:(unsigned long long)arg1;
- (void)commonInit;
- (id)convertObjectToSegmentObject:(id)arg1;
- (id)convertSegmentObjectToObject:(id)arg1;
- (unsigned long long)count;
- (id)createDictionarySegment;
- (unsigned int)delayedArchivingPriority;
- (bool)hasDelayedArchivingPriority;
- (bool)hasMaxSegmentObjectCount;
- (bool)hasMaxSegmentSize;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(bool)arg2 delayedArchivingPriority:(unsigned int)arg3 storeOutsideObjectArchive:(bool)arg4;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(bool)arg2 storeOutsideObjectArchive:(bool)arg3;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 context:(id)arg4;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atSegmentIndex:(unsigned long long)arg2;
- (id)keyEnumerator;
- (void)largeDictionarySegmentDidBisectAtHash:(unsigned long long)arg1 segments:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastRange;
- (void)loadFromLargeDictionaryMessage:(const struct LargeDictionary { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Range> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)maxSegmentObjectCount;
- (unsigned long long)maxSegmentSize;
- (void)mergeSegmentIfNeededAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSegmentIndex:(unsigned long long)arg1;
- (void)removeLastRange;
- (void)removeObjectForKey:(id)arg1;
- (void)removeRangeAtSegmentIndex:(unsigned long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToLargeDictionaryMessage:(struct LargeDictionary { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Range> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; bool x11; bool x12; }*)arg1 archiver:(id)arg2;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (unsigned long long)segmentIndexForKeyHash:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForKeyHash:(unsigned long long)arg1 firstSegmentIndex:(unsigned long long)arg2 lastSegmentIndex:(unsigned long long)arg3 segmentIndexGuess:(unsigned long long)arg4;
- (id)segmentRanges;
- (void)setDelayedArchivingPriority:(unsigned int)arg1;
- (void)setMaxSegmentObjectCount:(unsigned long long)arg1;
- (void)setMaxSegmentObjectCount:(unsigned long long)arg1 willModify:(bool)arg2;
- (void)setMaxSegmentSize:(unsigned long long)arg1;
- (void)setMaxSegmentSize:(unsigned long long)arg1 willModify:(bool)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setShouldDelayArchiving:(bool)arg1;
- (void)setStoreOutsideObjectArchive:(bool)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;

@end
