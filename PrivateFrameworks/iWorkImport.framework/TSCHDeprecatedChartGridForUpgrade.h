/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHDeprecatedChartGridForUpgrade : TSPObject {
    TSCHChartGrid * mGrid;
}

@property (nonatomic, readonly, retain) TSCHChartGrid *grid;

- (void)dealloc;
- (id)grid;
- (void)loadFromUnarchiver:(id)arg1;

@end
