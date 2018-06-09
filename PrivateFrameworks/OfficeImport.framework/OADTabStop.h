/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTabStop : NSObject {
    unsigned char  mAlign;
    int  mPosition;
}

- (unsigned char)align;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)position;
- (void)setAlign:(unsigned char)arg1;
- (void)setPosition:(int)arg1;

@end
