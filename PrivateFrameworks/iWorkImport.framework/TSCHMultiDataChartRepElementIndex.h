/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying> {
    unsigned long long  mSeriesIndex;
    unsigned long long  mValueIndex;
}

@property (nonatomic, readonly) unsigned long long seriesIndex;
@property (nonatomic, readonly) unsigned long long valueIndex;

+ (id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)seriesIndex;
- (id)seriesIndexSet;
- (unsigned long long)valueIndex;
- (id)valueIndexSet;

@end
