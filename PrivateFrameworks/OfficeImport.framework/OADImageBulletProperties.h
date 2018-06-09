/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef * mImage;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)image;
- (id)initWithBlipRef:(id)arg1;
- (bool)isEqual:(id)arg1;

@end