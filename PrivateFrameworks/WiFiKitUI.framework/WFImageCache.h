/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFImageCache : NSObject {
    NSMutableDictionary * _imageCache;
}

@property (nonatomic, retain) NSMutableDictionary *imageCache;

+ (id)sharedImageCache;

- (void).cxx_destruct;
- (bool)_isUIKitImageName:(id)arg1;
- (void)clearCache;
- (id)imageCache;
- (id)imageNamed:(id)arg1;
- (id)init;
- (void)setImageCache:(id)arg1;

@end
