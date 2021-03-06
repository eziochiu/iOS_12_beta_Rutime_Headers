/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

@interface IPAAutoRegistryEntry : NSObject {
    Class  _autoCalculatorClass;
    Class  _autoSettingsClass;
    bool  _persistable;
}

@property (nonatomic, retain) Class autoCalculatorClass;
@property (nonatomic, retain) Class autoSettingsClass;
@property (nonatomic) bool persistable;

- (void).cxx_destruct;
- (Class)autoCalculatorClass;
- (Class)autoSettingsClass;
- (bool)persistable;
- (void)setAutoCalculatorClass:(Class)arg1;
- (void)setAutoSettingsClass:(Class)arg1;
- (void)setPersistable:(bool)arg1;

@end
