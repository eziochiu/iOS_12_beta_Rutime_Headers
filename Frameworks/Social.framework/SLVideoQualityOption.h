/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLVideoQualityOption : NSObject {
    NSString * _exportPreset;
    NSString * _identifier;
    NSString * _name;
    long long  _size;
}

@property (nonatomic, retain) NSString *exportPreset;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long size;

+ (id)videoQualityOptionForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)exportPreset;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 exportPreset:(id)arg3 size:(long long)arg4;
- (id)name;
- (void)setExportPreset:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(long long)arg1;
- (long long)size;
- (id)sizeDescription;

@end
