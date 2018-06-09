/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSString * _identifier;
    NSIndexPath * _indexPath;
    bool  _isClone;
    unsigned long long  _type;
}

@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) bool isClone;
@property (nonatomic, readonly) unsigned long long type;

+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;

- (void).cxx_destruct;
- (id)copyAsClone:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)indexPath;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(bool)arg4;
- (bool)isClone;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
