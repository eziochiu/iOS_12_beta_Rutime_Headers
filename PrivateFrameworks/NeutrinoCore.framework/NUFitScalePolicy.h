/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFitScalePolicy : NSObject <NUScalePolicy> {
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (id)init;
- (id)initWithTargetPixelSize:(struct { long long x1; long long x2; })arg1;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct { long long x1; long long x2; })scaleForImageSize:(struct { long long x1; long long x2; })arg1;

@end
