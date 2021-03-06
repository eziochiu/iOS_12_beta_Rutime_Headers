/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSScale : NUJSRational

@property (readonly) struct { long long x1; long long x2; } scale;
@property (readonly) NSValue *value;

- (id)initWithScale:(struct { long long x1; long long x2; })arg1;
- (id)nu_unwrapJSValue;
- (struct { long long x1; long long x2; })scale;
- (id)value;

@end
