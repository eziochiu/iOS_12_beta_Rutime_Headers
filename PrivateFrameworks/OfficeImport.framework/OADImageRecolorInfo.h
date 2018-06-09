/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageRecolorInfo : NSObject {
    NSDictionary * mColors;
    NSDictionary * mFills;
}

- (id)colors;
- (void)dealloc;
- (id)description;
- (id)fills;
- (unsigned long long)hash;
- (id)initWithColors:(id)arg1 fills:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
