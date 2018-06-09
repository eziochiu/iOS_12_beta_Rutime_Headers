/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhoto : NSObject <NSCopying> {
    NTKPhotoAnalysis * _analyses;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _crop;
    NSURL * _imageURL;
    double  _irisDuration;
    double  _irisStillDisplayTime;
    NSURL * _irisVideoURL;
    bool  _isIris;
    NSString * _localIdentifier;
    NSDate * _modificationDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalCrop;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } crop;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic) double irisDuration;
@property (nonatomic) double irisStillDisplayTime;
@property (nonatomic, copy) NSURL *irisVideoURL;
@property (nonatomic) bool isIris;
@property (nonatomic, readonly) bool isMissingAnalysis;
@property (nonatomic, copy) NSString *localIdentifier;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalCrop;
@property (nonatomic, readonly) NSString *uuidFromLocalIdentifierAndModificationDate;

+ (id)decodeFromDictionary:(id)arg1 forResourceDirectory:(id)arg2;

- (void).cxx_destruct;
- (id)analysisForAlignment:(unsigned long long)arg1 deviceSizeClass:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })crop;
- (id)encodeAsDictionary;
- (id)imageURL;
- (id)initWithLegacySidecar:(id)arg1;
- (double)irisDuration;
- (double)irisStillDisplayTime;
- (id)irisVideoURL;
- (bool)isEqualToAsset:(id)arg1;
- (bool)isEqualToPhoto:(id)arg1;
- (bool)isIris;
- (bool)isMissingAnalysis;
- (id)localIdentifier;
- (id)modificationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalCrop;
- (void)setAnalysis:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3;
- (void)setCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageURL:(id)arg1;
- (void)setIrisDuration:(double)arg1;
- (void)setIrisStillDisplayTime:(double)arg1;
- (void)setIrisVideoURL:(id)arg1;
- (void)setIsIris:(bool)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setOriginalCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)uuidFromLocalIdentifierAndModificationDate;

@end
