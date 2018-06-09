/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPSolidBrush : MFPBrush {
    OITSUColor * mColor;
}

- (id)color;
- (void)dealloc;
- (void)fillPath:(id)arg1 evenOddRule:(bool)arg2;
- (id)initWithColor:(id)arg1;
- (void)setColor:(id)arg1;

@end
