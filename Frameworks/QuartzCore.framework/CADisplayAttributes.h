/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayAttributes : NSObject {
    struct EDIDAttributes { 
        int dolbyVision; 
        int pqEOTF; 
        int bt2020YCC; 
        int hdrStaticMetadataType1; 
    }  _edid_attributes;
}

@property (readonly) long long bt2020YCC;
@property (readonly) long long dolbyVision;
@property (readonly) long long hdrStaticMetadataType1;
@property (readonly) long long pqEOTF;

- (id).cxx_construct;
- (id)_initWithAttributes:(struct EDIDAttributes { int x1; int x2; int x3; int x4; })arg1;
- (long long)bt2020YCC;
- (long long)dolbyVision;
- (long long)hdrStaticMetadataType1;
- (long long)pqEOTF;

@end
