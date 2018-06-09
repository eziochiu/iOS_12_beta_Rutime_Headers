/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestColorSpace : NSObject <PLColorSpaceIdentity> {
    NSString * _colorSpaceName;
}

@property (nonatomic, copy) NSString *colorSpaceName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorSpaceName;
- (void)setColorSpaceName:(id)arg1;

@end
