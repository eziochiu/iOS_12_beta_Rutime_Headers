/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaSectionEntityValueProvider : NSObject <MusicEntityValueProviding> {
    <MusicEntityValueProviding> * _mediaEntityValueProvider;
    NSString * _sectionTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MusicEntityValueProviding> *mediaEntityValueProvider;
@property (nonatomic, copy) NSString *sectionTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)mediaEntityValueProvider;
- (id)sectionTitle;
- (void)setMediaEntityValueProvider:(id)arg1;
- (void)setSectionTitle:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
