/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneBitmap : MFBitmap {
    OITSUImage * m_image;
}

- (void)dealloc;
- (id)getImage;

@end
