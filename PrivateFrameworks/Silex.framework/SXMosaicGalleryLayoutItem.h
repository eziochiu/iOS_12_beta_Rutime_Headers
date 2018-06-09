/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMosaicGalleryLayoutItem : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensions;
    int  _tileType;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } dimensions;
@property (nonatomic, readonly) int tileType;

- (double)aspectRatio;
- (id)description;
- (struct CGSize { double x1; double x2; })dimensions;
- (id)initWithDimensions:(struct CGSize { double x1; double x2; })arg1;
- (int)tileType;

@end
