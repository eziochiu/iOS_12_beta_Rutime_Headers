/* made by EzioChiu.
 */

@protocol _WGDataSourceManager <NSObject>

@required

- (void)_start:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_stop:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSArray *)dataSources;
- (<_WGParentDataSourceManager> *)parentDataSourceManager;
- (void)setParentDataSourceManager:(id <_WGParentDataSourceManager>)arg1;

@end