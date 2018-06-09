/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFixedScalePolicy : NSObject <NUScalePolicy> {
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct { long long x1; long long x2; } scale;
@property (readonly) Class superclass;

+ (id)oneToOneScalePolicy;

- (id)description;
- (id)init;
- (id)initWithScale:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })scale;
- (struct { long long x1; long long x2; })scaleForImageSize:(struct { long long x1; long long x2; })arg1;

@end
