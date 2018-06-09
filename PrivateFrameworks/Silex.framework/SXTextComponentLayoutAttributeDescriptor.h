/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    STTextExclusionPath * _resultingExclusionPath;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) STTextExclusionPath *resultingExclusionPath;

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(bool)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)resultingExclusionPath;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResultingExclusionPath:(id)arg1;

@end