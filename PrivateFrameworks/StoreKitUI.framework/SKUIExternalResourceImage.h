/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIExternalResourceImage : NSObject {
    bool  _alwaysTemplate;
    NSBundle * _bundle;
    NSString * _imageName;
}

@property (nonatomic) bool alwaysTemplate;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *imageName;

- (void).cxx_destruct;
- (bool)alwaysTemplate;
- (id)bundle;
- (id)imageName;
- (void)setAlwaysTemplate:(bool)arg1;
- (void)setBundle:(id)arg1;
- (void)setImageName:(id)arg1;

@end
