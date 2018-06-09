/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUVideoProperties : NSObject <NUVideoProperties> {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _cleanAperture;
    NSDictionary * _colorProperties;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoKeyFrameTime;
    NSArray * _metadata;
    long long  _orientation;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cleanAperture;
@property (nonatomic, retain) NSDictionary *colorProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoKeyFrameTime;
@property (nonatomic, retain) NSArray *metadata;
@property (nonatomic) long long orientation;
@property (nonatomic) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanAperture;
- (id)colorProperties;
- (id)description;
- (id)initWithProperties:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoKeyFrameTime;
- (id)metadata;
- (long long)orientation;
- (void)setCleanAperture:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setColorProperties:(id)arg1;
- (void)setLivePhotoKeyFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })size;

@end
