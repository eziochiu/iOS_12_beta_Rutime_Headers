/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyCreditCard : NSObject {
    NSString * _details;
    NSString * _footer;
    UIImage * _image;
    NSURL * _imageURL;
    NSString * _providerDescription;
    NSString * _type;
    NSString * _usageNotice;
}

@property (nonatomic, copy) NSString *details;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *providerDescription;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *usageNotice;

- (void).cxx_destruct;
- (id)details;
- (id)footer;
- (id)image;
- (id)imageURL;
- (id)providerDescription;
- (void)setDetails:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setProviderDescription:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUsageNotice:(id)arg1;
- (id)type;
- (id)usageNotice;

@end
