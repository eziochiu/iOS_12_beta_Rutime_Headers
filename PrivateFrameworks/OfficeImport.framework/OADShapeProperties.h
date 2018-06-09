/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShapeProperties : OADGraphicProperties {
    bool  mIsTextBox;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTextBox;
- (void)setIsTextBox:(bool)arg1;

@end
