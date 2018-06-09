/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIHelper : NSObject {
    unsigned int  _reserved;
    NSString * blockDataCacheKeyBGRX;
    NSString * blockDataCacheKeyRGBX;
    struct _csibitmap { unsigned int x1; union { unsigned int x_2_1_1; struct _csibitmapflags { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 30; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; } * bmp;
    NSData * csiData;
    _CUIThemePixelRendition * rendition;
    int  renditionLock;
    _CSIRenditionBlockData * retainedBlockData;
    _CSIRenditionBlockData * sharedBlockDataBGRX;
    _CSIRenditionBlockData * sharedBlockDataRGBX;
    unsigned int  shouldCache;
    struct _slice { 
        unsigned int x; 
        unsigned int y; 
        unsigned int width; 
        unsigned int height; 
    }  slice;
    unsigned long long  sourceRowbytes;
    unsigned int  usedForDataProvider;
}

@end
