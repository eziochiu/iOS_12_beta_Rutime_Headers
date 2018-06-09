/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SACSSymbolOwnerWrapper : NSObject {
    bool  _hasTextExecSegment;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolOwner;
    struct _CSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textSegmentRange;
}

@property (readonly) bool hasTextExecSegment;
@property (readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } symbolOwner;
@property (readonly) struct _CSRange { unsigned long long x1; unsigned long long x2; } textSegmentRange;

- (void)dealloc;
- (bool)hasTextExecSegment;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolOwner;
- (struct _CSRange { unsigned long long x1; unsigned long long x2; })textSegmentRange;

@end
