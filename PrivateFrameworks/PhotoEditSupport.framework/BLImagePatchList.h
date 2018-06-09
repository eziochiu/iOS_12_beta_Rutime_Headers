/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImagePatchList : NSObject {
    struct CGImage { } * _baseImage;
    NSMutableArray * _patchArray;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

+ (id)imagePatchListWithSingleImage:(struct CGImage { }*)arg1;

- (void).cxx_destruct;
- (void)addPatch:(id)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithImage:(struct CGImage { }*)arg1;
- (void)removeAllPatches;
- (struct CGSize { double x1; double x2; })size;

@end
