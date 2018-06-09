/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingLayoutCoordinateSystem : NSObject <PUTilingCoordinateSystem> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _coordinateSystemOrigin;
    <PUTilingCoordinateSystem> * _parentCoordinateSystem;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } coordinateSystemOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUTilingCoordinateSystem> *parentCoordinateSystem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })coordinateSystemOrigin;
- (id)parentCoordinateSystem;
- (void)setCoordinateSystemOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParentCoordinateSystem:(id)arg1;

@end
