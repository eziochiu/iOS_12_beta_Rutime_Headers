/* made by EzioChiu.
 */

@protocol TSTCellIterating <TSTDataStoreIterating>

@required

- (bool)getNextCellData:(id*)arg1;
- (void)iterateCellsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSTCellIteratorData> *, bool*, void*
- (<TSTCellIteratorData> *)nextCellData;
- (void)terminate;

@optional

- (TSTInfo *)tableInfo;

@end
