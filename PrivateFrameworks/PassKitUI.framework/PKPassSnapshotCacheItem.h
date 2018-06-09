/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassSnapshotCacheItem : NSObject {
    struct CGImage { } * _image;
    double  _scale;
}

- (id)UIImageFromCache;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;

@end
