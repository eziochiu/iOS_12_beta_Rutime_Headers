/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAbstractMutableLargeArray : TSPObject <NSFastEnumeration, TSPMutableLargeArraySegmentDelegate> {
    long long  _bisectedSegmentIdentifier;
    unsigned long long  _bisectedSegmentIndex;
    unsigned int  _delayedArchivingPriority;
    unsigned long long  _maxSegmentElementCount;
    unsigned long long  _maxSegmentSize;
    unsigned long long  _mergingSegmentIndex;
    unsigned long long  _mutations;
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
@property (nonatomic, readonly) bool hasMaxSegmentElementCount;
@property (nonatomic, readonly) bool hasMaxSegmentSize;
@property (nonatomic) unsigned long long maxSegmentElementCount;
@property (nonatomic) unsigned long long maxSegmentSize;
@property (nonatomic, readonly) unsigned long long segmentCount;
@property (nonatomic) bool shouldDelayArchiving;
@property (nonatomic) bool storeOutsideObjectArchive;

+ (Class)arraySegmentClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)bisectSegmentIfNeeded:(unsigned long long)arg1;
- (void)commonInit;
- (id)convertElementToSegmentElement:(id)arg1;
- (id)convertSegmentElementToElement:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)createArraySegment;
- (unsigned int)delayedArchivingPriority;
- (unsigned long long)elementCount;
- (id)firstObject;
- (bool)hasDelayedArchivingPriority;
- (bool)hasMaxSegmentElementCount;
- (bool)hasMaxSegmentSize;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithArray:(id)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(bool)arg2 delayedArchivingPriority:(unsigned int)arg3 storeOutsideObjectArchive:(bool)arg4;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(bool)arg2 storeOutsideObjectArchive:(bool)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atSegmentIndex:(unsigned long long)arg2;
- (void)largeArraySegmentDidBisectAtIndex:(unsigned long long)arg1 segments:(id)arg2;
- (id)lastObject;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastRange;
- (void)loadFromLargeArrayMessage:(const struct LargeArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Range> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned int x9; bool x10; bool x11; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)maxSegmentElementCount;
- (unsigned long long)maxSegmentSize;
- (void)mergeSegmentIfNeededAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSegmentIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeLastRange;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRangeAtSegmentIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToLargeArrayMessage:(struct LargeArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Range> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned int x9; bool x10; bool x11; }*)arg1 archiver:(id)arg2;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (unsigned long long)segmentIndexForElementIndex:(unsigned long long)arg1 firstSegmentIndex:(unsigned long long)arg2 lastSegmentIndex:(unsigned long long)arg3 segmentIndexGuess:(unsigned long long)arg4;
- (unsigned long long)segmentIndexForElementIndex:(unsigned long long)arg1 segmentIndexGuess:(unsigned long long)arg2;
- (id)segmentRanges;
- (void)setDelayedArchivingPriority:(unsigned int)arg1;
- (void)setMaxSegmentElementCount:(unsigned long long)arg1;
- (void)setMaxSegmentElementCount:(unsigned long long)arg1 willModify:(bool)arg2;
- (void)setMaxSegmentSize:(unsigned long long)arg1;
- (void)setMaxSegmentSize:(unsigned long long)arg1 willModify:(bool)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setShouldDelayArchiving:(bool)arg1;
- (void)setStoreOutsideObjectArchive:(bool)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;
- (void)updateSegmentRangesAfterIndex:(unsigned long long)arg1;

@end
