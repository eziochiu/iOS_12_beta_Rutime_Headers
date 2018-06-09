/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTile : NSObject {
    struct __IOSurface { } * _decodedSurface;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    id  _tileId;
    bool  _visible;
}

- (void)dealloc;
- (struct __IOSurface { }*)decodedSurface;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (void)setDecodedSurface:(struct __IOSurface { }*)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTileId:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)tileId;
- (bool)visible;

@end
