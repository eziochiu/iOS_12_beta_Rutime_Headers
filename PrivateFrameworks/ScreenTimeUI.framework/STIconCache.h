/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIconCache : NSObject {
    NSCache * _iconByKeyCache;
    CNMonogrammer * _monogrammer;
    NSPersonNameComponentsFormatter * _personNameComponentsFormatter;
}

@property (nonatomic, retain) CNMonogrammer *monogrammer;
@property (nonatomic, retain) NSPersonNameComponentsFormatter *personNameComponentsFormatter;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (void)_fetchFamilyPhotoWithDSID:(id)arg1;
- (void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2;
- (id)init;
- (id)monogramImageForNameComponents:(id)arg1;
- (id)monogrammer;
- (id)notificationDotImageWithDiameter:(double)arg1;
- (id)personImageWithDSID:(id)arg1 fullName:(id)arg2;
- (id)personNameComponentsFormatter;
- (id)roundedImageForImageWithName:(id)arg1;
- (void)setMonogrammer:(id)arg1;
- (void)setPersonNameComponentsFormatter:(id)arg1;
- (id)tableUIImageForBundleID:(id)arg1;

@end
