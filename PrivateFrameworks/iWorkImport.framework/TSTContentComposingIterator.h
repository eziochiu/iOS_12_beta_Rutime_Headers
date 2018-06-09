/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> {
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { 
        struct TSUCellCoord {} *__begin_; 
        struct TSUCellCoord {} *__end_; 
        struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { 
            struct TSUCellCoord {} *__value_; 
        } __end_cap_; 
    }  _cursorCellIDs;
    NSMutableArray * _iterators;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _minCursorCellID;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<TSUCellCoord' */ struct  cursorCellIDs; /* unknown property attribute:  std::__1::allocator<TSUCellCoord> >=^{TSUCellCoord}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *iterators;
@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } minCursorCellID;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addIterator:(id)arg1;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })advanceToCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x1; struct TSUCellCoord {} *x2; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x_3_1_1; } x3; })cursorCellIDs;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;
- (id)init;
- (id)iterators;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })minCursorCellID;
- (void)setCursorCellIDs:(struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x1; struct TSUCellCoord {} *x2; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x_3_1_1; } x3; })arg1;
- (void)setIterators:(id)arg1;
- (void)setMinCursorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)terminate;
- (void)updateCellData:(id)arg1;

@end
