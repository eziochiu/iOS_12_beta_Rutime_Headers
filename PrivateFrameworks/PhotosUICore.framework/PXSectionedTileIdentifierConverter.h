/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {
    NSArray * _changeDetails;
    PXSectionedDataSource * _fromDataSource;
    NSIndexSet * _reloadedTileKindsOnObjectChanged;
    PXSectionedDataSource * _toDataSource;
}

@property (nonatomic, readonly) NSArray *changeDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXSectionedDataSource *fromDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexSet *reloadedTileKindsOnObjectChanged;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSectionedDataSource *toDataSource;

- (void).cxx_destruct;
- (id)changeDetails;
- (id)fromDataSource;
- (id)init;
- (id)initWithFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3;
- (id)reloadedTileKindsOnObjectChanged;
- (bool)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1;
- (void)setReloadedTileKindsOnObjectChanged:(id)arg1;
- (id)toDataSource;
- (bool)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2;

@end
