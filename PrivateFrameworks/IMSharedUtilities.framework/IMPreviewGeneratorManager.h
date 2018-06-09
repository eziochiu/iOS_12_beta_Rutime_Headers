/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMPreviewGeneratorManager : NSObject {
    NSDictionary * _UTITypes;
    NSDictionary * _dynamicTypes;
}

@property (nonatomic, copy) NSDictionary *UTITypes;
@property (nonatomic, copy) NSDictionary *dynamicTypes;

+ (id)previewGeneratorClasses;
+ (id)sharedInstance;

- (id)UTITypes;
- (Class)_classForUTIType:(id)arg1;
- (Class)_previewGeneratorClassForSourceURL:(id)arg1;
- (void)dealloc;
- (id)dynamicTypes;
- (bool)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 previewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg3 error:(id*)arg4;
- (id)init;
- (bool)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3;
- (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
- (bool)persistPreviewToDiskCache:(struct CGImage { }*)arg1 previewURL:(id)arg2 error:(id*)arg3;
- (void)setDynamicTypes:(id)arg1;
- (void)setUTITypes:(id)arg1;

@end
