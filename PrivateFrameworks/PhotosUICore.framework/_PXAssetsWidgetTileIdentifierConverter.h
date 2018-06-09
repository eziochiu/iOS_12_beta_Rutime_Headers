/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXAssetsWidgetTileIdentifierConverter : NSObject <PXTileIdentifierConverter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1;
- (bool)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2;

@end
