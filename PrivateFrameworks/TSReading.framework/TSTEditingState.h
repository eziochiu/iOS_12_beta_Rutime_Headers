/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTEditingState : TSPObject <TSWPStorageObserver> {
    NSArray * _coloredReferences;
    TSKCommandController * _commandController;
    bool  _dispatchingPreflight;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _lastEditingCellID;
    bool  mCellWasEditedInCurrentSession;
    TSUPointerKeyDictionary * mColoredReferences;
    TSTCell * mEditingCell;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mEditingCellID;
    bool  mEditingCellInProxy;
    int  mEditingMode;
    TSWPStorage * mEditingStorage;
    bool  mEndingEditingDueToCancelOperation;
    unsigned char  mLastColumnHitByTap;
    int  mPreviousEditingMode;
    TSTSearchReference * mSearchReference;
    TSTTableSelection * mSelection;
    TSTTableSelection * mSelectionReflectingEditingState;
    TSTTableInfo * mTableInfo;
    TSTTextStatisticsTracker * mTracker;
}

@property (nonatomic) bool cellWasEditedInCurrentSession;
@property (nonatomic, readonly) NSArray *coloredReferences;
@property (nonatomic, readonly) TSKCommandController *commandController;
@property (getter=isDispatchingPreflight, nonatomic) bool dispatchingPreflight;
@property (nonatomic, retain) TSTCell *editingCell;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } editingCellID;
@property (nonatomic) bool editingCellInProxy;
@property (nonatomic, readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } editingCellRange;
@property (nonatomic, readonly) int editingMode;
@property (nonatomic, retain) TSWPStorage *editingStorage;
@property (getter=isEndingEditingDueToCancelOperation, nonatomic) bool endingEditingDueToCancelOperation;
@property (nonatomic) unsigned char lastColumnHitByTap;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } lastEditingCellID;
@property (nonatomic, readonly) int previousEditingMode;
@property (nonatomic, retain) TSTSearchReference *searchReference;
@property (nonatomic, copy) TSTTableSelection *selection;
@property (nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic) TSTTextStatisticsTracker *tracker;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)cellWasEditedInCurrentSession;
- (void)changeEditingMode:(int)arg1;
- (id)coloredReferences;
- (id)commandController;
- (void)dealloc;
- (void)didEndEditingDueToCancelOperation;
- (id)editingCell;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })editingCellID;
- (bool)editingCellInProxy;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })editingCellRange;
- (int)editingMode;
- (id)editingStorage;
- (id)initForPasteboardFromSourceInfo:(id)arg1 stylesheet:(id)arg2;
- (id)initWithTableInfo:(id)arg1;
- (bool)isDispatchingPreflight;
- (bool)isEndingEditingDueToCancelOperation;
- (unsigned char)lastColumnHitByTap;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })lastEditingCellID;
- (void)p_performRichTextStorageDOLC:(id)arg1 newStorage:(id)arg2;
- (void)p_registerStorageObserver;
- (bool)p_shouldSetCellPostFlight;
- (void)p_unregisterStorageObserver;
- (void)performEndRichTextEditing;
- (id)prepareEditingStorageToEditCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (int)previousEditingMode;
- (void)reloadValue;
- (void)reloadValueFromFocusedCell;
- (id)searchReference;
- (id)selection;
- (void)setCellWasEditedInCurrentSession:(bool)arg1;
- (void)setDispatchingPreflight:(bool)arg1;
- (void)setEditingCell:(id)arg1;
- (void)setEditingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setEditingCellInProxy:(bool)arg1;
- (void)setEditingStorage:(id)arg1;
- (void)setEndingEditingDueToCancelOperation:(bool)arg1;
- (void)setLastColumnHitByTap:(unsigned char)arg1;
- (void)setLastEditingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setSearchReference:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setTableInfo:(id)arg1;
- (void)setTracker:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)storageForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)tableInfo;
- (id)tableModel;
- (id)tracker;
- (void)willEndEditingDueToCancelOperation;

@end
