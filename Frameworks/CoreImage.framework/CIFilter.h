/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFilter : NSObject <NSCopying, NSSecureCoding> {
    bool  _enabled;
    void * _priv;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (getter=isEnabled) bool enabled;
@property (nonatomic, readonly) NSArray *inputKeys;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CIImage *outputImage;
@property (nonatomic, readonly, copy) CIImage *outputInputImageWithFixmeWarning;
@property (nonatomic, readonly) NSArray *outputKeys;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)_filterArrayFromImageMetadata:(struct CGImageMetadata { }*)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)_filterArrayFromProperties:(id)arg1;
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (const struct CGImageMetadata { }*)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)addFilterToSkip:(id)arg1;
+ (id)allCategories:(bool)arg1;
+ (id)customAttributes;
+ (bool)exchangeImplementationsForClass;
+ (id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
+ (id)filterName:(id)arg1 append:(id)arg2 arguments:(id)arg3;
+ (id)filterName:(id)arg1 prepend:(id)arg2 imageName:(id)arg3 arguments:(id)arg4;
+ (id)filterName:(id)arg1 replacement:(id)arg2;
+ (id)filterName:(id)arg1 replacement:(id)arg2 arguments:(id)arg3;
+ (id)filterNamesInCategories:(id)arg1;
+ (id)filterNamesInCategory:(id)arg1;
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 properties:(id)arg2 options:(id)arg3;
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2;
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3;
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;
+ (id)filterWithName:(id)arg1 setDefaults:(bool)arg2;
+ (id)filterWithName:(id)arg1 withInputParameters:(id)arg2;
+ (id)filterWithString:(id)arg1;
+ (unsigned int)indexForWrapperNumber:(unsigned int)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (id)localizedDescriptionForFilterName:(id)arg1;
+ (id)localizedNameForCategory:(id)arg1;
+ (id)localizedNameForFilterName:(id)arg1;
+ (id)localizedReferenceDocumentationForFilterName:(id)arg1;
+ (id)metalFilterWithName:(id)arg1;
+ (id)metalFilterWithName:(id)arg1 withInputParameters:(id)arg2;
+ (void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3;
+ (id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)supportsSecureCoding;
+ (bool)wrapClassIfNeeded:(Class)arg1;

- (id)_append:(id)arg1 image:(id)arg2;
- (id)_appendSingleFilterTo:(id)arg1 filterAndSettings:(id)arg2;
- (id)_copyFilterWithZone:(struct _NSZone { }*)arg1;
- (void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1;
- (bool)_filterClassInCategory:(id)arg1;
- (bool)_isIdentity;
- (void)_prepend:(id)arg1;
- (void)_prependSingleFilter:(id)arg1;
- (id)_serializedXMPString;
- (id)apply:(id)arg1;
- (id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3;
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(struct CGColorSpace { }*)arg4;
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(struct CGColorSpace { }*)arg4;
- (id)attributes;
- (int)compatibilityVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customAttributes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputKeys;
- (bool)isEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)outputImage;
- (id)outputImageCatchAll:(unsigned int)arg1;
- (id)outputKeys;
- (void)setDefaults;
- (void)setEnabled:(bool)arg1;
- (void)setIdentity;
- (void)setName:(id)arg1;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)userInfo;
- (id)valueForUndefinedKey:(id)arg1;
- (id)wrappedOutputImage10;
- (id)wrappedOutputImage11;
- (id)wrappedOutputImage12;
- (id)wrappedOutputImage13;
- (id)wrappedOutputImage14;
- (id)wrappedOutputImage15;
- (id)wrappedOutputImage16;
- (id)wrappedOutputImage17;
- (id)wrappedOutputImage18;
- (id)wrappedOutputImage19;
- (id)wrappedOutputImage20;
- (id)wrappedOutputImage21;
- (id)wrappedOutputImage22;
- (id)wrappedOutputImage23;
- (id)wrappedOutputImage24;
- (id)wrappedOutputImage25;
- (id)wrappedOutputImage26;
- (id)wrappedOutputImage27;
- (id)wrappedOutputImage28;
- (id)wrappedOutputImage29;
- (id)wrappedOutputImage30;
- (id)wrappedOutputImage31;
- (id)wrappedOutputImage32;
- (id)wrappedOutputImage33;
- (id)wrappedOutputImage34;
- (id)wrappedOutputImage35;
- (id)wrappedOutputImage36;
- (id)wrappedOutputImage37;
- (id)wrappedOutputImage38;
- (id)wrappedOutputImage39;
- (id)wrappedOutputImage40;
- (id)wrappedOutputImage41;
- (id)wrappedOutputImage42;
- (id)wrappedOutputImage43;
- (id)wrappedOutputImage44;
- (id)wrappedOutputImage45;
- (id)wrappedOutputImage46;
- (id)wrappedOutputImage47;
- (id)wrappedOutputImage48;
- (id)wrappedOutputImage49;
- (id)wrappedOutputImage50;
- (id)wrappedOutputImage51;
- (id)wrappedOutputImage52;
- (id)wrappedOutputImage53;
- (id)wrappedOutputImage54;
- (id)wrappedOutputImage55;
- (id)wrappedOutputImage56;
- (id)wrappedOutputImage57;
- (id)wrappedOutputImage58;
- (id)wrappedOutputImage59;
- (id)wrappedOutputImage60;
- (id)wrappedOutputImage61;
- (id)wrappedOutputImage62;
- (id)wrappedOutputImage63;
- (id)wrappedOutputImage64;
- (id)wrappedOutputImage65;
- (id)wrappedOutputImage66;
- (id)wrappedOutputImage67;
- (id)wrappedOutputImage68;
- (id)wrappedOutputImage69;
- (id)wrappedOutputImage70;
- (id)wrappedOutputImage71;
- (id)wrappedOutputImage72;
- (id)wrappedOutputImage73;
- (id)wrappedOutputImage74;
- (id)wrappedOutputImage75;
- (id)wrappedOutputImage76;
- (id)wrappedOutputImage77;
- (id)wrappedOutputImage78;
- (id)wrappedOutputImage79;
- (id)wrappedOutputImage80;
- (id)wrappedOutputImage81;
- (id)wrappedOutputImage82;
- (id)wrappedOutputImage83;
- (id)wrappedOutputImage84;
- (id)wrappedOutputImage85;
- (id)wrappedOutputImage86;
- (id)wrappedOutputImage87;
- (id)wrappedOutputImage88;
- (id)wrappedOutputImage89;
- (id)wrappedOutputImage90;
- (id)wrappedOutputImage91;
- (id)wrappedOutputImage92;
- (id)wrappedOutputImage93;
- (id)wrappedOutputImage94;
- (id)wrappedOutputImage95;
- (id)wrappedOutputImage96;
- (id)wrappedOutputImage97;
- (id)wrappedOutputImage98;
- (id)wrappedOutputImage99;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)outputInputImageWithFixmeWarning;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

+ (id)_dataExtractionOverrrides;
+ (id)autoRedEyeExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)extractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)faceBalanceExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)localLightExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)reductionFilterExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)smartColorExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)smartToneExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
+ (id)straightenExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;

- (id)extractDataToDictionary:(id)arg1 options:(id)arg2 context:(id)arg3 colorSpace:(struct CGColorSpace { }*)arg4 error:(id*)arg5;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)_pl_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)_pl_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
