/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesSpecManager : PXFeatureSpecManager {
    unsigned long long  _style;
}

@property (nonatomic, readonly) PXMemoriesSpec *spec;
@property (nonatomic, readonly) unsigned long long style;

- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (bool)shouldUpdateSpecForExtendedTraitCollectionChange:(unsigned long long)arg1;
- (Class)specClass;
- (unsigned long long)style;

@end
