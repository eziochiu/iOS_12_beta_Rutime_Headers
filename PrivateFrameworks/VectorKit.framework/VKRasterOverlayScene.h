/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayScene : VKScene <NSCopying> {
    unsigned long long  _overlayLevel;
}

@property (nonatomic) unsigned long long overlayLevel;

- (unsigned long long)overlayLevel;
- (void)setOverlayLevel:(unsigned long long)arg1;

@end
