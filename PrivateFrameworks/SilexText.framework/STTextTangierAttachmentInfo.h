/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierAttachmentInfo : TSDDrawableInfo {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _actualRange;
    STTextExclusionPath * _exclusionPath;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } actualRange;
@property (nonatomic, retain) STTextExclusionPath *exclusionPath;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })actualRange;
- (id)exclusionPath;
- (Class)layoutClass;
- (Class)repClass;
- (void)setActualRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setExclusionPath:(id)arg1;

@end
