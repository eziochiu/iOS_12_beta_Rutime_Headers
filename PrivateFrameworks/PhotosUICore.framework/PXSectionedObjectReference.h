/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedObjectReference : NSObject <NSCopying> {
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _indexPath;
    <NSObject><NSCopying> * _itemObject;
    <NSObject><NSCopying> * _leafObject;
    <NSObject><NSCopying> * _sectionObject;
    <NSObject><NSCopying> * _subitemObject;
}

@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } indexPath;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *itemObject;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *leafObject;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *sectionObject;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *subitemObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPath;
- (id)init;
- (id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4;
- (bool)isEqual:(id)arg1;
- (id)itemObject;
- (id)leafObject;
- (id)sectionObject;
- (id)subitemObject;

@end
