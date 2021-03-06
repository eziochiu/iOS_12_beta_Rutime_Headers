/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSelectionPathRenderInfo : NSObject {
    double  mRotation;
    NSString * mString;
    unsigned long long  mStyleIndex;
}

@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) unsigned long long styleIndex;

+ (id)renderInfoWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3;

- (void)dealloc;
- (id)initWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3;
- (double)rotation;
- (id)string;
- (unsigned long long)styleIndex;

@end
