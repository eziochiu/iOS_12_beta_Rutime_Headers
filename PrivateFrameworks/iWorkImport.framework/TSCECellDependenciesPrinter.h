/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellDependenciesPrinter : NSObject {
    NSMutableArray * _cleanCellDependencyRows;
    NSMutableArray * _dirtyCellDependencyRows;
    unsigned long long  _numDirtyCells;
    NSString * _ownerName;
    bool  _showCleanCells;
}

@property (nonatomic, retain) NSMutableArray *cleanCellDependencyRows;
@property (nonatomic, retain) NSMutableArray *dirtyCellDependencyRows;
@property (nonatomic) unsigned long long numDirtyCells;
@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic) bool showCleanCells;

+ (id)stringForOwnerKind:(int)arg1;

- (void).cxx_destruct;
- (void)addDependencyRow:(id)arg1;
- (id)cleanCellDependencyRows;
- (id)description;
- (id)dirtyCellDependencyRows;
- (id)init;
- (unsigned long long)numDirtyCells;
- (id)ownerName;
- (void)setCleanCellDependencyRows:(id)arg1;
- (void)setDirtyCellDependencyRows:(id)arg1;
- (void)setNumDirtyCells:(unsigned long long)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setShowCleanCells:(bool)arg1;
- (bool)showCleanCells;

@end
