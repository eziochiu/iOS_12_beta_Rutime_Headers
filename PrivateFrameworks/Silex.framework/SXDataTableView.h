/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableView : SXDataTableDrawView {
    SXDataTableBlueprint * _blueprint;
    NSMutableDictionary * _columnViews;
    <SXDataTableDataSource> * _dataSource;
    NSMutableDictionary * _rowViews;
    <SXDataTableViewDataSource> * _viewDataSource;
}

@property (nonatomic, retain) SXDataTableBlueprint *blueprint;
@property (nonatomic, retain) NSMutableDictionary *columnViews;
@property (nonatomic) <SXDataTableDataSource> *dataSource;
@property (nonatomic, retain) NSMutableDictionary *rowViews;
@property (nonatomic, readonly) <SXDataTableViewDataSource> *viewDataSource;

- (void).cxx_destruct;
- (id)blueprint;
- (id)columnViews;
- (id)dataSource;
- (void)draw:(id /* block */)arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; })indexPathForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithDataSource:(id)arg1;
- (void)layoutCellsForBlueprint:(id)arg1;
- (struct CGPoint { double x1; double x2; })originOffset;
- (void)prepareDrawingForBlueprint:(id)arg1;
- (void)reset;
- (id)rowViews;
- (void)setBlueprint:(id)arg1;
- (void)setColumnViews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setRowViews:(id)arg1;
- (id)viewDataSource;
- (id)viewForColumnAtIndex:(unsigned long long)arg1;
- (id)viewForRowAtIndex:(unsigned long long)arg1;

@end
