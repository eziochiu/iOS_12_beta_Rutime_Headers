/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayTile : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSData * _image;
    struct { 
        long long x; 
        long long y; 
        long long z; 
        double contentScaleFactor; 
    }  _path;
    double  _scale;
}

@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSData *image;
@property (nonatomic) struct { long long x1; long long x2; long long x3; double x4; } path;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)description;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)image;
- (struct { long long x1; long long x2; long long x3; double x4; })path;
- (double)scale;
- (void)setFrame:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (void)setScale:(double)arg1;

@end
