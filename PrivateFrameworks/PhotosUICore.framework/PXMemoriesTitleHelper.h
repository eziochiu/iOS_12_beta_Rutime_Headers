/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesTitleHelper : NSObject {
    double  _minimumScaleFactor;
    long long  _preferredLineLength;
    NSString * _softLineBreak;
    NSString * _truncationToken;
}

@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long preferredLineLength;
@property (nonatomic, copy) NSString *softLineBreak;
@property (nonatomic, copy) NSString *truncationToken;

+ (id)defaultHelper;

- (void).cxx_destruct;
- (bool)_isTextLongerThanPreferredLine:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 minimumScaleFactor:(double)arg3;
- (id)displayableTextForTitle:(id)arg1 intent:(long long)arg2;
- (id)init;
- (double)minimumScaleFactor;
- (long long)preferredLineLength;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setPreferredLineLength:(long long)arg1;
- (void)setSoftLineBreak:(id)arg1;
- (void)setTruncationToken:(id)arg1;
- (id)softLineBreak;
- (id)titleForDisplayableText:(id)arg1 titleCategory:(long long)arg2 options:(unsigned long long)arg3;
- (id)truncationToken;

@end
