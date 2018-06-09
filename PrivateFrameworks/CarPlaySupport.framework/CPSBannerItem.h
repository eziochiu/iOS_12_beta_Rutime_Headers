/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBannerItem : SBUIBannerItem {
    NSString * _bundleIdentifier;
    <CPBannerDelegate> * _delegate;
    NSArray * _detailTextVariants;
    NSUUID * _identifier;
    UIImage * _image;
    NSArray * _textVariants;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) <CPBannerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *detailTextVariants;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSArray *textVariants;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)bundleIdentifier;
- (id)delegate;
- (id)description;
- (id)detailTextVariants;
- (id)identifier;
- (id)image;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 image:(id)arg5 delegate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBannerItem:(id)arg1;
- (bool)isSticky;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)textVariants;

@end
