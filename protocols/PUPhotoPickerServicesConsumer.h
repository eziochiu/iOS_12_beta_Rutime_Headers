/* made by EzioChiu.
 */

@protocol PUPhotoPickerServicesConsumer <NSObject>

@required

- (<PUPhotoPicker> *)photoPicker;
- (void)setPhotoPicker:(id <PUPhotoPicker>)arg1;
- (void)setPhotoPickerMediaTypes:(NSArray *)arg1;

@end
