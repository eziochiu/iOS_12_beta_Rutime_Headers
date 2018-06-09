/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDataSet : NSObject <NSCopying> {
    NSArray * _dataItems;
    NSArray * _itemIDs;
    NSIndexSet * _updatedIndexes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleIndexRange;
}

@property (nonatomic, copy) NSArray *dataItems;
@property (nonatomic, readonly, copy) NSArray *itemIDs;
@property (nonatomic, copy) NSIndexSet *updatedIndexes;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } visibleIndexRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataItems;
- (id)dataSetByUpdatingDataItemsAtIndexes:(id)arg1 withDataItems:(id)arg2;
- (id)dataSetByUpdatingVisibleIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithDataItems:(id)arg1 itemIDs:(id)arg2;
- (id)itemIDs;
- (void)setDataItems:(id)arg1;
- (void)setUpdatedIndexes:(id)arg1;
- (void)setVisibleIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)updatedIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleIndexRange;

@end
