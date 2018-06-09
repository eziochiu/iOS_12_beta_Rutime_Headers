/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor * mFromColor;
    OADColor * mToColor;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fromColor;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setFromColor:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setToColor:(id)arg1;
- (id)toColor;

@end
