/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXFileBackedAssetMetadata : NSObject {
    NSDate * _date;
    CLLocation * _location;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)date;
- (id)location;
- (void)setDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
